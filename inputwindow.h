#ifndef INPUTWINDOW_H
#define INPUTWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QComboBox>
#include <QMessageBox>
#include <QDoubleSpinBox>
#include <QGridLayout>
#include <QDateTimeEdit>
#include <QtGlobal>
#include "blastmath.h"
#include "animatedlabel.h"

namespace Ui {
class InputWindow;
}

class InputWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit InputWindow(QWidget *parent = nullptr);
    ~InputWindow();
    BlastMath blast;

private:
    Ui::InputWindow *ui;
    QString send_button;

    void set_dateTime(QDateTimeEdit*& edit);

    AnimatedLabel *create_button(QString icon_path, QString legend, int size, QGridLayout *&lay);
    void create_button_enter(AnimatedLabel* button);
    void create_button_coor(AnimatedLabel* button);
    bool check_coor(qreal lon, qreal lat, QString header, QString message);
    void set_coor_in_ui(qreal lon, qreal lat, QDoubleSpinBox*& lon_spin, QDoubleSpinBox*& lat_spin);

private slots:
    void on_comboBox_type_currentIndexChanged(int index);
    void on_pushButton_enter();
    void on_pushButton_coor();
    void on_dateTimeEdit_dateTimeChanged(const QDateTime &dateTime);
    void recive_coor_from_mainwidnow(qreal lon, qreal lat);

    void on_comboBox_cloud_currentIndexChanged(int index);

signals:
    void send_blast_data(BlastMath blast);
    void coor_button_push();
};

#endif // INPUTWINDOW_H
