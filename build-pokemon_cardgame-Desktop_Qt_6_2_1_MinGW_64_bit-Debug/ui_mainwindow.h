/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *boss_area;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *boss_name;
    QProgressBar *boss_hp;
    QFrame *frame_3;
    QLabel *boss_element;
    QFrame *card_area;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *card;
    QVBoxLayout *verticalLayout_3;
    QLabel *name1;
    QLabel *power1;
    QLabel *element1;
    QPushButton *btn_card1;
    QGroupBox *card_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *name2;
    QLabel *power2;
    QLabel *element2;
    QPushButton *btn_card2;
    QGroupBox *card_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *name3;
    QLabel *power3;
    QLabel *element3;
    QPushButton *btn_card3;
    QGroupBox *card_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *name4;
    QLabel *power4;
    QLabel *element4;
    QPushButton *btn_card4;
    QGroupBox *card_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *name5;
    QLabel *power5;
    QLabel *element5;
    QPushButton *btn_card5;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *card_6;
    QVBoxLayout *verticalLayout_9;
    QLabel *deck_name;
    QPushButton *btn_draw;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(47, 47, 47);"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        boss_area = new QFrame(frame);
        boss_area->setObjectName(QString::fromUtf8("boss_area"));
        boss_area->setFrameShape(QFrame::StyledPanel);
        boss_area->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(boss_area);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_2 = new QFrame(boss_area);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(200, 250));
        frame_2->setMaximumSize(QSize(16777215, 250));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        boss_name = new QLabel(frame_2);
        boss_name->setObjectName(QString::fromUtf8("boss_name"));
        boss_name->setMaximumSize(QSize(16777215, 25));
        boss_name->setStyleSheet(QString::fromUtf8("color:#fff;"));
        boss_name->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(boss_name);

        boss_hp = new QProgressBar(frame_2);
        boss_hp->setObjectName(QString::fromUtf8("boss_hp"));
        boss_hp->setMaximum(2000);
        boss_hp->setValue(24);
        boss_hp->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(boss_hp);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(140, 0));
        frame_3->setMaximumSize(QSize(140, 16777215));
        frame_3->setAutoFillBackground(false);
        frame_3->setStyleSheet(QString::fromUtf8("background-image: url(:/new/images/Legendary_Mewtwo.gif);\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(frame_3, 0, Qt::AlignHCenter);

        boss_element = new QLabel(frame_2);
        boss_element->setObjectName(QString::fromUtf8("boss_element"));
        boss_element->setMaximumSize(QSize(16777215, 30));
        boss_element->setStyleSheet(QString::fromUtf8("color:#fff;"));
        boss_element->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(boss_element);


        horizontalLayout->addWidget(frame_2, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(boss_area);

        card_area = new QFrame(frame);
        card_area->setObjectName(QString::fromUtf8("card_area"));
        card_area->setFrameShape(QFrame::StyledPanel);
        card_area->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(card_area);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        frame_4 = new QFrame(card_area);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(600, 160));
        frame_4->setMaximumSize(QSize(16777215, 160));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        card = new QGroupBox(frame_4);
        card->setObjectName(QString::fromUtf8("card"));
        card->setMinimumSize(QSize(110, 150));
        card->setMaximumSize(QSize(110, 16777215));
        card->setCursor(QCursor(Qt::ArrowCursor));
        card->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 23, 23);"));
        verticalLayout_3 = new QVBoxLayout(card);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        name1 = new QLabel(card);
        name1->setObjectName(QString::fromUtf8("name1"));
        name1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(name1);

        power1 = new QLabel(card);
        power1->setObjectName(QString::fromUtf8("power1"));
        power1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        power1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(power1);

        element1 = new QLabel(card);
        element1->setObjectName(QString::fromUtf8("element1"));
        element1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        element1->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(element1);

        btn_card1 = new QPushButton(card);
        btn_card1->setObjectName(QString::fromUtf8("btn_card1"));
        btn_card1->setStyleSheet(QString::fromUtf8("color:#fff;"));

        verticalLayout_3->addWidget(btn_card1);


        horizontalLayout_3->addWidget(card);

        card_2 = new QGroupBox(frame_4);
        card_2->setObjectName(QString::fromUtf8("card_2"));
        card_2->setMinimumSize(QSize(110, 150));
        card_2->setMaximumSize(QSize(110, 16777215));
        card_2->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 23, 23);"));
        verticalLayout_5 = new QVBoxLayout(card_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        name2 = new QLabel(card_2);
        name2->setObjectName(QString::fromUtf8("name2"));
        name2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(name2);

        power2 = new QLabel(card_2);
        power2->setObjectName(QString::fromUtf8("power2"));
        power2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        power2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(power2);

        element2 = new QLabel(card_2);
        element2->setObjectName(QString::fromUtf8("element2"));
        element2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        element2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(element2);

        btn_card2 = new QPushButton(card_2);
        btn_card2->setObjectName(QString::fromUtf8("btn_card2"));
        btn_card2->setStyleSheet(QString::fromUtf8("color:#fff;"));
        btn_card2->setCheckable(false);

        verticalLayout_5->addWidget(btn_card2);


        horizontalLayout_3->addWidget(card_2);

        card_3 = new QGroupBox(frame_4);
        card_3->setObjectName(QString::fromUtf8("card_3"));
        card_3->setMinimumSize(QSize(110, 150));
        card_3->setMaximumSize(QSize(110, 16777215));
        card_3->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 23, 23);"));
        verticalLayout_6 = new QVBoxLayout(card_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        name3 = new QLabel(card_3);
        name3->setObjectName(QString::fromUtf8("name3"));
        name3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(name3);

        power3 = new QLabel(card_3);
        power3->setObjectName(QString::fromUtf8("power3"));
        power3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        power3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(power3);

        element3 = new QLabel(card_3);
        element3->setObjectName(QString::fromUtf8("element3"));
        element3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        element3->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(element3);

        btn_card3 = new QPushButton(card_3);
        btn_card3->setObjectName(QString::fromUtf8("btn_card3"));
        btn_card3->setStyleSheet(QString::fromUtf8("color:#fff;"));

        verticalLayout_6->addWidget(btn_card3);


        horizontalLayout_3->addWidget(card_3);

        card_4 = new QGroupBox(frame_4);
        card_4->setObjectName(QString::fromUtf8("card_4"));
        card_4->setMinimumSize(QSize(110, 150));
        card_4->setMaximumSize(QSize(110, 16777215));
        card_4->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 23, 23);"));
        verticalLayout_7 = new QVBoxLayout(card_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        name4 = new QLabel(card_4);
        name4->setObjectName(QString::fromUtf8("name4"));
        name4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name4->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(name4);

        power4 = new QLabel(card_4);
        power4->setObjectName(QString::fromUtf8("power4"));
        power4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        power4->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(power4);

        element4 = new QLabel(card_4);
        element4->setObjectName(QString::fromUtf8("element4"));
        element4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        element4->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(element4);

        btn_card4 = new QPushButton(card_4);
        btn_card4->setObjectName(QString::fromUtf8("btn_card4"));
        btn_card4->setStyleSheet(QString::fromUtf8("color:#fff;"));

        verticalLayout_7->addWidget(btn_card4);


        horizontalLayout_3->addWidget(card_4);

        card_5 = new QGroupBox(frame_4);
        card_5->setObjectName(QString::fromUtf8("card_5"));
        card_5->setMinimumSize(QSize(110, 150));
        card_5->setMaximumSize(QSize(110, 16777215));
        card_5->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 23, 23);"));
        verticalLayout_8 = new QVBoxLayout(card_5);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        name5 = new QLabel(card_5);
        name5->setObjectName(QString::fromUtf8("name5"));
        name5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        name5->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(name5);

        power5 = new QLabel(card_5);
        power5->setObjectName(QString::fromUtf8("power5"));
        power5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        power5->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(power5);

        element5 = new QLabel(card_5);
        element5->setObjectName(QString::fromUtf8("element5"));
        element5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        element5->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(element5);

        btn_card5 = new QPushButton(card_5);
        btn_card5->setObjectName(QString::fromUtf8("btn_card5"));
        btn_card5->setStyleSheet(QString::fromUtf8("color:#fff;"));

        verticalLayout_8->addWidget(btn_card5);


        horizontalLayout_3->addWidget(card_5);


        horizontalLayout_2->addWidget(frame_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frame_5 = new QFrame(card_area);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(0, 170));
        frame_5->setMaximumSize(QSize(136, 190));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_5);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        card_6 = new QGroupBox(frame_5);
        card_6->setObjectName(QString::fromUtf8("card_6"));
        card_6->setMinimumSize(QSize(110, 140));
        card_6->setStyleSheet(QString::fromUtf8("background-color: rgb(22, 23, 23);"));
        verticalLayout_9 = new QVBoxLayout(card_6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        deck_name = new QLabel(card_6);
        deck_name->setObjectName(QString::fromUtf8("deck_name"));
        deck_name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        deck_name->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(deck_name);


        verticalLayout_10->addWidget(card_6);

        btn_draw = new QPushButton(frame_5);
        btn_draw->setObjectName(QString::fromUtf8("btn_draw"));
        btn_draw->setStyleSheet(QString::fromUtf8("color:#fff;"));

        verticalLayout_10->addWidget(btn_draw);


        horizontalLayout_2->addWidget(frame_5, 0, Qt::AlignBottom);


        verticalLayout->addWidget(card_area);


        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pokemon CardGame", nullptr));
        boss_name->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        boss_element->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        card->setTitle(QString());
        name1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        power1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        element1->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_card1->setText(QCoreApplication::translate("MainWindow", "Play Card", nullptr));
        card_2->setTitle(QString());
        name2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        power2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        element2->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_card2->setText(QCoreApplication::translate("MainWindow", "Play Card", nullptr));
        card_3->setTitle(QString());
        name3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        power3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        element3->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_card3->setText(QCoreApplication::translate("MainWindow", "Play Card", nullptr));
        card_4->setTitle(QString());
        name4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        power4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        element4->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_card4->setText(QCoreApplication::translate("MainWindow", "Play Card", nullptr));
        card_5->setTitle(QString());
        name5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        power5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        element5->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_card5->setText(QCoreApplication::translate("MainWindow", "Play Card", nullptr));
        card_6->setTitle(QString());
        deck_name->setText(QCoreApplication::translate("MainWindow", "DECK", nullptr));
        btn_draw->setText(QCoreApplication::translate("MainWindow", "Play Card", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
