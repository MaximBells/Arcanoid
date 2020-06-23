#pragma once

#include <QImage>
#include <QRect>

class Sprite {
public:
    Sprite();
    ~Sprite();
    virtual QRect getRect();
    virtual QImage & getImage();

private:
    QImage image;
    QRect rect;
};
