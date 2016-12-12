#ifndef DIALOGVERIFICATION_H
#define DIALOGVERIFICATION_H

#include <QDialog>

namespace Ui {
class DialogVerification;
}

class DialogVerification : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogVerification(QWidget *parent = 0);
    ~DialogVerification();
    
private:
    Ui::DialogVerification *ui;
};

#endif // DIALOGVERIFICATION_H
