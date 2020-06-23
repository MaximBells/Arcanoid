#include "pucksupply.h"

#include <iostream>


PuckSupply::PuckSupply(int x, int y) {

  image.load("/Users/ruslan/Desktop/Our_Project_Game/build-breakout-Desktop_Qt_5_13_0_MinGW_32_bit-Debug/heart.jpg");
  rect = image.rect();
  rect.translate(x, y);
}

PuckSupply::~PuckSupply() {

  std::cout << ("PuckSupply deleted") << std::endl;
}

QRect PuckSupply::getRect() {

  return rect;
}

QImage & PuckSupply::getImage() {

  return image;
}
