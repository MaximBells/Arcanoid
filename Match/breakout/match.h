//#ifndef MATCH_H
//#define MATCH_H


//class match
//{
//public:
//    match();
//};

//#endif // MATCH_H


#pragma once

#include <QWidget>
#include <QKeyEvent>
#include "ball.h"
#include "brick.h"
#include "paddle.h"
#include "pucksupply.h"
class Match: public QWidget {

  public:
    Match(QWidget *parent = 0);
    ~Match();

  protected:
    void paintEvent(QPaintEvent *);
    void timerEvent(QTimerEvent *);
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);
    void drawObjects(QPainter *);
    void finishGame(QPainter *, QString);
    void moveObjects();

    void startGame();
    void pauseGame();
    void unpauseGame();
    void stopGame();
    void victory();
    void checkCollision();

  private:
    int x;
    int count;
    int timerId;
    static const int N_OF_BRICKS = 30;
    static const int DELAY = 10;
    static const int BOTTOM_EDGE = 400;
    Ball *ball;
    Paddle *paddle;
    PuckSupply *pucksupply[3];
    Brick *bricks[N_OF_BRICKS];
    bool gameOver;
    bool gameWon;
    bool gameStarted;
    bool paused;
};
