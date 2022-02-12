#ifndef PESSOADIALOG_H
#define PESSOADIALOG_H

#include <QDialog>

namespace Ui {
class PessoaDialog;
}

class PessoaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PessoaDialog(QWidget *parent = 0);
    ~PessoaDialog();

    QString nome() const;
    int idade() const;
    double salario() const;
private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::PessoaDialog *ui;
};

#endif // PESSOADIALOG_H
