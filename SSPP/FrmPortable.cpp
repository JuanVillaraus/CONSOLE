#include "FrmPortable.h"
#include "ui_FrmPortable.h"

FrmPortable::FrmPortable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FrmPortable)
{
    ui->setupUi(this);
}

FrmPortable::~FrmPortable()
{
    delete ui;
}
