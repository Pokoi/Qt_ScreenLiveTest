#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vispurple.h"

class Vispurple : public QMainWindow
{
    Q_OBJECT

public:
    Vispurple(QWidget *parent = Q_NULLPTR);

private:
    Ui::VispurpleClass ui;
};
