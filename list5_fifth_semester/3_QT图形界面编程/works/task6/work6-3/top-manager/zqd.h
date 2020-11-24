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
    void on_sellBtn_clicked();

    void on_buyBtn_clicked();

    void on_addBtn_clicked();

    void on_queryBtn_clicked();

    void on_passwordBtn_clicked();

    void on_sellTypeComboBox_currentIndexChanged(const QString type);

    void on_goodsTypeComboBox_currentIndexChanged(const QString type);

    void on_newTypeComboBox_currentIndexChanged(const QString type);

    void on_queryTypeComboBox_currentIndexChanged(const QString type);

    void on_sellBrandComboBox_currentIndexChanged(const QString type);

    void on_goodsBrandComboBox_currentIndexChanged(const QString type);

    void on_newBrandComboBox_currentIndexChanged(const QString type);

    void on_sellNumSpinBox_valueChanged(int arg1);

    void on_goodsNumSpinBox_valueChanged(int arg1);

    void on_newNumSpinBox_valueChanged(int arg1);

    void on_newPriceSpinBox_valueChanged(int arg1);

    void on_sellOkBtn_clicked();

    void on_goodsOkBtn_clicked();

    void on_newOkBtn_clicked();

    void on_sellCancelBtn_clicked();

    void on_goodsCancelBtn_clicked();

    void on_newCancelBtn_clicked();

    void on_queryPushButton_clicked();

    void on_changePwdBtn_clicked();

    void on_newBrandLineEdit_textChanged(const QString str);

private:
    QSqlTableModel *model;
    Ui::ZQD *ui;
};

#endif // ZQD_H
