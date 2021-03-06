#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QGridLayout>
#include <QFormLayout>
#include <QSpinBox>
#include <QPushButton>
#include <QLabel>
#include <QProgressBar>
#include <QIcon>
#include <QFile>
#include <QByteArray>
#include <QFileDialog>
#include <QDateTime>
#include "cmath"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void launchCalculating();
    void calculate();
    void stop();
    void downloadFile();

private:
    Ui::MainWindow *ui;
    QSpinBox *minSpin;
    QSpinBox *maxSpin;
    QPushButton *buttonCalculate;
    QProgressBar *progressBar;
    QLabel *resultsExaminated;
    QLabel *resultsFound;
    QLabel *resultsPercentage;
    QPushButton *buttonDownloadFile;
    QFile *file;
    bool table;
};
#endif // MAINWINDOW_H
