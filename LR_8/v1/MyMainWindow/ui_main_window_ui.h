/********************************************************************************
** Form generated from reading UI file 'PaintInterfaceexJfGD.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef PAINTINTERFACEEXJFGD_H
#define PAINTINTERFACEEXJFGD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QHBoxLayout *CatterColorLayout;
    QLabel *label;
    QHBoxLayout *LineColorButton;
    QLabel *label_4;
    QHBoxLayout *CatLineColorButton;
    QLabel *label_5;
    QPushButton *endAddShape;
    QPushButton *clearCanvas;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *canvasPlace;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        CatterColorLayout = new QHBoxLayout();
        CatterColorLayout->setObjectName(QString::fromUtf8("CatterColorLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        CatterColorLayout->addWidget(label);


        verticalLayout->addLayout(CatterColorLayout);

        LineColorButton = new QHBoxLayout();
        LineColorButton->setObjectName(QString::fromUtf8("LineColorButton"));
        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        LineColorButton->addWidget(label_4);


        verticalLayout->addLayout(LineColorButton);

        CatLineColorButton = new QHBoxLayout();
        CatLineColorButton->setObjectName(QString::fromUtf8("CatLineColorButton"));
        label_5 = new QLabel(verticalLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        CatLineColorButton->addWidget(label_5);


        verticalLayout->addLayout(CatLineColorButton);

        endAddShape = new QPushButton(verticalLayoutWidget);
        endAddShape->setObjectName(QString::fromUtf8("endAddShape"));

        verticalLayout->addWidget(endAddShape);

        clearCanvas = new QPushButton(verticalLayoutWidget);
        clearCanvas->setObjectName(QString::fromUtf8("clearCanvas"));

        verticalLayout->addWidget(clearCanvas);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter->addWidget(verticalLayoutWidget);
        verticalLayoutWidget_2 = new QWidget(splitter);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        canvasPlace = new QVBoxLayout(verticalLayoutWidget_2);
        canvasPlace->setObjectName(QString::fromUtf8("canvasPlace"));
        canvasPlace->setContentsMargins(0, 0, 0, 0);
        splitter->addWidget(verticalLayoutWidget_2);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\220\320\273\320\263\320\276\321\200\320\270\321\202\320\274 \320\232\320\270\321\200\321\203\321\201\320\260 \342\200\224 \320\221\320\265\320\272\320\260", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\321\202\321\201\320\265\320\272\320\260\321\202\320\265\320\273\321\217:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\273\320\270\320\275\320\270\320\270:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\246\320\262\320\265\321\202 \320\276\321\202\321\201\320\265\321\207\320\265\320\275\320\275\320\276\320\271 \320\276\320\261\320\273\320\260\321\201\321\202\320\270:", nullptr));
        endAddShape->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\274\320\272\320\275\321\203\321\202\321\214 \320\276\321\202\321\201\320\265\320\272\320\260\321\202\320\265\320\273\321\214", nullptr));
        clearCanvas->setText(QApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // PAINTINTERFACEEXJFGD_H