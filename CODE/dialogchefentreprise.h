#ifndef DIALOGCHEFENTREPRISE_H
#define DIALOGCHEFENTREPRISE_H

#include <QDialog>

namespace Ui {
class DialogChefEntreprise;
}

class DialogChefEntreprise : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChefEntreprise(QWidget *parent = 0);
    ~DialogChefEntreprise();

private:
    Ui::DialogChefEntreprise *ui;
};

#endif // DIALOGCHEFENTREPRISE_H
