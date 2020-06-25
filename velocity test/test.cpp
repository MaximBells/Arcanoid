#include "Ball.h"
#include <QtTest/QtTest>


class MyTest : public QObject {
    Q_OBJECT
    private slots:
        void getXDir();
        void getYDir();
};

void MyTest::getXDir(){
    Ball _ball;
    QCOMPARE(_ball.getXDir(),1);
    QCOMPARE(_ball.getXDir(),-1);
}
void MyTest::getYDir(){
    Ball _ball;
    QCOMPARE(_ball.getYDir(),1);
    QCOMPARE(_ball.getYDir(),-1);
}
QTEST_MAIN(MyTest);
/* Класс Velocity не был реализован в нашем проекте, однако его отдельные
 * методы были реализованы в классе Ball ( AutoMove, setXDir, setYDir,
 * getXDir, getYDir), а также в классе Match (CheckCollision). Поскольку
 * все движения и отскоки мячика (шайбы) были реализованы простыми if-ами,
 * сложно прописать настоящие юнит тесты, однако мы постарались и прописали
 * данные тесты.
 * СПАСИБО ЗА ВНИМАНИЕ !!!
 * /
