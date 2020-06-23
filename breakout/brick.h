#pragma once

#include <QImage>
#include <QRect>
#include <sprite.h>

class Brick : public Sprite{

  public:
    Brick(int, int);
    ~Brick();

  public:
    bool isDestroyed();
    void setDestroyed(bool);
    QRect getRect() override;
    void setRect(QRect) ;
    QImage & getImage() override;

  private:
    QImage image;
    QRect rect;
    bool destroyed;
};
