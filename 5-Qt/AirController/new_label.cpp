#include "new_label.h"

new_label::new_label() {}

QLabel_new_label::QLabel_new_label()
{

}

void QLabel_new_label::mousePressEvent(QMouseEvent *event)
{
    emit clicked();
}
