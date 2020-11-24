#ifndef ZQD_H
#define ZQD_H

#include <QMainWindow>

class QSqlTableModel;

namespace Ui {
class ZQD;
}

class ZQD : public QMainWindow
{
    Q_OBJECT

public:
    explicit ZQD(QWidget *parent = 0);
    ~ZQD();

private slots:
    void on_submit_modify_clicked();

    void on_pullback_modify_clicked();

    void on_add_record_clicked();

    void on_delete_check_row_clicked();

    void on_sort_by_id_up_clicked();

    void on_sort_by_id_down_clicked();

    void on_select_by_option_clicked();

    void on_select_all_clicked();

private:
    QSqlTableModel *model;
    Ui::ZQD *ui;
};



#endif // ZQD_H
