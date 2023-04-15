#include "inputwindow.h"
#include "ui_inputwindow.h"

InputWindow::InputWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InputWindow)
{
    ui->setupUi(this);
    blast = BlastMath();
//    create_button_enter(create_button(":/new/prefix1/icons/add.gif","Нажмите для добавления текущих параметров",64,ui->lay_enter));
    create_button_coor(create_button(":/new/prefix1/icons/coor.gif","Нажмите для выбора на карте координат взрыва",64,ui->lay_coor));
    create_button_coor_unit(create_button(":/new/prefix1/icons/coor.gif","Нажмите для выбора на карте координат подразделения",64,ui->lay_coor_unit));
    set_dateTime(ui->dateTimeEdit);
}

InputWindow::InputWindow(QWidget *parent, BlastMath _blast) :
    QMainWindow(parent),
    ui(new Ui::InputWindow)
{
    ui->setupUi(this);
    blast = _blast;
    set_coor_in_ui(blast.lat_unit,blast.lat_unit,ui->doubleSpinBox_lon_unit,ui->doubleSpinBox_lat_unit);
    set_coor_in_ui(blast.lat,blast.lat,ui->doubleSpinBox_lon,ui->doubleSpinBox_lat);
    create_button_coor(create_button(":/new/prefix1/icons/coor.gif","Нажмите для выбора на карте координат взрыва",64,ui->lay_coor));
    create_button_coor_unit(create_button(":/new/prefix1/icons/coor.gif","Нажмите для выбора на карте координат подразделения",64,ui->lay_coor_unit));
    set_dateTime(ui->dateTimeEdit);
}

InputWindow::~InputWindow()
{
    delete ui;
}

void InputWindow::set_dateTime(QDateTimeEdit *&edit)
{
    edit->setDateTime(QDateTime::currentDateTime());
    blast.date_time=edit->dateTime();
}

AnimatedLabel *InputWindow::create_button(QString icon_path, QString legend, int size, QGridLayout*& lay)
{
    AnimatedLabel* button = new AnimatedLabel(this, icon_path, legend, size, size);
    lay->addWidget(button);
    return button;
}

void InputWindow::create_button_enter(AnimatedLabel *button)
{
    connect(button, SIGNAL(clicked()), SLOT(on_pushButton_enter()));
}

void InputWindow::create_button_coor(AnimatedLabel *button)
{
    connect(button, SIGNAL(clicked()), SLOT(on_pushButton_coor()));
}

void InputWindow::create_button_coor_unit(AnimatedLabel *button)
{
    connect(button, SIGNAL(clicked()), SLOT(on_pushButton_coor_unit()));
}

bool InputWindow::check_coor(qreal lon, qreal lat, QString header, QString message)
{
    if ((lon!=-1) && (lat!=-1)) return true;
    QMessageBox *msgBox = new QMessageBox(QMessageBox::Warning,
                                          header,
                                          message,
                                          QMessageBox::Yes| QMessageBox::No);
    if(msgBox->exec() == QMessageBox::Yes)
    {
        return true;
    }
    delete msgBox;
    return false;
}

void InputWindow::set_coor_in_ui(qreal lon, qreal lat, QDoubleSpinBox *&lon_spin, QDoubleSpinBox *&lat_spin)
{
    lon_spin->setValue(blast.rad_to_deg(lon));
    lat_spin->setValue(blast.rad_to_deg(lat));
}

void InputWindow::on_comboBox_type_currentIndexChanged(int index)
{
    blast.type = blast.set_type(index);
}

void InputWindow::on_pushButton_enter()
{
    if (!check_coor(blast.lon, blast.lat, "Введите координаты", "Координаты ядерного энергетического реактора не заданы. Вы действительно хотите продолжить?")) return;
    emit send_blast_data(blast);
    this->close();
}

void InputWindow::on_pushButton_coor()
{
    send_button = "coor";
    emit coor_button_push();
    this->hide();
}

void InputWindow::on_pushButton_coor_unit()
{
    send_button = "unit";
    emit coor_button_push();
    this->hide();
}

void InputWindow::on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime)
{
    blast.date_time=dateTime;
}

void InputWindow::recive_coor_from_mainwidnow(qreal lon, qreal lat)
{
    if (send_button=="coor") {
        blast.lon=lon;
        blast.lat=lat;
        set_coor_in_ui(lon, lat, ui->doubleSpinBox_lon, ui->doubleSpinBox_lat);
        blast.set(ui->comboBox_type->currentIndex(),
                  ui->comboBox_cloud->currentIndex(),
                  ui->dateTimeEdit->dateTime(),
                  ui->spinBox_N->value(),
                  ui->spinBox_eta->value(),
                  ui->spinBox_V_wind->value(),
                  ui->spinBox_alfa_wind->value());
        emit send_blast_data(blast);
    }
    if (send_button=="unit") {
        blast.lon_unit=lon;
        blast.lat_unit=lat;
        set_coor_in_ui(lon,lat,ui->doubleSpinBox_lon_unit,ui->doubleSpinBox_lat_unit);
        emit send_blast_data(blast);
    }
}

void InputWindow::on_comboBox_cloud_currentIndexChanged(int index)
{
    blast.type_cloud = blast.set_type_cloud(index);
}
