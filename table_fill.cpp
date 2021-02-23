#include "genshin_try.h"
#include "ui_genshin_try.h"
#include "stats.h"

void genshin_try::char_select(int c)
{
    ui->frame->setVisible(false);
    ui->frame_2->setVisible(false);
    ui->frame_3->setVisible(false);
    ui->tabWidget->setVisible(true);
    ui->pushButton->setVisible(true);
    QFont fnt; fnt.setPointSize(15);
    switch (c) {
        case 0:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(albedo_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                item->setFont(fnt);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(albedo_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                item2->setFont(fnt);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(albedo_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                item3->setFont(fnt);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("GEO DMG Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(albedo_Geo_DMG[i]);
                item4->setFont(fnt);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 1:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(amber_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(amber_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(amber_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("ATK Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(amber_ATK[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 2:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(barbara_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(barbara_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(barbara_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("HP Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(barbara_HP[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 3:
                for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(beidou_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(beidou_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(beidou_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("ELECTRO DMG Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(beidou_Electro_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 4:
                for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(bennet_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(bennet_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(bennet_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Energy Recharge");
                QTableWidgetItem *item4 = new QTableWidgetItem(bennet_Energy_Recharge[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 5:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(chongyun_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(chongyun_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(chongyun_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("ATK Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(chongyun_ATK[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 6:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(diluc_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(diluc_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(diluc_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Crit Rate");
                QTableWidgetItem *item4 = new QTableWidgetItem(diluc_Crit_Rate[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 7:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(diona_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(diona_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(diona_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("CRYO DMG Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(diona_Cryo_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 8:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(fischl_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(fischl_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(fischl_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("ATK");
                QTableWidgetItem *item4 = new QTableWidgetItem(fischl_ATK[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 9:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(ganyu_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(ganyu_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(ganyu_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Crit DMG");
                QTableWidgetItem *item4 = new QTableWidgetItem(ganyu_Crit_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 10:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(hu_tao_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(hu_tao_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(hu_tao_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Crit DMG");
                QTableWidgetItem *item4 = new QTableWidgetItem(hu_tao_Crit_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 11:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(jean_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(jean_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(jean_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Healing Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(jean_Healing_Bonus[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 12:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(kaeya_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(kaeya_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(kaeya_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Energy Recharge");
                QTableWidgetItem *item4 = new QTableWidgetItem(kaeya_Energy_Recharge[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 13:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(keqing_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(keqing_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(keqing_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Crit DMG");
                QTableWidgetItem *item4 = new QTableWidgetItem(keqing_Crit_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 14:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(klee_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(klee_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(klee_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("PYRO DMG Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(klee_Pyro_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 15:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(lisa_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(lisa_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(lisa_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Elemental Mastery");
                QTableWidgetItem *item4 = new QTableWidgetItem(lisa_Elemental_Mastery[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 16:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(mona_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(mona_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(mona_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Energy Recharge");
                QTableWidgetItem *item4 = new QTableWidgetItem(mona_Energy_Recharge[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 17:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(ningguang_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(ningguang_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(ningguang_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("GEO DMG Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(ningguang_Geo_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 18:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(noelle_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(noelle_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(noelle_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("DEF Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(noelle_DEF[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 19:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(qiqi_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(qiqi_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(qiqi_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Healing Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(qiqi_Healing_Bonus[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 20:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(razor_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(razor_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(razor_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Physical DMG");
                QTableWidgetItem *item4 = new QTableWidgetItem(razor_Phys_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 21:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(sucrose_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(sucrose_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(sucrose_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("ANEMO DMG Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(sucrose_Anemo_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 22:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(tartaglia_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(tartaglia_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(tartaglia_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("HYDRO DMG Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(tartaglia_Hydro_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 23:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(venti_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(venti_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(venti_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Energy Recharge");
                QTableWidgetItem *item4 = new QTableWidgetItem(venti_Energy_Recharge[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 24:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(xiangling_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(xiangling_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(xiangling_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Elemental Mastery");
                QTableWidgetItem *item4 = new QTableWidgetItem(xiangling_Elemental_Mastery[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 25:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(xiao_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(xiao_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(xiao_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("Crit Rate");
                QTableWidgetItem *item4 = new QTableWidgetItem(xiao_Crit_Rate[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 26:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(xingqiu_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(xingqiu_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(xingqiu_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("ATK Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(xingqiu_ATK[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 27:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(xinyan_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(xinyan_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(xinyan_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("ATK Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(xinyan_ATK[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 28:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(zhongli_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(zhongli_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(zhongli_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("GEO DMG Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(zhongli_Geo_DMG[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

        case 29:
            for (int i=0; i < ui->tableWidget->rowCount()-1 ; i++ ) {
                QTableWidgetItem *item = new QTableWidgetItem(lumine_base_hp[i]);
                item->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 0, item);

                QTableWidgetItem *item2 = new QTableWidgetItem(lumine_base_atk[i]);
                item2->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 1, item2);

                QTableWidgetItem *item3 = new QTableWidgetItem(lumine_base_def[i]);
                item3->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 2, item3);

                ui->tableWidget->horizontalHeaderItem(3)->setText("ATK Bonus");
                QTableWidgetItem *item4 = new QTableWidgetItem(lumine_ATK[i]);
                item4->setTextAlignment(Qt::AlignCenter);
                ui->tableWidget->setItem(i, 3, item4);
        }
            break;

   }
}

void genshin_try::on_pushButton_47_clicked()
{
    char_select(0);
}

void genshin_try::on_pushButton_48_clicked()
{
    char_select(1);
}

void genshin_try::on_pushButton_49_clicked()
{
    char_select(2);
}

void genshin_try::on_pushButton_50_clicked()
{
    char_select(3);
}

void genshin_try::on_pushButton_51_clicked()
{
    char_select(4);
}

void genshin_try::on_pushButton_52_clicked()
{
    char_select(5);
}

void genshin_try::on_pushButton_53_clicked()
{
    char_select(6);
}

void genshin_try::on_pushButton_54_clicked()
{
    char_select(7);
}

void genshin_try::on_pushButton_55_clicked()
{
    char_select(8);
}

void genshin_try::on_pushButton_56_clicked()
{
    char_select(9);
}

void genshin_try::on_pushButton_57_clicked()
{
    char_select(10);
}

void genshin_try::on_pushButton_58_clicked()
{
    char_select(11);
}

void genshin_try::on_pushButton_59_clicked()
{
    char_select(12);
}

void genshin_try::on_pushButton_60_clicked()
{
    char_select(13);
}

void genshin_try::on_pushButton_61_clicked()
{
    char_select(14);
}

void genshin_try::on_pushButton_62_clicked()
{
    char_select(15);
}

void genshin_try::on_pushButton_63_clicked()
{
    char_select(16);
}

void genshin_try::on_pushButton_67_clicked()
{
    char_select(17);
}

void genshin_try::on_pushButton_68_clicked()
{
    char_select(18);
}

void genshin_try::on_pushButton_69_clicked()
{
    char_select(19);
}

void genshin_try::on_pushButton_70_clicked()
{
    char_select(20);
}

void genshin_try::on_pushButton_71_clicked()
{
    char_select(21);
}

void genshin_try::on_pushButton_72_clicked()
{
    char_select(22);
}

void genshin_try::on_pushButton_73_clicked()
{
    char_select(23);
}

void genshin_try::on_pushButton_74_clicked()
{
    char_select(22);
}

void genshin_try::on_pushButton_75_clicked()
{
    char_select(23);
}

void genshin_try::on_pushButton_76_clicked()
{
    char_select(24);
}

void genshin_try::on_pushButton_77_clicked()
{
    char_select(25);
}

void genshin_try::on_pushButton_78_clicked()
{
    char_select(26);
}

void genshin_try::on_pushButton_79_clicked()
{
    char_select(27);
}
