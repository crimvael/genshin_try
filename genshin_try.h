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
    void on_pushButton_45_clicked();
    void on_pushButton_66_clicked();

    void on_pushButton_86_clicked();

    void on_pushButton_65_clicked();

    void on_pushButton_84_clicked();

private:
    Ui::genshin_try *ui;
};
#endif // GENSHIN_TRY_H
