/********************************************************************************
** Form generated from reading UI file 'infowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFOWINDOW_H
#define UI_INFOWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InfoWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *InfoWindow)
    {
        if (InfoWindow->objectName().isEmpty())
            InfoWindow->setObjectName(QString::fromUtf8("InfoWindow"));
        InfoWindow->resize(1078, 752);
        centralwidget = new QWidget(InfoWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::WinPanel);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(1, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(2, 2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(3, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(4, 0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(4, 1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(4, 2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(5, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(5, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(5, 2, __qtablewidgetitem26);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        verticalLayout_2->addWidget(frame);

        InfoWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InfoWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1078, 26));
        InfoWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(InfoWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InfoWindow->setStatusBar(statusbar);

        retranslateUi(InfoWindow);

        QMetaObject::connectSlotsByName(InfoWindow);
    } // setupUi

    void retranslateUi(QMainWindow *InfoWindow)
    {
        InfoWindow->setWindowTitle(QCoreApplication::translate("InfoWindow", "\320\241\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\260\321\217 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("InfoWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("InfoWindow", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("InfoWindow", "\320\235\320\260\320\270\320\274\320\265\320\275\320\276\320\262\320\260\320\275\320\270\320\265 \320\220\320\245\320\236\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("InfoWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("InfoWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("InfoWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("InfoWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("InfoWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("InfoWindow", "6", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(0, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("InfoWindow", "\320\222\320\265\321\211\320\265\321\201\321\202\320\262\320\260\n"
"\320\277\321\200\320\265\320\270\320\274\321\203\321\211\320\265\321\201\321\202\320\262\320\265\320\275\320\275\320\276\n"
"\321\203\320\264\321\203\321\210\320\260\321\216\321\211\320\265\320\263\320\276 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(0, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("InfoWindow", "\320\222\320\276\320\267\320\264\320\265\320\271\321\201\321\202\320\262\321\203\321\216\321\202 \320\275\320\260 \320\264\321\213\321\205\320\260\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\277\321\203\321\202\320\270\n"
"\321\207\320\265\320\273\320\276\320\262\320\265\320\272\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(0, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("InfoWindow", "\320\245\320\273\320\276\321\200, \321\204\320\276\321\201\320\263\320\265\320\275,\n"
"\321\205\320\273\320\276\321\200\320\277\320\270\320\272\321\200\320\270\320\275,\n"
"\321\202\321\200\320\265\321\205\321\205\320\273\320\276\321\200\320\270\321\201\321\202\321\213\320\271 \321\204\320\276\321\201\321\204\320\276\321\200,\n"
"\321\205\320\273\320\276\321\200\320\276\320\272\320\270\321\201\321\214 \321\204\320\276\321\201\321\204\320\276\321\200\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(1, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("InfoWindow", "\320\222\320\265\321\211\320\265\321\201\321\202\320\262\320\260\n"
"\320\277\321\200\320\265\320\270\320\274\321\203\321\211\320\265\321\201\321\202\320\262\320\265\320\275\320\275\320\276\n"
"\320\276\320\261\321\211\320\265\321\217\320\264\320\276\320\262\320\270\321\202\320\276\320\263\320\276 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(1, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("InfoWindow", "\320\235\320\260\321\200\321\203\321\210\320\260\321\216\321\202 \321\215\320\275\320\265\321\200\320\263\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\276\320\261\320\274\320\265\320\275\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(1, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("InfoWindow", "\320\236\320\272\321\201\320\270\320\264 \321\203\320\263\320\273\320\265\321\200\320\276\320\264\320\260 (11),\n"
"\321\206\320\270\320\260\320\275\320\270\321\201\321\202\321\213\320\271 \320\262\320\276\320\264\320\276\321\200\320\276\320\264,\n"
"\321\205\320\273\320\276\321\200\321\206\320\270\320\260\320\275,\n"
"\320\274\321\213\321\210\321\214\321\217\320\272\320\276\320\262\320\270\321\201\321\202\321\213\320\271 \320\262\320\276\320\264\320\276\321\200\320\276\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(2, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("InfoWindow", "\320\222\320\265\321\211\320\265\321\201\321\202\320\262\320\260 \321\203\320\264\321\203\321\210\320\260\321\216\321\211\320\265\320\263\320\276 \320\270 \320\276\320\261\321\211\320\265\321\217\320\264\320\276\320\262\320\270\321\202\320\276\320\263\320\276 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(2, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("InfoWindow", "\320\222\321\213\320\267\321\213\320\262\320\260\321\216\321\202 \320\276\321\202\321\202\320\265\320\272 \320\273\320\265\320\263\320\272\320\270\321\205, \320\277\321\200\320\270 \320\270\320\275\320\263\320\260\320\273\321\217\321\206\320\270\320\276\320\275\320\275\320\276\320\274 \320\262\320\276\320\267\320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\270 \320\270 \320\275\320\260\321\200\321\203\321\210\320\260\321\216\321\202 \321\215\320\275\320\265\321\200\320\263\320\265\321\202\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\276\320\261\320\274\320\265\320\275 \320\277\321\200\320\270 \321\200\320\265\320\267\320\276\321\200\320\261\321\206\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(2, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("InfoWindow", "\320\220\320\272\321\200\320\270\320\273\320\276\320\275\320\270\321\202\321\200\320\270\320\273, \320\260\320\267\320\276\321\202\320\275\320\260\321\217 \320\272\320\270\321\201\320\273\320\276\321\202\320\260, \320\276\320\272\321\201\320\270\320\264\321\213 \320\260\320\267\320\276\321\202\320\260, \321\201\320\265\321\200\320\275\320\270\321\201\321\202\321\213\320\271 \320\260\320\275\320\263\320\270\320\264\321\200\320\270\321\202, \321\204\321\202\320\276\321\200\320\270\321\201\321\202\321\213\320\271 \320\262\320\276\320\264\320\276\321\200\320\276\320\264, \321\201\320\265\321\200\320\276\320\262\320\276\320\264\320\276\321\200\320\276\320\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(3, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("InfoWindow", "\320\235\320\265\320\271\321\200\320\276\321\202\321\200\320\276\320\277\320\275\321\213\320\265 \321\217\320\264\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(3, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("InfoWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\321\203\321\216\321\202 \320\275\320\260 \320\263\320\265\320\275\320\265\321\200\320\260\321\206\320\270\321\216, \320\277\321\200\320\276\320\262\320\265\320\264\320\265\320\275\320\270\320\265 \320\270 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\321\203 \320\275\320\265\321\200\320\262\320\275\320\276\320\263\320\276 \320\270\320\274\320\277\321\203\320\273\321\214\321\201\320\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(3, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("InfoWindow", "\320\241\320\265\321\200\320\276\321\203\320\263\320\273\320\265\321\200\320\276\320\264, \321\204\320\276\321\201\321\204\320\276\321\200\320\276\321\200\320\263\320\260\320\275\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \321\201\320\276\320\265\320\264\320\275\320\265\320\275\320\270\321\217 (\320\244\320\236\320\241)", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(4, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("InfoWindow", "\320\222\320\265\321\211\320\265\321\201\321\202\320\262\320\260 \321\203\320\264\321\203\321\211\320\260\321\216\321\211\320\265\320\263\320\276 \320\270 \320\275\320\265\320\271\321\200\320\276\321\202\321\200\320\276\320\277\320\275\320\276\320\263\320\276 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\321\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(4, 1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("InfoWindow", "\320\222\321\213\320\267\321\213\320\262\320\260\321\216\321\202 \321\202\320\276\320\272\321\201\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\276\321\202\321\202\320\265\320\272 \320\273\320\265\320\263\320\272\320\270\321\205, \321\204\320\276\321\200\320\274\320\270\321\200\321\203\321\216\321\202 \321\202\321\217\320\266\320\265\320\273\320\276\320\265 \320\277\320\276\321\200\320\260\320\266\320\265\320\275\320\270\320\265 \320\275\320\265\321\200\320\262\320\275\320\276\320\271 \321\201\320\270\321\201\321\202\320\265\320\274\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->item(4, 2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("InfoWindow", "\320\220\320\274\320\270\320\260\320\272", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->item(5, 0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("InfoWindow", "\320\234\320\265\321\202\320\260\320\261\320\276\320\273\320\270\321\207\320\265\321\201\320\272\320\270\320\265 \321\217\320\264\321\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(5, 1);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("InfoWindow", "\320\235\320\260\321\200\321\203\321\210\320\260\321\216\321\202 \320\277\321\200\320\276\321\206\320\265\321\201\321\201\321\213 \320\274\320\265\321\202\320\260\320\261\320\276\320\273\320\270\320\267\320\274\320\260 \320\270 \320\276\320\261\320\274\320\265\320\275\320\260 \320\262\320\265\321\211\320\265\321\201\321\202\320\262 \320\262 \320\276\321\200\320\263\320\260\320\275\320\270\320\267\320\274\320\265", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(5, 2);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("InfoWindow", "\320\236\320\272\321\201\320\270\320\264 \321\215\321\202\320\270\320\273\320\265\320\275\320\260, \320\261\321\200\320\276\320\274\320\270\321\201\321\202\321\213\320\271 \320\274\320\265\321\202\320\270\320\273, \320\264\320\276\321\205\320\273\320\276\321\200\321\215\321\202\320\260\320\275, \320\264\320\270\320\276\320\272\321\201\320\270\320\275", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class InfoWindow: public Ui_InfoWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFOWINDOW_H
