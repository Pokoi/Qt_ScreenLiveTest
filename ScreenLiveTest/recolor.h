#ifndef RECOLOR_H
#define RECOLOR_H
#include <QColor>
#include <QPixmap>

class Recolor
{
public:
    Recolor();








public:

    enum modes{colorblind_a, colorblind_b, colorblind_c, high_contrast, none};
    modes current_mode;



    void recolor_image(QPixmap* to_recolor);


private:

    struct colorblind_a_changes
    {

    };

    struct colorblind_b_changes
    {

    };

    struct colorblind_c_changes
    {

    };

    void toggle_recolor(){ need_to_recolor = !need_to_recolor;}
    bool need_to_recolor;

};

#endif // RECOLOR_H
