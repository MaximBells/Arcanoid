#include <iostream>
#include "brick.h"

Brick::Brick(int x, int y) {

  image.load("/Users/ruslan/Desktop/ARCANOID)/build-breakout-Desktop_Qt_5_13_0_MinGW_32_bit-Debug/brick3.jpg");
  destroyed = false;
  rect = image.rect();
  rect.translate(x, y);
}

Brick::~Brick() {

  std::cout << ("Brick deleted") << std::endl;
}

QRect Brick::getRect() {

  return rect;
}

void Brick::setRect(QRect rct) {

  rect = rct;
}

QImage & Brick::getImage() {

  return image;
}

bool Brick::isDestroyed() {

  return destroyed;
}

void Brick::setDestroyed(bool destr) {

  destroyed = destr;
}
