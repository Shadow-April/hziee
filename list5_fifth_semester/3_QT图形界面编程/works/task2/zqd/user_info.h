#ifndef USER_INFO_H
#define USER_INFO_H

#include <QDialog>

namespace Ui {
class user_info;
}

class user_info : public QDialog
{
    Q_OBJECT

public:
    explicit user_info(QWidget *parent = 0);
    ~user_info();

private:
    Ui::user_info *ui;
};

#endif // USER_INFO_H
