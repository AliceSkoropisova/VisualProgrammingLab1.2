#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>                        //заголовочный файл с описанием стандартных виджетов и средств работы с ними

class MainWindow : public QWidget        //Так как создаётся простое однооконное приложение, лучше изменить тип родительского класса
{
   Q_OBJECT
   QLabel *helloLb;                     //виджет типа label, который будет использован для вывода текста
   QPushButton *exitBtn;                //виджет типа Push Buton, который будет использован как кнопка выхода из программы
public:
   MainWindow(QWidget *parent = 0);
   ~MainWindow();
};

#endif // MAINWINDOW_H
