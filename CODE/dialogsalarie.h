#ifndef DIALOGSALARIE_H
#define DIALOGSALARIE_H

#include <QDialog>

namespace Ui {
class DialogSalarie;
}

class DialogSalarie : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSalarie(QWidget *parent = 0);
    ~DialogSalarie();

private:
    Ui::DialogSalarie *ui;
};

#endif // DIALOGSALARIE_H
