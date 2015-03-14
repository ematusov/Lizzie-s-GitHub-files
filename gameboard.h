#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QProcess>
#include <QApplication>
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
 * @class Gameboard
 * @brief this is the class for the first gameboard, which refers to the human cell
 */

class gameboard : public QWidget
{
    Q_OBJECT
public:
    explicit gameboard(QWidget *parent = 0, int size = 7);
    ~gameboard();

    int board_size;
    void setMainWindow(MainWindow* main_window);

public slots:
    void retry();


signals:
void clicked();
void timeout();
void update();


protected:

private:

    MainWindow* mw;
    QLabel* text;
    QSpinBox* moves;
    QToolButton *button[10][10];
    int timerId;



};

#endif // GAMEBOARD_H
