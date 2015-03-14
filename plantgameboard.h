#ifndef PLANTGAMEBOARD_H
#define PLANTGAMEBOARD_H

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
#include <QAbstractButton>
#include <QGraphicsGridLayout>
#include <QCoreApplication>
#include "mainwindow.h"
#include <QMessageBox>
#include <QTimer>


class MainWindow;

/**
 * @class plantgameboard
 * @brief The plantgameboard class
 */
class plantgameboard : public QWidget
{
    Q_OBJECT
public:
    explicit plantgameboard(QWidget *parent = 0, int size = 7);
    ~plantgameboard();
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
    int timerId;
};

#endif // PLANTGAMEBOARD_H
