#ifndef LOSE_SCREEN_H
#define LOSE_SCREEN_H

#include <QDialog>

namespace Ui {
class lose_screen;
}

class lose_screen : public QDialog
{
    Q_OBJECT

public:
    explicit lose_screen(QWidget *parent = nullptr);
    ~lose_screen();

private:
    Ui::lose_screen *ui;
};

#endif // LOSE_SCREEN_H
