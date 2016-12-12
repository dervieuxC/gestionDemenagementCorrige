#ifndef DIALOGAJOUTARRETMALADIE_H
#define DIALOGAJOUTARRETMALADIE_H

#include <QDialog>

namespace Ui {
class DialogAjoutArretMaladie;
}

class DialogAjoutArretMaladie : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogAjoutArretMaladie(QWidget *parent = 0);
    ~DialogAjoutArretMaladie();
    
private:
    Ui::DialogAjoutArretMaladie *ui;
};

#endif // DIALOGAJOUTARRETMALADIE_H
