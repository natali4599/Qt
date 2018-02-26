#include <QApplication>
#include <QMenuBar>
#include <QMainWindow>
#include <QDesktopWidget>


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  QMainWindow w;
  QMenu *fileMenu = w.menuBar()->addMenu("&File");

  QDesktopWidget dw;
  int x=dw.width()*0.7;
  int y=dw.height()*0.7;
  w.setFixedSize(x,y);
  w.show();
  return a.exec();
}
