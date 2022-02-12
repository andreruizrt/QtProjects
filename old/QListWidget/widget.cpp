#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QAction *adicionar, *remover;
    adicionar = new QAction("Adicionar", this);
    remover = new QAction("Remover", this);
    connect(adicionar, SIGNAL(triggered(bool)), this, SLOT(on_adicionarButton_clicked()));
    connect(remover, SIGNAL(triggered(bool)), this, SLOT(on_removerButton_clicked()));
    ui->listWidget->setContextMenuPolicy(Qt::ActionsContextMenu);
    ui->listWidget->addAction(adicionar);
    ui->listWidget->addAction(remover);
}

Widget::~Widget(
{
    delete ui;
}

void Widget::on_adicionarButton_clicked()
{
    QString nome;
    nome = ui->nome->text();
    if (nome.isEmpty()) {
        return;
    } else {
        ui->listWidget->addItem(nome);
    }
}

void Widget::on_removerButton_clicked()
{
    delete ui->listWidget->currentItem();
}
