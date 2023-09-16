#include "mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
   : QWidget (parent)
{
   setWindowTitle("Привет мир");                                   //заголовок окна
   helloLb=new QLabel("Привет Мир!",this);                         //текст надписи
   exitBtn=new QPushButton("Выход",this);                          //текст на кнопке
   QHBoxLayout *layout = new QHBoxLayout(this);                    // создание горизонтального компоновщика
   layout->addWidget(helloLb);                                     // добавление надписи к компоновщику
   layout->addWidget(exitBtn);                                     // добавление кнопки к компоновщику
   connect(exitBtn,SIGNAL(clicked(bool)),this,SLOT(close()));      // связь сигнала нажатия кнопки и слота закрытия окна
}

MainWindow::~MainWindow()                                           //Так как ничего специального делать не надо, можно оставить пустым
{
}

