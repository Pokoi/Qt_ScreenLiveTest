#ifndef BLACKBOARD_H
#define BLACKBOARD_H

#endif // BLACKBOARD_H

#include <QWidget>
#include <QLabel>
#include <QScreen>


class BlackBoard
{

private:

    BlackBoard()  = delete;
    ~BlackBoard() = delete;

    /**
     * @brief The pixmap with the preview of the region captured
     */
    static QPixmap   original_pixmap;
    /**
     * @brief A pointer to the area that displays the region captured
     */
    static QLabel   *livescreen_label;
    /**
     * @brief The screen being captured
     */
    static QScreen   *screen;


public:

    /**
     * @brief Gets a pointer to the pixmap with the preview of the region captured
     * @return A pointer to the pixmap with the preview of the region captured
     */
    static QPixmap * get_pixmap() { return & original_pixmap;}
    /**
     * @brief Gets a pointer to the area that displays the region captured
     * @return A pointer to the area that displays the region captured
     */
    static QLabel  * get_label()  { return   livescreen_label;}
    /**
     * @brief Gets a pointer to the screen being captured
     * @return A pointer to the screen being captured
     */
    static QScreen * get_screen() { return   screen;}

    /**
     * @brief Updates the pointer to the pixmap with the preview of the region captured
     * with the given pointer
     * @param The new pointer to the pixmap with the preview of the region captured
     */
    static void set_pixmap(QPixmap *p) { original_pixmap = *p;}
    /**
     * @brief Updates the pointer to the area that displays the region captured with
     * the given pointer
     * @param The new pointer to the area that displays the region captured
     */
    static void set_label(QLabel *l)   { livescreen_label = l;}
    /**
     * @brief Updates the pointer to the screen being captured with the given pointer
     * @param The new pointer to the screen being captured
     */
    static void set_screen(QScreen *s) { screen = s;}
};
