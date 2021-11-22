#include "game_stat.h"
#include "ui_game_stat.h"

game_stat::game_stat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::game_stat)
{
    ui->setupUi(this);
}

game_stat::~game_stat()
{
    delete ui;
}
