#pragma once

#include <QImage>
#include <QRect>
#include <sprite.h>

class Paddle : public Sprite{

  public:
    Paddle();
    ~Paddle();

  public:
    void resetState();
    void move();
    void setDx(int);
    QRect getRect() override;
    QImage & getImage() override;

  private:
    QImage image;
    QRect rect;
    int dx;
    static const int INITIAL_X = 200;
    static const int INITIAL_Y = 360;
};
