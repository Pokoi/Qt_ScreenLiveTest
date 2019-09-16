#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QDesktopWidget>
#include <QLabel>
#include <QTimer>
#include <QGroupBox>
#include <QScreen>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QWindow>
#include <QStandardPaths>
#include <QDir>
#include <QFileDialog>
#include <QImageWriter>
#include <QMessageBox>
#include <QBitmap>
#include <QPainter>
#include <QColor>
#include "recolor.h"

namespace Ui {
class Widget;
}

class LiveScreen : public QWidget
{
    Q_OBJECT

public:
    explicit LiveScreen(QWidget* parent = nullptr);
    ~LiveScreen() override;

protected:
    void resizeEvent(QResizeEvent* event) override;

private slots:
    //void update();
    void save_screenshot();
    //void toggle_recolor(){ need_to_recolor = !need_to_recolor;}


private:
    void initialize_interface();
    void resize_livescreen_label();
    //void capture_screen();

    Ui::Widget* ui;

    QPixmap original_pixmap;
    //QTimer* timer;
    QLabel* livescreen_label;
    QPushButton* screenshot_button;
    QCheckBox* recolor_button;
    QScreen* screen;
    QRect screenGeometry;
    //bool need_to_recolor = false;
    //Recolor color_modifier;

};

#endif // WIDGET_H
