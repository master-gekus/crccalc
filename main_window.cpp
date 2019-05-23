#include "main_window.h"
#include "ui_main_window.h"

MainWindow::MainWindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  setWindowFlag(Qt::WindowContextHelpButtonHint, false);
}

MainWindow::~MainWindow()
{
  delete ui;
}
