#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDesktopWidget>
#include <QGroupBox>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QWindow>
#include <QStandardPaths>
#include <QDir>
#include <QFileDialog>
#include <QImageWriter>
#include <QMessageBox>
#include <QLabel>
#include <QScreen>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    /**
     * @brief A pointer to the button that launch the event to
     * take screenshots
     */
    QPushButton *screenshot_button;
    /**
     * @brief A pointer to the button that converts the white pixels into
     * red ones
     */
    QCheckBox   *white_to_red_button;

    Ui::MainWindow *ui;
    /**
     * @brief A pointer to the area that displays the region captured
     */
    QLabel   *livescreen_label;

    /**
     * @brief The screen being captured
     */
    QScreen   *screen;

    /**
     * @brief The pixmap with the preview of the region captured
     */
    QPixmap   original_pixmap;

    bool need_to_recolor;

    QTimer * timer;


public:

    /**
     * @brief Updates the display of the region captured in the right scale
     */
    void resize_livescreen_label();
    /**
     * @brief Gets the global instance to this class
     * @return
     */
    static MainWindow & get_instance()
    {
        static MainWindow object;
        return object;
    }

protected:

    /**
     * @brief Override method for the resize event, called when
     * this window is resized. This event updates the scale of the
     * pixmap with the preview of the region captured and calls the
     * resize_livescreen_label method if needed.
     * @param The resize event
     */
    void resizeEvent(QResizeEvent* event) override;

private slots:

    /**
     * @brief Saves the preview of the region captured as an image
     */
    void save_screenshot();
    /**
     * @brief Creates the task that changes the white color to red in the
     * task stack.
     */
    void toggle_recolor() { need_to_recolor != need_to_recolor; }

    void update();


private:

    MainWindow(const MainWindow &) = delete;
    /**
     * @brief Creates a new object of this class
     * @param A pointer to his widget parent. Default value
     * is nullptr.
     */
    explicit MainWindow(QWidget* parent = nullptr);

    /**
     * @brief Creates the interface elements of this window
     */
    void initialize_interface();
    /**
     * @brief Create the main tasks in the task stack.
     */
    void create_main_tasks();

    /**
     * @brief Changes every white pixel in the preview of the region
     * captured with a red pixel
     */
     void white_to_red();

     /**
      * @brief Updates the pixmap with the preview of the region captured
      */
     void capture_screen();


   ~MainWindow() override{ delete ui;}
};
#endif // MAINWINDOW_H
