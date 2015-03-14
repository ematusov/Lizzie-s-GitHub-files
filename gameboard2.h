#ifndef GAMEBOARD2_H
#define GAMEBOARD2_H


#include <QWidget>
#include <QMainWindow>
#include <QToolButton>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLayout>
#include <QString>
#include <QInputDialog>
#include <QLabel>
#include <qDebug>
#include <QKeyEvent>
#include <QVector>
#include <QPushButton>
#include <QPainter>
#include <QSpinBox>
#include <QDebug>
#include <QGraphicsGridLayout>
#include <QCoreApplication>
#include "mainwindow.h"
#include <QMessageBox>
#include <QTimer>


class MainWindow;

/**
 * @class gameboard2
 * @brief The gameboard2 class, which is the planet gameboard
 */
class gameboard2 : public QWidget
{
    Q_OBJECT
public:
    explicit gameboard2(QWidget *parent = 0, int size = 7);
    ~gameboard2();

    int board_size;



    void setMainWindow(MainWindow* main_window);


signals:


void clicked();
void timeout();
void update();


public slots:
void retry();


protected:


private:

    MainWindow* mw;
    QLabel* text;
    QSpinBox* moves;
    QToolButton *button[10][10];





};

#endif // GAMEBOARD2_H
