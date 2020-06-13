#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vispurple__tfg_edition.h"

#include <Image.hpp>
#include <ScreenMedia.hpp>
#include <Report.hpp>

class Vispurple__tfg_edition : public QMainWindow
{
    Q_OBJECT

        float delta_time;

    ScreenMedia media_screen;
    Report      report;

public:
    Vispurple__tfg_edition(QWidget* parent = Q_NULLPTR);
    

private:
    Ui::Vispurple__tfg_editionClass ui;

    void update() {}

    void set_delta_time() {}

    void load_image() {}

    void export_report() {}

    void update_available_windows() {}
};
