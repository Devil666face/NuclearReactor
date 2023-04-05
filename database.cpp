#include "database.h"

database::database(QString database_name)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = qApp->applicationDirPath();
    qDebug()<<path;
    path.push_back(QString("/%1").arg(database_name));
    db.setDatabaseName(path);
    if (db.open())  qDebug("DB open");
    else qDebug("DB not open");
}

int database::get_stability(int _day, int _v_wind, int _type_cloud_index)
{
    query = new QSqlQuery(db);
    QString sql_query = QString("SELECT stab_type "
                        "FROM stability WHERE "
                        "day=%1 AND "
                        "v_wind=%2 AND "
                        "cloud=%3;").arg(_day).arg(_v_wind).arg(_type_cloud_index);
    query->exec(sql_query);
    while (query->next()) {
        return query->value(0).toInt();
    }
}

int database::get_v_total(int _stability_index, int _v_wind)
{
    query = new QSqlQuery(db);
    QString sql_query = QString("SELECT v_wind_total "
                        "FROM v_wind_total WHERE "
                        "stab_type=%1 AND "
                        "v_wind=%2;").arg(_stability_index).arg(_v_wind);
    query->exec(sql_query);
    while (query->next()) {
        qDebug()<<"from sql"<<query->value(0).toInt();
        return query->value(0).toInt();
    }
}

QList<Ellipse> database::get_ellipse_range(int _react_type, int _eta, int _v_total, int _stability_index)
{
    qDebug()<<_react_type<<_eta<<_v_total<<_stability_index;
    QList<Ellipse> _ellipse_list;
    query = new QSqlQuery(db);
    QString sql_query = QString("SELECT m_l, m_w, "
                                "a_l, a_w, "
                                "b_l, b_w, "
                                "v_l, v_w, "
                                "g_l, g_w "
                                "FROM range WHERE "
                                "react_type=%1 AND "
                                "eta=%2 AND "
                                "v_total=%3 AND "
                                "stability_type=%4;").arg(_react_type).arg(_eta).arg(_v_total).arg(_stability_index);
    qDebug()<<sql_query;
    query->exec(sql_query);
    while (query->next()) {
        Ellipse ellipse;
        for (int i=0;i<8;i+=2) {
            ellipse.length = query->value(i).toDouble();
            ellipse.width = query->value(i+1).toDouble();
            _ellipse_list.append(ellipse);
            qDebug()<<ellipse.length<<ellipse.width;
        }
    }
    return _ellipse_list;
}


