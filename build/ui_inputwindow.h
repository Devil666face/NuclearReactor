/********************************************************************************
** Form generated from reading UI file 'inputwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTWINDOW_H
#define UI_INPUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_nuclear;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_nuclear;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QComboBox *comboBox_type;
    QLabel *label_2;
    QSpinBox *spinBox_N;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_3;
    QSpinBox *spinBox_eta;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_lon;
    QLabel *label_7;
    QLabel *label_6;
    QDoubleSpinBox *doubleSpinBox_lat;
    QLabel *label_8;
    QGridLayout *lay_coor;
    QFrame *frame_weather;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_weater;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QSpinBox *spinBox_V_wind;
    QLabel *label_12;
    QLabel *label_10;
    QSpinBox *spinBox_alfa_wind;
    QLabel *label_13;
    QLabel *label_11;
    QComboBox *comboBox_cloud;
    QGridLayout *lay_enter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InputWindow)
    {
        if (InputWindow->objectName().isEmpty())
            InputWindow->setObjectName(QString::fromUtf8("InputWindow"));
        InputWindow->resize(419, 455);
        centralwidget = new QWidget(InputWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        frame_nuclear = new QFrame(centralwidget);
        frame_nuclear->setObjectName(QString::fromUtf8("frame_nuclear"));
        frame_nuclear->setFrameShape(QFrame::WinPanel);
        frame_nuclear->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_nuclear);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_nuclear = new QGroupBox(frame_nuclear);
        groupBox_nuclear->setObjectName(QString::fromUtf8("groupBox_nuclear"));
        verticalLayout_2 = new QVBoxLayout(groupBox_nuclear);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_nuclear);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        comboBox_type = new QComboBox(groupBox_nuclear);
        comboBox_type->addItem(QString());
        comboBox_type->addItem(QString());
        comboBox_type->setObjectName(QString::fromUtf8("comboBox_type"));

        gridLayout_3->addWidget(comboBox_type, 0, 1, 1, 2);

        label_2 = new QLabel(groupBox_nuclear);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_2, 1, 0, 1, 1);

        spinBox_N = new QSpinBox(groupBox_nuclear);
        spinBox_N->setObjectName(QString::fromUtf8("spinBox_N"));
        spinBox_N->setMinimum(1);
        spinBox_N->setMaximum(10);

        gridLayout_3->addWidget(spinBox_N, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox_nuclear);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setTextFormat(Qt::AutoText);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 2, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox_nuclear);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setWrapping(false);
        dateTimeEdit->setButtonSymbols(QAbstractSpinBox::UpDownArrows);

        gridLayout_3->addWidget(dateTimeEdit, 2, 1, 1, 2);

        label_3 = new QLabel(groupBox_nuclear);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 3, 0, 1, 1);

        spinBox_eta = new QSpinBox(groupBox_nuclear);
        spinBox_eta->setObjectName(QString::fromUtf8("spinBox_eta"));
        spinBox_eta->setMaximum(100);
        spinBox_eta->setSingleStep(10);

        gridLayout_3->addWidget(spinBox_eta, 3, 1, 1, 1);

        label_14 = new QLabel(groupBox_nuclear);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_3->addWidget(label_14, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(groupBox_nuclear);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        doubleSpinBox_lon = new QDoubleSpinBox(groupBox_nuclear);
        doubleSpinBox_lon->setObjectName(QString::fromUtf8("doubleSpinBox_lon"));
        doubleSpinBox_lon->setEnabled(false);
        doubleSpinBox_lon->setReadOnly(true);
        doubleSpinBox_lon->setMinimum(-360.000000000000000);
        doubleSpinBox_lon->setMaximum(360.000000000000000);
        doubleSpinBox_lon->setValue(0.000000000000000);

        gridLayout->addWidget(doubleSpinBox_lon, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_nuclear);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox_nuclear);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        doubleSpinBox_lat = new QDoubleSpinBox(groupBox_nuclear);
        doubleSpinBox_lat->setObjectName(QString::fromUtf8("doubleSpinBox_lat"));
        doubleSpinBox_lat->setEnabled(false);
        doubleSpinBox_lat->setReadOnly(false);
        doubleSpinBox_lat->setMinimum(-360.000000000000000);
        doubleSpinBox_lat->setMaximum(360.000000000000000);
        doubleSpinBox_lat->setValue(0.000000000000000);

        gridLayout->addWidget(doubleSpinBox_lat, 1, 1, 1, 1);

        label_8 = new QLabel(groupBox_nuclear);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 2, 1, 1);


        horizontalLayout_2->addLayout(gridLayout);

        lay_coor = new QGridLayout();
        lay_coor->setObjectName(QString::fromUtf8("lay_coor"));

        horizontalLayout_2->addLayout(lay_coor);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(groupBox_nuclear);


        verticalLayout_4->addWidget(frame_nuclear);

        frame_weather = new QFrame(centralwidget);
        frame_weather->setObjectName(QString::fromUtf8("frame_weather"));
        frame_weather->setFrameShape(QFrame::WinPanel);
        frame_weather->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_weather);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_weater = new QGroupBox(frame_weather);
        groupBox_weater->setObjectName(QString::fromUtf8("groupBox_weater"));
        gridLayout_2 = new QGridLayout(groupBox_weater);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_9 = new QLabel(groupBox_weater);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 0, 0, 1, 1);

        spinBox_V_wind = new QSpinBox(groupBox_weater);
        spinBox_V_wind->setObjectName(QString::fromUtf8("spinBox_V_wind"));
        spinBox_V_wind->setMaximum(10);

        gridLayout_2->addWidget(spinBox_V_wind, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_weater);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox_weater);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 1, 0, 1, 1);

        spinBox_alfa_wind = new QSpinBox(groupBox_weater);
        spinBox_alfa_wind->setObjectName(QString::fromUtf8("spinBox_alfa_wind"));
        spinBox_alfa_wind->setMaximum(359);
        spinBox_alfa_wind->setSingleStep(10);

        gridLayout_2->addWidget(spinBox_alfa_wind, 1, 1, 1, 1);

        label_13 = new QLabel(groupBox_weater);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 1, 2, 1, 1);

        label_11 = new QLabel(groupBox_weater);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 2, 0, 1, 1);

        comboBox_cloud = new QComboBox(groupBox_weater);
        comboBox_cloud->addItem(QString());
        comboBox_cloud->addItem(QString());
        comboBox_cloud->addItem(QString());
        comboBox_cloud->setObjectName(QString::fromUtf8("comboBox_cloud"));

        gridLayout_2->addWidget(comboBox_cloud, 2, 1, 1, 2);


        verticalLayout->addWidget(groupBox_weater);


        verticalLayout_4->addWidget(frame_weather);

        lay_enter = new QGridLayout();
        lay_enter->setObjectName(QString::fromUtf8("lay_enter"));

        verticalLayout_4->addLayout(lay_enter);

        InputWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InputWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 419, 26));
        InputWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(InputWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InputWindow->setStatusBar(statusbar);

        retranslateUi(InputWindow);

        QMetaObject::connectSlotsByName(InputWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InputWindow)
    {
        InputWindow->setWindowTitle(QCoreApplication::translate("InputWindow", "\320\230\321\201\321\205\320\276\320\264\320\275\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        groupBox_nuclear->setTitle(QCoreApplication::translate("InputWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\257\320\255\320\240", nullptr));
        label->setText(QCoreApplication::translate("InputWindow", "\320\242\320\270\320\277 \321\217\320\264\320\265\321\200\320\275\320\276\320\263\320\276 \321\200\320\265\320\260\320\272\321\202\320\276\321\200\320\260", nullptr));
        comboBox_type->setItemText(0, QCoreApplication::translate("InputWindow", "\320\240\320\221\320\234\320\232-1000", nullptr));
        comboBox_type->setItemText(1, QCoreApplication::translate("InputWindow", "\320\222\320\222\320\255\320\240-1000", nullptr));

        label_2->setText(QCoreApplication::translate("InputWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\260\320\262\320\260\321\200\320\270\320\271\320\275\321\213\321\205 \321\200\320\265\320\272\320\260\321\202\320\276\321\200\320\276\320\262, N", nullptr));
        label_4->setText(QCoreApplication::translate("InputWindow", "\320\220\321\201\321\202\321\200\320\276\320\275\320\276\320\274\320\270\321\207\320\265\321\201\320\272\320\276\320\265 \320\262\321\200\320\265\320\274\321\217 \320\260\320\262\320\260\321\200\320\270\320\270, Tp", nullptr));
        label_3->setText(QCoreApplication::translate("InputWindow", "\320\224\320\276\320\273\321\217 \320\262\321\213\320\261\321\200\320\260\321\210\320\265\320\275\320\275\321\213\321\205 \320\270\320\267 \320\257\320\255\320\240 \320\240\320\222, \316\267", nullptr));
        label_14->setText(QCoreApplication::translate("InputWindow", "%", nullptr));
        label_5->setText(QCoreApplication::translate("InputWindow", "\320\224\320\276\320\273\320\263\320\276\321\202\320\260", nullptr));
        label_7->setText(QCoreApplication::translate("InputWindow", "\302\260", nullptr));
        label_6->setText(QCoreApplication::translate("InputWindow", "\320\250\320\270\321\200\320\276\321\202\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("InputWindow", "\302\260", nullptr));
        groupBox_weater->setTitle(QCoreApplication::translate("InputWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\201\321\200\320\265\320\264\321\213", nullptr));
        label_9->setText(QCoreApplication::translate("InputWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\262\320\265\321\202\321\200\320\260, V", nullptr));
        label_12->setText(QCoreApplication::translate("InputWindow", "\320\274/\321\201", nullptr));
        label_10->setText(QCoreApplication::translate("InputWindow", "\320\235\320\260\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\262\320\265\321\202\321\200\320\260, \316\261", nullptr));
        label_13->setText(QCoreApplication::translate("InputWindow", "\302\260", nullptr));
        label_11->setText(QCoreApplication::translate("InputWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\276\320\261\320\273\320\260\321\207\320\275\320\276\320\263\320\276\n"
"\320\277\320\276\320\272\321\200\320\276\320\262\320\260", nullptr));
        comboBox_cloud->setItemText(0, QCoreApplication::translate("InputWindow", "\320\236\321\202\321\201\321\203\321\202\321\201\321\202\320\262\321\203\320\265\321\202", nullptr));
        comboBox_cloud->setItemText(1, QCoreApplication::translate("InputWindow", "\320\241\321\200\320\265\320\264\320\275\320\270\320\271", nullptr));
        comboBox_cloud->setItemText(2, QCoreApplication::translate("InputWindow", "\320\241\320\277\320\273\320\276\321\210\320\275\320\276\320\271", nullptr));

    } // retranslateUi

};

namespace Ui {
    class InputWindow: public Ui_InputWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTWINDOW_H
