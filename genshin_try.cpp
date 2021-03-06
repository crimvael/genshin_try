#include "genshin_try.h"
#include "ui_genshin_try.h"
#include "stats.h"
#include "table_fill.cpp"

genshin_try::genshin_try(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::genshin_try)
{
    ui->setupUi(this);
    ui->frame->setVisible(true);
    ui->frame_2->setVisible(false);
    ui->frame_3->setVisible(false);
    ui->tabWidget->setVisible(false);
    ui->pushButton->setVisible(false);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

genshin_try::~genshin_try()
{
    delete ui;
}


void genshin_try::on_pushButton_45_clicked()
{
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(true);
    ui->frame_3->setVisible(false);
}

void genshin_try::on_pushButton_66_clicked()
{
    ui->frame_2->setVisible(false);
    ui->frame_3->setVisible(false);
    ui->frame->setVisible(true);
}

void genshin_try::on_pushButton_86_clicked()
{
    ui->frame_2->setVisible(false);
    ui->frame_3->setVisible(false);
    ui->frame->setVisible(true);
}

void genshin_try::on_pushButton_65_clicked()
{
    ui->frame_2->setVisible(false);
    ui->frame_3->setVisible(true);
}

void genshin_try::on_pushButton_84_clicked()
{
    ui->frame_2->setVisible(true);
    ui->frame_3->setVisible(false);
}

void genshin_try::on_pushButton_clicked()
{
    ui->frame_2->setVisible(true);
    ui->tabWidget->setVisible(false);
    ui->pushButton->setVisible(false);
}
