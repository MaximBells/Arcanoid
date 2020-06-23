#pragma once

#include <QImage>
#include <QRect>
class PuckSupply {

  public:
    PuckSupply(int, int);
    ~PuckSupply();

  public:



    QRect getRect();

    QImage & getImage();

  private:

    QImage image;
    QRect rect;
    static const int INITIAL_X = 220;
    static const int INITIAL_Y = 30;

};
