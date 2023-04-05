#ifndef DATABASE_H
#define DATABASE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QWidget>
#include <QDebug>
#include <QApplication>
#include <QSqlQuery>
#include "ellipse.h"

class database
{

public:
    database(QString database_name);
    QSqlDatabase db;
    QSqlQuery *query;

    int get_stability(int _day, int _v_wind, int _type_cloud_index);
    int get_v_total(int _stability_index, int _v_wind);
    QList<Ellipse> get_ellipse_range(int _react_type, int _eta, int _v_total, int _stability_index);

private:

};

#endif // DATABASE_H
