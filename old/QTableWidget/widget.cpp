#include "widget.h"
#include "ui_widget.h"
#include "pessoadialog.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent), ui(new Ui::Widget) {
    ui->setupUi(this);
    QStringList titulos;

    setWindowTitle("Empregados");
    ui->tabela->setColumnCount(3);
    titulos << "Nome:" << "Idade:" << "Salario:";
    ui->tabela->setHorizontalHeaderLabels(titulos);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_adicionar_clicked()
{
    int res, idade, fila;
    double salario;
    QString nome;
    PessoaDialog pd(this);

    pd.setWindowTitle("Cadatro de empregado");
    res = pd.exec();
    if (res == QDialog::Rejected)
        return;
    nome = pd.nome();
    idade = pd.idade();
    salario = pd.salario();

    ui->tabela->insertRow(ui->tabela->rowCount());
    fila = ui->tabela->rowCount() - 1;
    ui->tabela->setItem(fila, NOME, new QTableWidgetItem(nome));
    ui->tabela->setItem(fila, IDADE, new QTableWidgetItem(
                            QString::number(idade)));
    ui->tabela->setItem(fila, SALARIO, new QTableWidgetItem(
                            QString::number(salario)));
}
