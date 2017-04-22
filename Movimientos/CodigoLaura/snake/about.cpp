#include "about.h"
#include "ui_about.h"

about::about(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::about)
{
    ui->setupUi(this);
        this->    setWindowFlags(Qt::FramelessWindowHint);
}

about::~about()
{
    delete ui;
}

void about::close_about(){
    this->close();
}
