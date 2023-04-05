#include "blastmath.h"

BlastMath::BlastMath()
{
    db = new database(QString("database.sqlite3"));
}

Type BlastMath::set_type(int index)
{
    QList<Type> _type_list;
    _type_list<<RBMK<<VVER;
    return _type_list[index];
}

TypeCloud BlastMath::set_type_cloud(int index)
{
    QList<TypeCloud> _type_list_cloud;
    _type_list_cloud<<No<<Medium<<Large;
    return _type_list_cloud[index];
}

int BlastMath::get_type_index()
{
    switch (type) {
    case RBMK:
        return 0;
    case VVER:
        return 1;
    }
}

int BlastMath::get_type_cloud_index()
{
    switch (type_cloud) {
    case No:
        return 0;
    case Medium:
        return 1;
    case Large:
        return 2;
    }
}

void BlastMath::set(int _type_index, int _type_cloud_index, QDateTime _date_time, int _N, int Eta, qreal _V_wind, qreal _alfa)
{
    type = set_type(_type_index);
    type_cloud = set_type_cloud(_type_cloud_index);
    date_time = _date_time;
    N_reactors = _N;
    Eta_percents = Eta;
    V_wind = case_v_wind(_V_wind);
    alfa_wind = 360-_alfa;
    Eta_max = set_eta_max(N_reactors, Eta_percents);
    day_time = set_day_time(date_time);
    stability = set_stability(day_time, V_wind, get_type_cloud_index());
    V_wind_total = set_v_wind_total(get_stability_index(), V_wind);
    ellipse_list = db->get_ellipse_range(get_type_index(), Eta_max, V_wind_total, get_stability_index());
    foreach (Ellipse ellipse, ellipse_list) {
        qDebug()<<ellipse.length<<ellipse.width;
    }
    legend = set_legend(type, date_time);
}

qreal BlastMath::set_eta_max(int _N_reactors, int Eta_percents)
{
    qreal Eta_max = _N_reactors*Eta_percents;
    return case_eta_max(Eta_max);
}

bool BlastMath::set_day_time(QDateTime _date_time)
{
    qreal time = _date_time.time().hour();
    if ((time>=22) || (time<=5)) return false;
    return true;
}

Stability BlastMath::set_stability(bool _day, int _v_wind, int _type_cloud_index)
{
    int _stability_index = db->get_stability(int(_day), _v_wind, _type_cloud_index);
    return get_stability_for_index(_stability_index);
}

int BlastMath::set_v_wind_total(int _stability_index, int _v_wind)
{
    int _v_wind_total = db->get_v_total(_stability_index, _v_wind);
    return _v_wind_total;
}

QVector<QPair<qreal, qreal>> BlastMath::get_ellipse_coords(qreal centerX, qreal centerY, qreal a, qreal b, qreal rotationAngle, int numPoints)
{
    if (numPoints<100) numPoints=100;
    QPair<qreal, qreal>offset_coords = get_coords_for_offset(centerX, centerY, b, rad_to_deg(rotationAngle));
    QVector<QPair<qreal,qreal>> coords;
    centerX = offset_coords.first;
    centerY = offset_coords.second;
    for (int i = 0; i < numPoints; i++) {
        qreal angle = i * (2 * M_PI / numPoints);
        qreal distance = a * b / sqrt(pow(b*cos(angle),2) + pow(a*sin(angle),2));
        qreal x = distance * cos(angle);
        qreal y = distance * sin(angle);
        qreal newX = x*cos(rotationAngle) - y*sin(rotationAngle);
        qreal newY = x*sin(rotationAngle) + y*cos(rotationAngle);
        coords.push_back(QPair<qreal,qreal>(centerX + newX, centerY + newY));
    }
    return coords;
}

bool BlastMath::check_coor(qreal lon, qreal lat)
{
    if ((lon!=-1) && (lat!=-1)) return true;
    return false;
}

bool BlastMath::check_coor_blast()
{
    return check_coor(lon, lat);
}

bool BlastMath::check_empty_ellipse_list()
{
    if (ellipse_list.isEmpty()) return true;
    return false;
}

bool BlastMath::check_v_wind_total_bad()
{
    if (V_wind_total==0) return true;
    return false;
}

QPair<qreal, qreal> BlastMath::get_coords_for_offset(qreal x, qreal y, qreal distance, qreal angle)
{
    qreal x_offset = x+distance*cos(deg_to_rad(90+angle));
    qreal y_offset = y+distance*sin(deg_to_rad(90+angle));
    return QPair<qreal,qreal>(x_offset, y_offset);
}

QStringList BlastMath::set_legend(Type _type, QDateTime _date_time)
{
    QStringList legend;
    legend<<QString("%1").arg(get_letter_for_legend(_type));
    QString lower_string = _date_time.toString("hh:mm dd.MM");
    legend<<lower_string<<lower_string;
    legend[1] = get_sepatarot_for_legend(legend);
    return legend;
}

QString BlastMath::get_string_stability()
{
    QStringList _string_stability_list;
    _string_stability_list<<"Конвекция"<<"Изометрия"<<"Инверсия";
    return _string_stability_list[get_stability_index()];
}

QString BlastMath::get_string_day()
{
    if (day_time) return "День";
    return "Ночь";
}

QString BlastMath::get_letter_for_legend(Type _type)
{
    switch (_type) {
    case RBMK:
        return "РБМК-1000";
    case VVER:
        return "ВВЭР-1000";
    }
    return "РБМК-1000";
}

QString BlastMath::get_sepatarot_for_legend(QStringList legend)
{
    int length = 1;
    foreach (QString line, legend) {
        if (line.length()>length) length=line.length();
    }
    QString separator;
    for (int i=0;i<length-1;i++) {
        separator.append("_");
    }
    return separator;
}

qreal BlastMath::case_value(qreal value, QList<qreal> list_treshold)
{
    qreal _value = 1;
    foreach(qreal treshold, list_treshold) {
        if (value<=treshold) _value = treshold;
    }
    if (value>list_treshold.first()) _value=list_treshold.first();
    return _value;
}

qreal BlastMath::case_eta_max(qreal _eta_max)
{
    QList<qreal> _eta_max_list;
    _eta_max_list<<50<<30<<10;
    return case_value(_eta_max, _eta_max_list);
}

int BlastMath::case_v_wind(int _v_wind)
{
    if (_v_wind>6) return 6;
    return _v_wind;
}

Stability BlastMath::get_stability_for_index(int _index)
{
    QList<Stability> _stability_list;
    _stability_list<<Konvektion<<Izometria<<Invers;
    return _stability_list[_index];
}

int BlastMath::get_stability_index()
{
    switch (stability) {
    case Konvektion:
        return 0;
    case Izometria:
        return 1;
    case Invers:
        return 2;
    }
}

qreal BlastMath::rad_to_deg(qreal rad)
{
    return qreal(rad*57.3);
}

qreal BlastMath::deg_to_rad(qreal deg)
{
    return qreal(deg/57.3);
}

qreal BlastMath::km_to_deg(qreal km_value, qreal lat_in_rad)
{
    qreal const METHER_TO_DEGREE_FACTOR = 1.0 / 111.3199;
    qreal deg_to_km_factor = cos(rad_to_deg(lat_in_rad)*M_PI/180.0) * METHER_TO_DEGREE_FACTOR;
    return qreal(km_value*deg_to_km_factor);
}

qreal BlastMath::km_to_deg(qreal km_value)
{
    return qreal(km_value/111.3199);
}
