#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QHBoxLayout>

/**
 * @brief this is the main window constructor, which constructs the introductory window that first pops up
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
 {
    this->setWindowTitle("Sci-Enter");
    this->setStyleSheet("border-image: url(/Users/Lizzie/LIZARDLEAP/space.jpg);}");

    // central widget of the control window
    widget1 = new QWidget;

    welcome = new QLabel("<center><b>HOW TO PLAY:</b> The name of the game is simple!</center>");
    QLabel* welcome2 = new QLabel("<font color = white><font size=13><center>Below you will puzzle pieces, all hiding a segment of an image you want to discover.</font></font></center>");
    QLabel* welcome3 = new QLabel("<font color = white><font size=13>Roll over a puzzle-piece to uncover the image underneath it!</font></font>");
    QLabel* welcome4 = new QLabel("<font color = white><font size=13>Once you think you know the image, guess it by clicking 'READY TO GUESS'!</font></font>");

    // label for title of control window
    label_title = new QLabel("<font size = 30><font color = yellow><b><center>Welcome to <br><font size=36>Sci-enter!</font></center></font></font>");
    label_subtitle = new QLabel("<font size = 10><font color=white><center><br>Select an category! </center></font></font>");
    label_title->setStyleSheet("QLabel {color: white}");





    // radio buttons for level selection
    scientist = new QPushButton("~EASY: Scientists~");
    scientist->setStyleSheet("QPushButton {color: yellow}");
    planet = new QPushButton("~MEDIUM: Planets~");
    planet->setStyleSheet("color: yellow;");
    cell = new QPushButton("~HARD: Human Cell~");
    cell->setStyleSheet("color: yellow;");
    plant = new QPushButton("~SUPER HARD: Plant Type~");
    plant->setStyleSheet("color: yellow;");

    scientist->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
          planet->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
          plant->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
          cell->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);


    // place radio buttons in vertical layout
    QHBoxLayout* radio_lay = new QHBoxLayout;
    radio_lay->addWidget(scientist);
    radio_lay->addWidget(planet);
    radio_lay->addWidget(cell);
    radio_lay->addWidget(plant);
    radio_lay->setSpacing(30);



    // add everything to the gird layout
    QGridLayout* grid_lay = new QGridLayout; //this will be the main layout for widget1

    grid_lay->addWidget(label_title,1,1,1,1,Qt::AlignCenter);
    grid_lay->addWidget(welcome,3,1,1,1,Qt::AlignCenter);
    grid_lay->addWidget(welcome2,4,1,1,1,Qt::AlignCenter);
    grid_lay->addWidget(welcome3,5,1,1,1,Qt::AlignCenter);
    grid_lay->addWidget(welcome4,6,1,1,1,Qt::AlignCenter);
    grid_lay->addWidget(label_subtitle,7,1,1,1,Qt::AlignCenter);
    grid_lay->addLayout(radio_lay,8,1,1,1,Qt::AlignCenter);

    widget1->setLayout(grid_lay);

    this->setCentralWidget(widget1);
}

/**
 * @param none
 * @return none
 * @brief MainWindow::~MainWindow default destructor
 */
MainWindow::~MainWindow()
{
    delete ui;
}




/**
 * @brief this function connects the user click to the cell gameboard
 * @return none
 * @param game_board
 */
void MainWindow::setGameBoard(gameboard* game_board) {

    QObject::connect(cell, SIGNAL(clicked()),game_board, SLOT(show()));
    QObject::connect(cell, SIGNAL(clicked()), this, SLOT(hide()));
}

/**
 * @brief this function connects the user click to the planet gameboard
 * @return none
 * @param game_board
 */
void MainWindow::setGameBoard(gameboard2* game_board2) {
    QObject::connect(planet, SIGNAL(clicked()), game_board2, SLOT(show()));
    QObject::connect(planet, SIGNAL(clicked()), this, SLOT(hide()));
}

/**
 * @brief this function connects the user click to the plant gameboard
 * @return none
 * @param game_board
 */
void MainWindow::setGameBoard(plantgameboard* plantboard) {
    QObject::connect(plant, SIGNAL(clicked()), plantboard, SLOT(show()));
    QObject::connect(plant, SIGNAL(clicked()), this, SLOT(hide()));
}

/**
 * @brief this function connects the user click to the scientist gameboard
 * @return none
 * @param game_board
 */
void MainWindow::setGameBoard(scientistgameboard* scientistgameboard) {
    QObject::connect(scientist, SIGNAL(clicked()),scientistgameboard, SLOT(show()));
    QObject::connect(scientist, SIGNAL(clicked()), this, SLOT(hide()));
}
