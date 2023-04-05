#ifndef BLASTMATH_H
#define BLASTMATH_H
#define EARTH_RADIUS_KM 6371.0
#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
#include <QPair>
#include <cmath>
#include "database.h"
#include "ellipse.h"

enum Type {
    RBMK,
    VVER,
};

enum TypeCloud {
    No,
    Medium,
    Large
};

enum Stability {
    Konvektion,
    Izometria,
    Invers
};

class BlastMath
{
public:
    BlastMath();
    //Database
    database* db;

    //Init params
    Type type = RBMK;
    TypeCloud type_cloud = No;
    qreal lon=-1;
    qreal lat=-1;
    int N_reactors = 1;
    int Eta_percents = 10;
    qreal V_wind = 10;
    qreal alfa_wind = 0;
    QDateTime date_time;

    //Calculate params
    int Eta_max = 10;
    bool day_time = true;
    int V_wind_total = 0;
    Stability stability = Konvektion;
    QList<Ellipse> ellipse_list;
    QStringList legend;

    //Enum
    Type set_type(int index);
    TypeCloud set_type_cloud(int index);

    //Setter
    void set(int _type_index, int _type_cloud_index, QDateTime _date_time, int _N, int Eta, qreal _V_wind, qreal _alfa);

    QString get_string_stability();
    QString get_string_day();

    //Validation
    bool check_coor_blast();
    bool check_empty_ellipse_list();
    bool check_v_wind_total_bad();

    //Convertation
    qreal rad_to_deg(qreal rad);
    qreal deg_to_rad(qreal deg);
    qreal km_to_deg(qreal km_value, qreal lat_in_rad);
    qreal km_to_deg(qreal km_value);

private:
    bool check_coor(qreal lon, qreal lat);

    //Setter
    qreal set_eta_max(int _N_reactors, int Eta_percents);
    bool set_day_time(QDateTime _date_time);
    Stability set_stability(bool _day, int _v_wind, int _type_cloud_index);
    int set_v_wind_total(int _stability_index, int _v_wind);

    //Legend
    QString get_letter_for_legend(Type _type);
    QString get_sepatarot_for_legend(QStringList legend);
    QStringList set_legend(Type _type, QDateTime _date_time);

    //Case
    qreal case_value(qreal value, QList<qreal> list_treshold);
    qreal case_eta_max(qreal _eta_max);
    int case_v_wind(int _v_wind);

    //Enum
    int get_type_index();
    int get_type_cloud_index();
    Stability get_stability_for_index(int _index);
    int get_stability_index();

    //Ellipse math
    QPair<qreal, qreal> get_coords_for_offset(qreal x, qreal y, qreal distance, qreal angle);
    public: QVector<QPair<qreal,qreal>> get_ellipse_coords(qreal centerX, qreal centerY, qreal a, qreal b, qreal rotationAngle, int numPoints);
};

#endif // BLASTMATH_H
