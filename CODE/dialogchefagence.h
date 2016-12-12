#ifndef DIALOGCHEFAGENCE_H
#define DIALOGCHEFAGENCE_H

#include <QDialog>

namespace Ui {
class DialogChefAgence;
}

class DialogChefAgence : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChefAgence(QWidget *parent = 0);
    ~DialogChefAgence();

private:
    Ui::DialogChefAgence *ui;
};

#endif // DIALOGCHEFAGENCE_H
