#include <iostream>
#include "paddle.h"


Paddle::Paddle() {

  dx = 0;
  image.load("/Users/ruslan/Desktop/ARCANOID)/build-breakout-Desktop_Qt_5_13_0_MinGW_32_bit-Debug/paddle.png");

  rect = image.rect();
  resetState();
}

Paddle::~Paddle() {

 std::cout << ("Paddle deleted") << std::endl;
}

void Paddle::setDx(int x) {
  dx = x;
}

void Paddle::move() {

    int x = rect.x() + dx;
    int y = rect.top();
if((x > 0)&&(x<(300-rect.width()))){
    rect.moveTo(x, y);
}
}

void Paddle::resetState() {

  rect.moveTo(INITIAL_X, INITIAL_Y);
}

QRect Paddle::getRect() {

  return rect;
}

QImage & Paddle::getImage() {

  return image;
}
