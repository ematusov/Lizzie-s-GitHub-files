#include "mainwindow.h"
#include <QApplication>
#include "gameboard.h"
#include "gameboard2.h"
#include "plantgameboard.h"
#include "scientistgameboard.h"

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    MainWindow* w = new MainWindow;
    gameboard* cell = new gameboard;
    gameboard2* planet = new gameboard2;
    plantgameboard* plant = new plantgameboard;
    scientistgameboard* scientist = new scientistgameboard;

    w->setGameBoard(cell);
    w->setGameBoard(planet);
    w->setGameBoard(plant);
    w->setGameBoard(scientist);

    cell->setMainWindow(w);
    planet->setMainWindow(w);
    plant->setMainWindow(w);
    scientist->setMainWindow(w);

    w->show();

    return a.exec();
}
