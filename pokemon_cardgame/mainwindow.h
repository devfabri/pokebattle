#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "game_stat.h"
#include "lose_screen.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class QMediaPlayer;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString convertElement(int element){
        switch ((int)element) {
            case 0:
                return "ELETRICO";
            case 1:
                return "FOGO";
            case 2:
                return "AQUATICO";
            case 3:
                return "TERRESTRE";
            default:
                return "PLANTA";

        }
    };

private slots:

    void on_btn_card1_clicked();

    void on_btn_card2_clicked();

    void on_btn_card3_clicked();

    void on_btn_card4_clicked();

    void on_btn_card5_clicked();

    void on_btn_draw_clicked();

    void soundEngine();

    void combatLog(int);

    void setupCards();

    void setupBoss();

    void gameWin();

    void gameLose();

    void freeHand();

    void on_boss_hp_valueChanged(int value);

private:
    Ui::MainWindow *ui;
    QMediaPlayer *music;
    game_stat *jogo_ganho;
    lose_screen *jogo_perdido;

};
#endif // MAINWINDOW_H
