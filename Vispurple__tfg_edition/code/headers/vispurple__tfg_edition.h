#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_vispurple__tfg_edition.h"

#include <Image.hpp>
#include <ScreenMedia.hpp>
#include <Report.hpp>

#include <memory>

#include <qtimer.h>
#include <qfiledialog.h>

class Vispurple__tfg_edition : public QMainWindow
{
    Q_OBJECT

    enum TOOL_MODES { analyze = 0, simulation = 1 };
    enum VISUALIZATION {window, image};

    float delta_time_milliseconds;

    ScreenMedia media_screen;
    Report      report;
    VISUALIZATION content_to_previsualizate;

    std::shared_ptr<Image> original;
    std::shared_ptr<QTimer> timer;

public:
    Vispurple__tfg_edition(QWidget* parent = Q_NULLPTR);
    

private:
    Ui::Vispurple__tfg_editionClass ui;


private slots:
    
    void update();

    void set_delta_time();    

    void load_image();

    void export_report();

    void update_available_windows();

    void select_current_window();

    void update_accessibility_index();

    void simulate();

    void save_image();
   
};
