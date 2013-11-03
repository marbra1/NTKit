#include "ntkit.h"
#include "ui_ntkit.h"

NTKit::NTKit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NTKit)
{
    ui->setupUi(this);
}

NTKit::~NTKit()
{
    delete ui;
}
