#include <QApplication>
#include "match.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Match window;

  window.resize(300, 400);
  window.setWindowTitle("Breakout");
  window.show();

  return app.exec();
}
