#include "genshin_try.h"
#include "ui_genshin_try.h"
#include "stats.h"

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

void genshin_try::on_pushButton_47_clicked()
{
    char_select(0);
}

void genshin_try::on_pushButton_clicked()
{
    ui->frame_2->setVisible(true);
    ui->tabWidget->setVisible(false);
    ui->pushButton->setVisible(false);
}

void genshin_try::char_select(int c)
{
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(false);
    ui->frame_3->setVisible(false);
    ui->tabWidget->setVisible(true);
    ui->pushButton->setVisible(true);
    switch (c) {
        case 0:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
            QTableWidgetItem *item = new QTableWidgetItem(albedo_base_hp[i]);
            item->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(i, 0, item);

            QTableWidgetItem *item2 = new QTableWidgetItem(albedo_base_atk[i]);
            item2->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(i, 1, item2);

            QTableWidgetItem *item3 = new QTableWidgetItem(albedo_base_def[i]);
            item3->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(i, 2, item3);

            QTableWidgetItem *item4 = new QTableWidgetItem(albedo_Geo_DMG[i]);
            item4->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(i, 3, item4);

            QTableWidgetItem *item5 = new QTableWidgetItem(albedo_Crit_Rate[i]);
            item5->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(i, 4, item5);

            QTableWidgetItem *item6 = new QTableWidgetItem(albedo_Crit_DMG[i]);
            item6->setTextAlignment(Qt::AlignCenter);
            ui->tableWidget->setItem(i, 5, item6);
        }
        break;

        case 1:
        break;
   }
}
