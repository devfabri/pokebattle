#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Source.h"
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QPropertyAnimation>


Deck deck;
Hand hand(deck.getDeck());
Boss boss;
MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // SETTING UP HAND
    ui->element3->setStyleSheet("color:#fff;");
    setupCards();

    ui->boss_name->setText("ELEMENT KING");
    ui->btn_draw->setEnabled(true);

    // SETTING UP BOSS
    ui->boss_hp->setMaximum(boss.getBossHp());
    ui->boss_hp->setValue(boss.getBossHp());

    setupBoss();

    // SETTING UP WIN SCENE
    jogo_ganho = new game_stat(this);
    jogo_perdido = new lose_screen(this);

    // BACKGROUND MUSIC
    music = new QMediaPlayer(this);
    QAudioOutput* audioOutput = new QAudioOutput;
    music->setAudioOutput(audioOutput);
    music->setSource(QUrl("qrc:/sounds/resources/background.mp3"));
    audioOutput->setVolume(0.2F);
    music->play();
    music->loops();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::freeHand() {
    ui->btn_card1->setEnabled(true);
    ui->btn_card2->setEnabled(true);
    ui->btn_card3->setEnabled(true);
    ui->btn_card4->setEnabled(true);
    ui->btn_card5->setEnabled(true);
}

void MainWindow::setupBoss() {
    ui->boss_element->setText(convertElement(boss.getBossElement()));
    switch (boss.getBossElement()) {
    case 0:
        ui->boss_element->setStyleSheet("QLabel{background-color:rgb(229,229,0); color: #fff}");
        break;
    case 1:
        ui->boss_element->setStyleSheet("QLabel{background-color:rgb(255,0,0);color: #fff}");
        break;
    case 2:
        ui->boss_element->setStyleSheet("QLabel{background-color:rgb(0,0,255);color: #fff}");
        break;
    case 3:
        ui->boss_element->setStyleSheet("QLabel{background-color:rgb(170, 85, 0);color: #fff}");
        break;
    case 4:
        ui->boss_element->setStyleSheet("QLabel{background-color:rgb(20,222,6);color: #fff}");
        break;
    }

}

void MainWindow::setupCards() {
    // SETTING UP HAND
    int cardNumber = 0;
    if (hand.getHand().size() >= 1) {
        ui->name1->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
        ui->element1->setVisible(true);

        ui->element1->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
        ui->power1->setText(QString::number(hand.getHand()[cardNumber].getPower()));
        ui->btn_card1->setVisible(true);
        switch (int(hand.getHand()[cardNumber].getElement())) {
        case 0:
            ui->card->setStyleSheet("QGroupBox{border:2px solid rgb(229,229,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element1->setStyleSheet("QLabel{background-color:rgb(229,229,0);color:#fff;}");
            break;
        case 1:
            ui->card->setStyleSheet("QGroupBox{border:2px solid rgb(255,0,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element1->setStyleSheet("QLabel{background-color:rgb(255,0,0);color:#fff;}");
            break;
        case 2:
            ui->card->setStyleSheet("QGroupBox{border:2px solid rgb(0,0,255);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element1->setStyleSheet("QLabel{background-color:rgb(0,0,255);color:#fff;}");
            break;
        case 3:
            ui->card->setStyleSheet("QGroupBox{border:2px solid rgb(170,85,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element1->setStyleSheet("QLabel{background-color:rgb(170, 85, 0);color:#fff;}");
            break;
        case 4:
            ui->card->setStyleSheet("QGroupBox{border:2px solid rgb(20,222,6);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element1->setStyleSheet("QLabel{background-color:rgb(20,222,6);color:#fff;}");
            break;
        }
    }
    else {
        ui->name1->setText("");
        ui->element1->setText("");
        ui->element1->setVisible(false);
        ui->power1->setText("");
        ui->btn_card1->setVisible(false);
    }

    if (hand.getHand().size() >= 2) {
        cardNumber++;
        ui->name2->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
        ui->element2->setVisible(true);
        ui->element2->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
        ui->power2->setText(QString::number(hand.getHand()[cardNumber].getPower()));
        ui->btn_card2->setVisible(true);
        switch (int(hand.getHand()[cardNumber].getElement())) {
        case 0:
            ui->card_2->setStyleSheet("QGroupBox{border:2px solid rgb(229,229,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element2->setStyleSheet("QLabel{background-color:rgb(229,229,0);color:#fff;}");
            break;
        case 1:
            ui->card_2->setStyleSheet("QGroupBox{border:2px solid rgb(255,0,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element2->setStyleSheet("QLabel{background-color:rgb(255,0,0);color:#fff;}");
            break;
        case 2:
            ui->card_2->setStyleSheet("QGroupBox{border:2px solid rgb(0,0,255);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element2->setStyleSheet("QLabel{background-color:rgb(0,0,255);color:#fff;}");
            break;
        case 3:
            ui->card_2->setStyleSheet("QGroupBox{border:2px solid rgb(170,85,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element2->setStyleSheet("QLabel{background-color:rgb(170, 85, 0);color:#fff;}");
            break;
        case 4:
            ui->card_2->setStyleSheet("QGroupBox{border:2px solid rgb(20,222,6);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element2->setStyleSheet("QLabel{background-color:rgb(20,222,6);color:#fff;}");
            break;
        }
    }
    else {
        ui->name2->setText("");
        ui->element2->setText("");
        ui->element2->setVisible(false);
        ui->power2->setText("");
        ui->btn_card2->setVisible(false);
    }
    if (hand.getHand().size() >= 3) {
        cardNumber++;
        ui->name3->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
        ui->element3->setVisible(true);
        ui->element3->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
        ui->power3->setText(QString::number(hand.getHand()[cardNumber].getPower()));
        ui->btn_card3->setVisible(true);
        switch (int(hand.getHand()[cardNumber].getElement())) {
        case 0:
            ui->card_3->setStyleSheet("QGroupBox{border:2px solid rgb(229,229,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element3->setStyleSheet("QLabel{background-color:rgb(229,229,0);color:#fff;}");
            break;
        case 1:
            ui->card_3->setStyleSheet("QGroupBox{border:2px solid rgb(255,0,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element3->setStyleSheet("QLabel{background-color:rgb(255,0,0);color:#fff;}");
            break;
        case 2:
            ui->card_3->setStyleSheet("QGroupBox{border:2px solid rgb(0,0,255);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element3->setStyleSheet("QLabel{background-color:rgb(0,0,255);color:#fff;}");
            break;
        case 3:
            ui->card_3->setStyleSheet("QGroupBox{border:2px solid rgb(170,85,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element3->setStyleSheet("QLabel{background-color:rgb(170, 85, 0);color:#fff;}");
            break;
        case 4:
            ui->card_3->setStyleSheet("QGroupBox{border:2px solid rgb(20,222,6);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element3->setStyleSheet("QLabel{background-color:rgb(20,222,6);color:#fff;}");
            break;
        }
    }
    else {
        ui->name3->setText("");
        ui->element3->setText("");
        ui->element3->setVisible(false);
        ui->power3->setText("");
        ui->btn_card3->setVisible(false);
    }
    if (hand.getHand().size() >= 4) {
        cardNumber++;
        ui->name4->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
        ui->btn_card4->setVisible(true);
        ui->element4->setVisible(true);
        ui->element4->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
        ui->power4->setText(QString::number(hand.getHand()[cardNumber].getPower()));
        switch (int(hand.getHand()[cardNumber].getElement())) {
        case 0:
            ui->card_4->setStyleSheet("QGroupBox{border:2px solid rgb(229,229,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element4->setStyleSheet("QLabel{background-color:rgb(229,229,0);color:#fff;}");
            break;
        case 1:
            ui->card_4->setStyleSheet("QGroupBox{border:2px solid rgb(255,0,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element4->setStyleSheet("QLabel{background-color:rgb(255,0,0);color:#fff;}");
            break;
        case 2:
            ui->card_4->setStyleSheet("QGroupBox{border:2px solid rgb(0,0,255);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element4->setStyleSheet("QLabel{background-color:rgb(0,0,255);color:#fff;}");
            break;
        case 3:
            ui->card_4->setStyleSheet("QGroupBox{border:2px solid rgb(170,85,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element4->setStyleSheet("QLabel{background-color:rgb(170, 85, 0);color:#fff;}");
            break;
        case 4:
            ui->card_4->setStyleSheet("QGroupBox{border:2px solid rgb(20,222,6);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element4->setStyleSheet("QLabel{background-color:rgb(20,222,6);color:#fff;}");
            break;
        }
    }
    else {
        ui->name4->setText("");
        ui->element4->setText("");
        ui->element4->setVisible(false);
        ui->power4->setText("");
        ui->btn_card4->setVisible(false);
    }
    if (hand.getHand().size() >= 5) {
        cardNumber++;
        ui->name5->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
        ui->element5->setVisible(true);
        ui->element5->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
        ui->power5->setText(QString::number(hand.getHand()[cardNumber].getPower()));
        ui->btn_card5->setVisible(true);
        switch (int(hand.getHand()[cardNumber].getElement())) {
        case 0:
            ui->card_5->setStyleSheet("QGroupBox{border:2px solid rgb(229,229,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element5->setStyleSheet("QLabel{background-color:rgb(229,229,0);color:#fff;}");
            break;
        case 1:
            ui->card_5->setStyleSheet("QGroupBox{border:2px solid rgb(255,0,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element5->setStyleSheet("QLabel{background-color:rgb(255,0,0);color:#fff;}");
            break;
        case 2:
            ui->card_5->setStyleSheet("QGroupBox{border:2px solid rgb(0,0,255);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element5->setStyleSheet("QLabel{background-color:rgb(0,0,255);color:#fff;}");
            break;
        case 3:
            ui->card_5->setStyleSheet("QGroupBox{border:2px solid rgb(170,85,0);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element5->setStyleSheet("QLabel{background-color:rgb(170, 85, 0);color:#fff;}");
            break;
        case 4:
            ui->card_5->setStyleSheet("QGroupBox{border:2px solid rgb(20,222,6);background-color:rgb(25,23,23);}*{color:#fff;background-color:rgb(22,23,23);}");
            ui->element5->setStyleSheet("QLabel{background-color:rgb(20,222,6);color:#fff;}");
            break;
        }
    }
    else {
        ui->name5->setText("");
        ui->element5->setText("");
        ui->element5->setVisible(false);
        ui->power5->setText("");
        ui->btn_card5->setVisible(false);
    }
}

void MainWindow::gameWin() {
    music->stop();
    QMediaPlayer* game_win = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    game_win->setAudioOutput(audioOutput);
    game_win->setSource(QUrl("qrc:/sounds/resources/game_win.wav"));
    audioOutput->setVolume(0.2F);
    game_win->play();
    jogo_ganho->exec();
    close();

}

void MainWindow::gameLose() {
    music->stop();
    QMediaPlayer* game_lose = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    game_lose->setAudioOutput(audioOutput);
    game_lose->setSource(QUrl("qrc:/sounds/resources/game_win.wav"));
    audioOutput->setVolume(0.2F);
    game_lose->play();
    jogo_perdido->exec();
    close();
}

void MainWindow::combatLog(int hp) {
    ui->boss_damage->setText("- " + QString::number(hp));
    QPropertyAnimation* damage = new QPropertyAnimation(ui->boss_damage, "geometry", ui->combat_log);
    damage->setDuration(2000);
    damage->setStartValue(QRect(0, 100, 100, 50));
    damage->setEndValue(QRect(50, 150, 100, 50));
    connect(damage, SIGNAL(finished()), ui->boss_damage, SLOT(clear()));
    damage->start();

}

void MainWindow::soundEngine() {
    QMediaPlayer* boss_hit = new QMediaPlayer;
    QAudioOutput* audioOutput = new QAudioOutput;
    boss_hit->setAudioOutput(audioOutput);
    boss_hit->setSource(QUrl("qrc:/sounds/resources/atk_hit.wav"));
    audioOutput->setVolume(0.2F);
    boss_hit->play();
}


void MainWindow::on_btn_card1_clicked()
{
    int boss_hp_before = boss.getBossHp();
    ui->name1->setText("");
    ui->element1->setText("");
    ui->element1->setVisible(false);
    ui->power1->setText("");
    ui->btn_card1->setVisible(false);
    ui->btn_card2->setEnabled(false);
    ui->btn_card3->setEnabled(false);
    ui->btn_card4->setEnabled(false);
    ui->btn_card5->setEnabled(false);
    hand.dumpCard(1, boss);
    ui->btn_draw->setEnabled(true);
    ui->boss_hp->setValue(boss.getBossHp());
    soundEngine();
    combatLog(boss_hp_before - boss.getBossHp());
    if (boss.getBossHp() == 0) {
        gameWin();
    }
    if (deck.getDeck().isEmpty() && hand.getHand().empty()) {
        gameLose();
    }
    if (deck.getDeck().isEmpty()) {
        ui->btn_draw->setVisible(false);
        ui->btn_draw->setEnabled(false);
        setupCards();
        freeHand();
    }
    setupBoss();
}


void MainWindow::on_btn_card2_clicked()
{
    int boss_hp_before = boss.getBossHp();
    ui->name2->setText("");
    ui->element2->setText("");
    ui->element2->setVisible(false);
    ui->power2->setText("");
    ui->btn_card2->setVisible(false);
    ui->btn_card1->setEnabled(false);
    ui->btn_card3->setEnabled(false);
    ui->btn_card4->setEnabled(false);
    ui->btn_card5->setEnabled(false);
    hand.dumpCard(2, boss);
    ui->btn_draw->setEnabled(true);
    ui->boss_hp->setValue(boss.getBossHp());
    soundEngine();
    combatLog(boss_hp_before - boss.getBossHp());
    if (boss.getBossHp() == 0) {
        gameWin();
    }
    if (deck.getDeck().isEmpty() && hand.getHand().empty()) {
        gameLose();
    }
    if (deck.getDeck().isEmpty()) {
        ui->btn_draw->setVisible(false);
        ui->btn_draw->setEnabled(false);
        setupCards();
        freeHand();

    }
    setupBoss();
}


void MainWindow::on_btn_card3_clicked()
{
    int boss_hp_before = boss.getBossHp();
    ui->name3->setText("");
    ui->element3->setText("");
    ui->element3->setVisible(false);
    ui->power3->setText("");
    ui->btn_card3->setVisible(false);
    ui->btn_card1->setEnabled(false);
    ui->btn_card2->setEnabled(false);
    ui->btn_card4->setEnabled(false);
    ui->btn_card5->setEnabled(false);
    hand.dumpCard(3, boss);
    ui->boss_hp->setValue(boss.getBossHp());
    ui->btn_draw->setEnabled(true);
    soundEngine();
    combatLog(boss_hp_before - boss.getBossHp());
    if (boss.getBossHp() == 0) {
        gameWin();
    }
    if (deck.getDeck().isEmpty() && hand.getHand().empty()) {
        gameLose();
    }
    if (deck.getDeck().isEmpty()) {
        ui->btn_draw->setVisible(false);
        ui->btn_draw->setEnabled(false);
        setupCards();
        freeHand();

    }
    setupBoss();
}


void MainWindow::on_btn_card4_clicked()
{
    int boss_hp_before = boss.getBossHp();
    ui->name4->setText("");
    ui->element4->setText("");
    ui->element4->setVisible(false);
    ui->power4->setText("");
    ui->btn_card4->setVisible(false);
    ui->btn_card1->setEnabled(false);
    ui->btn_card2->setEnabled(false);
    ui->btn_card3->setEnabled(false);
    ui->btn_card5->setEnabled(false);
    hand.dumpCard(4, boss);
    ui->boss_hp->setValue(boss.getBossHp());
    ui->btn_draw->setEnabled(true);
    soundEngine();
    combatLog(boss_hp_before - boss.getBossHp());
    if (boss.getBossHp() == 0) {
        gameWin();
    }
    if (deck.getDeck().isEmpty() && hand.getHand().empty()) {
        gameLose();
    }

    if (deck.getDeck().isEmpty()) {
        setupCards();
        ui->btn_draw->setVisible(false);
        ui->btn_draw->setEnabled(false);
        freeHand();
    }
    setupBoss();
}


void MainWindow::on_btn_card5_clicked()
{
    int boss_hp_before = boss.getBossHp();
    ui->name5->setText("");
    ui->element5->setText("");
    ui->element5->setVisible(false);
    ui->power5->setText("");
    ui->btn_card5->setVisible(false);
    ui->btn_card1->setEnabled(false);
    ui->btn_card2->setEnabled(false);
    ui->btn_card3->setEnabled(false);
    ui->btn_card4->setEnabled(false);
    hand.dumpCard(5, boss);
    ui->boss_hp->setValue(boss.getBossHp());
    ui->btn_draw->setEnabled(true);
    soundEngine();
    combatLog(boss_hp_before - boss.getBossHp());
    //    if (boss.getBossHp() == 0){
    //        gameWin();
    //    }
    if (deck.getDeck().isEmpty() && hand.getHand().empty()) {
        gameLose();
    }

    if (deck.getDeck().isEmpty()) {
        setupCards();
        ui->btn_draw->setVisible(false);
        ui->btn_draw->setEnabled(false);
        freeHand();
    }
    setupBoss();
}


void MainWindow::on_btn_draw_clicked()
{
    ui->btn_draw->setEnabled(false);
    ui->btn_card1->setVisible(true);
    ui->btn_card1->setEnabled(true);
    ui->btn_card2->setVisible(true);
    ui->btn_card2->setEnabled(true);
    ui->btn_card3->setVisible(true);
    ui->btn_card3->setEnabled(true);
    ui->btn_card4->setVisible(true);
    ui->btn_card4->setEnabled(true);
    ui->btn_card5->setVisible(true);
    ui->btn_card5->setEnabled(true);
    ui->element1->setVisible(true);
    ui->element2->setVisible(true);
    ui->element3->setVisible(true);
    ui->element4->setVisible(true);
    ui->element5->setVisible(true);
    if (deck.getDeck().isEmpty()) {
        ui->btn_draw->setEnabled(false);
        ui->btn_card1->setVisible(true);
        ui->btn_card1->setEnabled(true);
        ui->btn_card2->setVisible(true);
        ui->btn_card2->setEnabled(true);
        ui->btn_card3->setVisible(true);
        ui->btn_card3->setEnabled(true);
        ui->btn_card4->setVisible(true);
        ui->btn_card4->setEnabled(true);
        ui->btn_card5->setVisible(true);
        ui->btn_card5->setEnabled(true);
        ui->element1->setVisible(true);
        ui->element2->setVisible(true);
        ui->element3->setVisible(true);
        ui->element4->setVisible(true);
        ui->element5->setVisible(true);
    }
    else {
        deck.drawCard(hand.getHand(), deck.getDeck());
        setupCards();
    }
}


void MainWindow::on_boss_hp_valueChanged(int value)
{

}

