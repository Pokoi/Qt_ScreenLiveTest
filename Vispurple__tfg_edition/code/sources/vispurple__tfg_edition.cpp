#include "vispurple__tfg_edition.h"

Vispurple__tfg_edition::Vispurple__tfg_edition(QWidget *parent)
    : 
    QMainWindow(parent), 
    report{ "../../assets/reportTemplate.txt" }
{
    ui.setupUi(this);
}
