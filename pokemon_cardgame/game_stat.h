#ifndef GAME_STAT_H
#define GAME_STAT_H

#include <QDialog>

namespace Ui {
class game_stat;
}

class game_stat : public QDialog
{
    Q_OBJECT

public:
    explicit game_stat(QWidget *parent = nullptr);
    ~game_stat();

private:
    Ui::game_stat *ui;
};

#endif // GAME_STAT_H
