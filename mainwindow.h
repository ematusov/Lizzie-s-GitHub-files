#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QTextStream>
#include <QHoverEvent>

#include "gameboard.h"
#include "gameboard2.h"
#include "plantgameboard.h"
#include "scientistgameboard.h"

class gameboard;
class gameboard2;
class plantgameboard;
class scientistgameboard;


/**
 *@class mainwindow
 * @brief this is the mainwindow class, which connects to the gameboard
 */
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

     void setGameBoard(gameboard* game_board);
     void setGameBoard(gameboard2* game_board2);
    void setGameBoard(plantgameboard* plantboard);
    void setGameBoard(scientistgameboard* scientistgameboard);
private:

    Ui::MainWindow *ui;
    QWidget* widget1;
    QLabel* welcome;
    QLabel* label_title;
    QLabel* label_subtitle;
    QPushButton* button_start;
    QPushButton* cell;
    QPushButton* planet;
    QPushButton* plant;
    QPushButton* scientist;

};

#endif // MAINWINDOW_H
