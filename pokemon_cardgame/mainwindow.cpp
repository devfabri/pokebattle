#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Source.h"
Deck deck;
Hand hand(deck.getDeck());
Boss boss;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->boss_name->setText("Destroyer");
    ui->btn_draw->setEnabled(false);

    // SETTING UP BOSS
    ui->boss_hp->setValue(boss.getBossHp());
    ui->boss_hp->setMaximum(boss.getBossHp());
    ui->boss_element->setText(convertElement(boss.getBossElement()));

    // SETTING UP HAND
    int cardNumber = 0;
    ui->name1->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element1->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power1->setText(QString::number(hand.getHand()[cardNumber].getPower()));

    cardNumber++;
    ui->name2->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element2->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power2->setText(QString::number(hand.getHand()[cardNumber].getPower()));

    cardNumber++;
    ui->name3->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element3->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power3->setText(QString::number(hand.getHand()[cardNumber].getPower()));

    cardNumber++;
    ui->name4->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element4->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power4->setText(QString::number(hand.getHand()[cardNumber].getPower()));

    cardNumber++;
    ui->name5->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element5->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power5->setText(QString::number(hand.getHand()[cardNumber].getPower()));



}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_card1_clicked()
{
    ui->name1->setText("");
    ui->element1->setText("");
    ui->power1->setText("");
    ui->btn_card1->setVisible(false);
    ui->btn_card2->setEnabled(false);
    ui->btn_card3->setEnabled(false);
    ui->btn_card4->setEnabled(false);
    ui->btn_card5->setEnabled(false);
    hand.dumpCard(1, boss);
    ui->btn_draw->setEnabled(true);
    ui->boss_hp->setValue(boss.getBossHp());
}


void MainWindow::on_btn_card2_clicked()
{
    ui->name2->setText("");
    ui->element2->setText("");
    ui->power2->setText("");
    ui->btn_card2->setVisible(false);
    ui->btn_card1->setEnabled(false);
    ui->btn_card3->setEnabled(false);
    ui->btn_card4->setEnabled(false);
    ui->btn_card5->setEnabled(false);
    hand.dumpCard(2, boss);
    ui->btn_draw->setEnabled(true);
    ui->boss_hp->setValue(boss.getBossHp());
}


void MainWindow::on_btn_card3_clicked()
{
    ui->name3->setText("");
    ui->element3->setText("");
    ui->power3->setText("");
    ui->btn_card3->setVisible(false);
    ui->btn_card1->setEnabled(false);
    ui->btn_card2->setEnabled(false);
    ui->btn_card4->setEnabled(false);
    ui->btn_card5->setEnabled(false);
    hand.dumpCard(3, boss);
    ui->boss_hp->setValue(boss.getBossHp());
    ui->btn_draw->setEnabled(true);
}


void MainWindow::on_btn_card4_clicked()
{
    ui->name4->setText("");
    ui->element4->setText("");
    ui->power4->setText("");
    ui->btn_card4->setVisible(false);
    ui->btn_card1->setEnabled(false);
    ui->btn_card2->setEnabled(false);
    ui->btn_card3->setEnabled(false);
    ui->btn_card5->setEnabled(false);
    hand.dumpCard(4, boss);
    ui->boss_hp->setValue(boss.getBossHp());
    ui->btn_draw->setEnabled(true);
}


void MainWindow::on_btn_card5_clicked()
{
    ui->name5->setText("");
    ui->element5->setText("");
    ui->power5->setText("");
    ui->btn_card5->setVisible(false);
    ui->btn_card1->setEnabled(false);
    ui->btn_card2->setEnabled(false);
    ui->btn_card3->setEnabled(false);
    ui->btn_card4->setEnabled(false);
    hand.dumpCard(5, boss);
    ui->boss_hp->setValue(boss.getBossHp());
    ui->btn_draw->setEnabled(true);
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
    deck.drawCard(hand.getHand(),deck.getDeck());

    // SETTING UP HAND
    int cardNumber = 0;
    ui->name1->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element1->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power1->setText(QString::number(hand.getHand()[cardNumber].getPower()));

    cardNumber++;
    ui->name2->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element2->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power2->setText(QString::number(hand.getHand()[cardNumber].getPower()));

    cardNumber++;
    ui->name3->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element3->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power3->setText(QString::number(hand.getHand()[cardNumber].getPower()));

    cardNumber++;
    ui->name4->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element4->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power4->setText(QString::number(hand.getHand()[cardNumber].getPower()));

    cardNumber++;
    ui->name5->setText(QString::fromStdString(hand.getHand()[cardNumber].getName()));
    ui->element5->setText(convertElement(int(hand.getHand()[cardNumber].getElement())));
    ui->power5->setText(QString::number(hand.getHand()[cardNumber].getPower()));
}

