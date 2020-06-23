#include <iostream>
#include "pucksupply.h"

PuckSupply::PuckSupply(int x, int y) {

  image.load("heart.png");
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

