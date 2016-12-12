#ifndef DIALOGCOMMERCIAL_H
#define DIALOGCOMMERCIAL_H

#include <QDialog>

namespace Ui {
class DialogCommercial;
}

class DialogCommercial : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCommercial(QWidget *parent = 0);
    ~DialogCommercial();

private:
    Ui::DialogCommercial *ui;
};

#endif // DIALOGCOMMERCIAL_H
