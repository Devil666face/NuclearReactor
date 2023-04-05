#ifndef ANIMATEDLABEL_H
#define ANIMATEDLABEL_H

#include <QObject>
#include <QLabel>
#include <QMouseEvent>
#include <QFocusEvent>
#include <QDebug>
#include <QMovie>

class AnimatedLabel : public QLabel
{
    Q_OBJECT
public:
    AnimatedLabel(QWidget *parent, QString path_to_gif, QString whats_this, int minw, int minh);
    QMovie *movie;

private:
    QString no_push_style = QString("background-color: qlineargradient(spread:repeat, x1:1, y1:0, x2:1, y2:1, stop:0 rgba(84, 84, 84, 255),stop:1 rgba(59, 59, 59, 255));"
                                    "color: #ffffff;"
                                    "border-style: solid;"
                                    "border-width: 1px;"
                                    "border-radius: 3px;"
                                    "border-color: #051a39;"
                                    "padding: 5px;");
    QString push_style = QString("background-color: rgba(183, 134, 32, 20%);"
                                 "border: 1px solid #b78620;");
signals:
    void clicked();

public slots:
    void start_movie();
    void stop_movie();

protected:
    virtual void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
};

class Filter : public QObject
{
    Q_OBJECT
public:
    Filter( QObject* parent = 0 ) : QObject(parent) {}
    bool eventFilter( QObject* obj, QEvent* e );
signals:
    void start_movie_signal();
    void stop_movie_signal();
};

#endif // ANIMATEDLABEL_H
