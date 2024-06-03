#ifndef NEW_LABEL_H
#define NEW_LABEL_H
#include <QLabel>
#include <QMouseEvent>

class new_label

{
public:
    new_label();
};

class QLabel_new_label : public QLabel
{
    Q_OBJECT
public:
    QLabel_new_label();

signals:
    void clicked();
protected:
    void mousePressEvent(QMouseEvent *event);
    using QLabel::QLabel;

};

#endif // NEW_LABEL_H
