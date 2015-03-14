#include "scientistgameboard.h"

#include <QString>
#include <QWidget>
#include <QToolButton>
#include <QLabel>
#include <QTextEdit>
#include <QFrame>
#include <QSpinBox>





/**
     * @brief scientist game board default constructor
     * @return none
     * @param parent
     * @param size
     */

    scientistgameboard::scientistgameboard(QWidget *parent, int size) :
        QWidget(parent)
    {





        board_size=size;
        this->setWindowTitle("Sci-Enter");




        QTimer* timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(update()));
        timer->start(1000);



        QLabel* catlabel = new QLabel("<center><font size=16>CATEGORY: SCIENTIST</font></center>");


        QVBoxLayout* top = new QVBoxLayout;

        top->addWidget(catlabel);


         int count=1,i,j;
         int picnum=1;

         QGridLayout *controlsLayout = new QGridLayout;
         controlsLayout-> setSpacing(0);
         controlsLayout-> setMargin(0);


         //board setup
         int x=0;
         for(i=0;i<10;i++)
         {
             for(j=0;j<7;j++)
             {
                 if(count<=49)
                 {

                     ++x;
                     button[i][j] = new QToolButton;


                   button[i][j]->setIconSize(QSize(110,85));

                     if (count%4==0) {

                         if (picnum==4) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/4);}"); }
                         if (picnum==8) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/8);}"); }
                         if (picnum==12) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/12);}"); }
                         if (picnum==16) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/16);}"); }
                         if (picnum==20) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/20);}"); }
                         if (picnum==24) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/24);}"); }
                         if (picnum==28) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/28);}"); }
                         if (picnum==32) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/32);}"); }
                         if (picnum==36) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/36);}"); }
                         if (picnum==40) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/40);}"); }
                         if (picnum==44) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/44);}"); }
                         if (picnum==48) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/48);}"); }



                    }

                     else if (count%4==1) {

                     if (picnum==1) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/1);}"); }
                     if (picnum==5) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/5);}"); }
                     if (picnum==9) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/9);}"); }
                     if (picnum==13) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/13);}"); }
                     if (picnum==17) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/17);}"); }
                     if (picnum==21) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/21);}"); }
                     if (picnum==25) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/25);}"); }
                     if (picnum==29) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/29);}"); }
                     if (picnum==33) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/33);}"); }
                     if (picnum==37) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/37);}"); }
                     if (picnum==41) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/41);}"); }
                     if (picnum==45) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/45);}"); }
                     if (picnum==49) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle2.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/49);}"); }
                     }

                     else if (count%4==2) {

                         if (picnum==2) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/2);}"); }
                         if (picnum==6) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/6);}"); }
                         if (picnum==10) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/10);}"); }
                         if (picnum==14) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/14);}"); }
                         if (picnum==18) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/18);}"); }
                         if (picnum==22) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/22);}"); }
                         if (picnum==26) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/26);}"); }
                         if (picnum==30) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/30);}"); }
                         if (picnum==34) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/34);}"); }
                         if (picnum==38) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/38);}"); }
                         if (picnum==42) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/42);}"); }
                         if (picnum==46) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle3.svg); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/46);}"); }

                   }

                    else if (count%4==3) {

                         if (picnum==3) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/3);}"); }
                         if (picnum==7) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/7);}"); }
                         if (picnum==11) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/11);}"); }
                         if (picnum==15) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/15);}"); }
                         if (picnum==19) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/19);}"); }
                         if (picnum==23) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/23);}"); }
                         if (picnum==27) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/27);}"); }
                         if (picnum==31) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/31);}"); }
                         if (picnum==35) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/35);}"); }
                         if (picnum==39) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/39);}"); }
                         if (picnum==43) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/43);}"); }
                         if (picnum==47) { button[i][j]->setStyleSheet("QToolButton {border-image: url(/Users/Lizzie/LIZARDLEAP/puzzle4.png); } QToolButton:hover { border-image: url(/Users/Lizzie/LIZARDLEAP/Einstein/47);}"); }


                   }



                     button[i][j]->resize(40,40);
                     button[i][j]->move(40*j, 40*i);
                     button[i][j]->show();
                     controlsLayout->addWidget(button[i][j], i, j);
                     count++;
                     picnum++;
                 }

             }

         }

//widget to stop time
         QPushButton* end = new QPushButton("READY TO GUESS!");
         end->setStyleSheet("background-color: yellow");





//possible guesses
         QMessageBox* guess = new QMessageBox;
         guess->setText("<center><b><font size = 16>The Hidden Image Is ...</font></b></center>");
         QPushButton* einstein = guess->addButton(tr("Albert Einstein"), QMessageBox::ActionRole);
         QPushButton* newton = guess->addButton(tr("Isaac Newton"), QMessageBox::ActionRole);
         QPushButton* hawking = guess->addButton(tr("Stephen Hawking"), QMessageBox::ActionRole);
         QPushButton* nye= guess->addButton(tr("Bill Nye"), QMessageBox::ActionRole);
         QPushButton* euler = guess->addButton(tr("Leonhard Euler"), QMessageBox::ActionRole);
         QPushButton* sagan = guess->addButton(tr("Carl Sagan"), QMessageBox::ActionRole);

//winner QMessageBox
         QMessageBox* win = new QMessageBox;
         win->setStyleSheet("QMessageBox { border-image: url(/Users/Lizzie/LIZARDLEAP/smile.jpg) }");
         win->setText("<center><font color=blue><font size=50> YOU WIN!</font></font></center>");
         win->setInformativeText("<br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><br><center><font size = 30><font color=black>Would you like to <br><u><font color=white><b>sci-enter</b></font></u><br> another game?</font></font></center>");
         QPushButton* quitwin = win->addButton(tr("Quit"), QMessageBox::ActionRole);
         QPushButton* restartwin = win->addButton(tr("Start A New Game!"), QMessageBox::ActionRole);

//loser QMessageBox

         QMessageBox* lose = new QMessageBox;
         lose->setText("<center><b><font size = 16> Sorry! That answer is <u>incorrect</u>.");
         lose->setInformativeText("<center><b><font size = 16>Would you like to try again?</font></b></center>");
         QPushButton* retry = lose->addButton(tr("Retry this Level"), QMessageBox::ActionRole);
         QPushButton* quit = lose->addButton(tr("Quit"), QMessageBox::ActionRole);
         QPushButton* restart = lose->addButton(tr("Start A New Game!"), QMessageBox::ActionRole);

//messagebox answer connections
QObject::connect(end, SIGNAL(clicked()), guess, SLOT(exec()));
QObject::connect(einstein, SIGNAL(clicked()), win, SLOT(exec()));
QObject::connect(newton, SIGNAL(clicked()), lose, SLOT(exec()));
QObject::connect(hawking, SIGNAL(clicked()), lose, SLOT(exec()));
QObject::connect(nye, SIGNAL(clicked()), lose, SLOT(exec()));
QObject::connect(euler, SIGNAL(clicked()), lose, SLOT(exec()));
QObject::connect(sagan, SIGNAL(clicked()), lose, SLOT(exec()));

QObject::connect(quit , SIGNAL(clicked()), qApp, SLOT(quit()));
QObject::connect(quitwin , SIGNAL(clicked()), qApp, SLOT(quit()));
QObject::connect(retry, SIGNAL(clicked()), this, SLOT(start()));
QObject::connect(restart, SIGNAL(clicked()), this, SLOT(retry()));
QObject::connect(restartwin, SIGNAL(clicked()), this, SLOT(retry()));




//create the full layout of the gameboard
QVBoxLayout* vert = new QVBoxLayout;
vert->insertLayout(1,top);
vert->insertLayout(2,controlsLayout);
vert->insertWidget(3,end);
this->setLayout(vert);


    }

    /**
     * @brief this function clears the game if the user wants to quit the game
     * @return none
     * @param none
     */
    void scientistgameboard::retry() {
        qApp->quit();
        QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
       }

    /**
 *@param none
 *  @brief scientist gameboard default destructor
 */
scientistgameboard::~scientistgameboard() {}

/**
 * @brief this function sets the main window for the scientist gameboard class
 * @return none
 * @param main window
 */
void scientistgameboard::setMainWindow(MainWindow* main_window) {

    mw = main_window; }

