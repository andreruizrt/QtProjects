#include "pessoadialog.h"
#include "ui_pessoadialog.h"

PessoaDialog::PessoaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PessoaDialog)
{
    ui->setupUi(this);
}

PessoaDialog::~PessoaDialog()
{
    delete ui;
}

void PessoaDialog::on_buttonBox_accepted()
{
    reject();
}

void PessoaDialog::on_buttonBox_rejected()
{
    accept();
}

QString PessoaDialog::nome() const {
   return ui->nome->text();
}

int PessoaDialog::idade() const {
    return ui->idade->value();
}

double PessoaDialog::salario() const {
    return ui->salario->value();
}
