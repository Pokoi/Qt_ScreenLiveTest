#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QDesktopWidget>
#include <QLabel>
#include <QTimer>
#include <QGroupBox>
#include <QScreen>

namespace Ui {
class Widget;
}

class LiveScreen : public QWidget
{
    Q_OBJECT

public:
    explicit LiveScreen(QWidget *parent = nullptr);
    ~LiveScreen() override;

protected:
    void resizeEvent(QResizeEvent *event) override;

private slots:
    void update();
    void save_screenshot();


private:
    void resize_livescreen_label();
    void capture_screen();

    Ui::Widget *ui;

    QPixmap original_pixmap;
    QTimer *timer;
    QLabel *livescreen_label;
    QPushButton *screenshot_button;
    QScreen* screen;
    QRect screenGeometry;

};

#endif // WIDGET_H
