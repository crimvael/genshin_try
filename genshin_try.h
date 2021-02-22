#ifndef GENSHIN_TRY_H
#define GENSHIN_TRY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class genshin_try; }
QT_END_NAMESPACE

class genshin_try : public QMainWindow
{
    Q_OBJECT

public:
    genshin_try(QWidget *parent = nullptr);
    ~genshin_try();

private slots:
    void char_select(int);
    void on_pushButton_45_clicked();
    void on_pushButton_66_clicked();

    void on_pushButton_86_clicked();

    void on_pushButton_65_clicked();

    void on_pushButton_84_clicked();

    void on_pushButton_47_clicked();

    void on_pushButton_clicked();

    void on_pushButton_48_clicked();

    void on_pushButton_49_clicked();

    void on_pushButton_50_clicked();

    void on_pushButton_51_clicked();

    void on_pushButton_52_clicked();

    void on_pushButton_53_clicked();

    void on_pushButton_54_clicked();

    void on_pushButton_55_clicked();

    void on_pushButton_56_clicked();

    void on_pushButton_57_clicked();

    void on_pushButton_58_clicked();

    void on_pushButton_59_clicked();

    void on_pushButton_60_clicked();

    void on_pushButton_61_clicked();

    void on_pushButton_62_clicked();

    void on_pushButton_63_clicked();

    void on_pushButton_67_clicked();

    void on_pushButton_68_clicked();

    void on_pushButton_69_clicked();

    void on_pushButton_70_clicked();

    void on_pushButton_71_clicked();

    void on_pushButton_72_clicked();

    void on_pushButton_73_clicked();

    void on_pushButton_74_clicked();

    void on_pushButton_75_clicked();

    void on_pushButton_76_clicked();

    void on_pushButton_77_clicked();

    void on_pushButton_78_clicked();

    void on_pushButton_79_clicked();

private:
    Ui::genshin_try *ui;
};
#endif // GENSHIN_TRY_H
