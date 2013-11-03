#ifndef NTKIT_H
#define NTKIT_H

#include <QMainWindow>

namespace Ui {
class NTKit;
}

class NTKit : public QMainWindow
{
    Q_OBJECT

public:
    explicit NTKit(QWidget *parent = 0);
    ~NTKit();

private:
    Ui::NTKit *ui;
};

#endif // NTKIT_H
