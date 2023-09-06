#include "MyController.hpp"


MyController::MyController(MyMainWindow *main): mainWindow(main), 
    inputLineColor(new MyColorInput), inputCatterColor(new MyColorInput),
    inputCatLineColor(new MyColorInput), inputFoneColor(new MyColorInput), 
    image(new MyImage), table(new MyTableModel())
{
    curAlg = new MyAlgorithmShortedEdges();
    setConnections();
    setLabel();
    //mainWindow->setTable(table);
}

MyController::~MyController()
{
    delete inputCatterColor;
    delete inputCatLineColor;
    delete inputLineColor;
    delete inputFoneColor;
    delete mainWindow;
}
/*
void MyController::startAddShape()
{
    int start, end;
    start = clock();
    for (int i = 0; i < 1; i++)
    {
        drawShapes();
    }
    end = clock();
    QLabel *allTime = mainWindow->getTimeLabel();
    allTime->setText(QString(QString::number(end-start)+" микросек"));
    image->setChanged(true);
}*/
/*
void MyController::endAddShape()
{
    if (!Catter)
    {
        MyException().makeException("Введите область\n");
        return;
    }
    image->setChanged(false);
    image->updateDisplay();
}*/
void MyController::clearCanvas()
{
    image->clean();
    delete Catter;
    Catter = nullptr;
    table->clean();
    delete linePoint;
    delete shapePoint;
    shapePoint = nullptr;
    linePoint = nullptr;
    isCatter = true;
}

void MyController::setLabel()
{
    mainWindow->setPicture(image->getDisplay());
}

void MyController::setConnections()
{
    connect(mainWindow->lineColorButton(), SIGNAL(clicked()),this, SLOT(getLineColor()));
    connect(mainWindow->catLineColorButton(), SIGNAL(clicked()),this, SLOT(getCatLineColor()));
    connect(mainWindow->catterColorButton(), SIGNAL(clicked()),this, SLOT(getCatterColor()));
    connect(mainWindow->foneColorButton(), SIGNAL(clicked()),this, SLOT(getFoneColor()));
    inputFoneColor->addObject(mainWindow->foneColorButton());
    inputCatLineColor->addObject(mainWindow->catLineColorButton());
    inputCatterColor->addObject(mainWindow->catterColorButton());
    inputLineColor->addObject(mainWindow->lineColorButton());

    inputFoneColor->addObject(image);
    inputLineColor->addObject(image);
    inputCatterColor->addObject(image);
    inputCatLineColor->addObject(image);
    inputFoneColor->setFone(true);
    inputCatterColor->setCatter(true);
    inputCatLineColor->setCatLine(true);
    inputLineColor->setLine(true);

    inputFoneColor->setNewColor(Qt::white);
    inputCatterColor->setNewColor(Qt::black);
    inputCatLineColor->setNewColor(Qt::darkRed);
    inputLineColor->setNewColor(Qt::darkGreen);

    //connect(mainWindow->getEndAddShapeButton(), SIGNAL(clicked()), this, SLOT(endAddShape()));
    connect(mainWindow->getClearCanvasButton(), SIGNAL(clicked()), this, SLOT(clearCanvas()));
    //connect(mainWindow->getDrawButton(), SIGNAL(clicked()), this, SLOT(drawShapes()));


    connect(image->getDisplay(), SIGNAL(mouseAddPointEvent(MyPoint)), this, SLOT(addLine(MyPoint)));

}

void MyController::getFoneColor()
{
    inputFoneColor->getNewColor();
}

void MyController::getLineColor()
{
    inputLineColor->getNewColor();
}
void MyController::getCatLineColor()
{
    inputCatLineColor->getNewColor();
}
void MyController::getCatterColor()
{
    inputCatterColor->getNewColor();
}

void MyController::addShapePoint(MyPoint event)
{
    if (shapePoint)
    {
        Catter = new MyShape();
        MyPoint newPoint = MyPoint(event.getX(), shapePoint->getY());
        Catter->addPoint(*shapePoint);
        image->setRect(*shapePoint, event);
//        image->setLine(newPoint, *shapePoint);
//        image->setLine(newPoint, event);
        Catter->addPoint(newPoint);
        Catter->addPoint(event);
        newPoint = MyPoint(shapePoint->getX(), event.getY());
//        image->setLine(newPoint, *shapePoint);
//        image->setLine(newPoint, event);
        Catter->addPoint(newPoint);
        isCatter = false;
    }
    else 
    {
        shapePoint = new MyPoint();
        *shapePoint = event;
    }
}

void MyController::addLinePoint(MyPoint event)
{
    if (linePoint)
    {
        MyPoint newpoint = event;
        if (QGuiApplication::keyboardModifiers().testFlag(Qt::ShiftModifier))
        {
            if (fabs((linePoint->getY() - newpoint.getY())) > fabs((linePoint->getX() - newpoint.getX())))
            {
                newpoint.setX(linePoint->getX());
            }
            else
            {
                newpoint.setY(linePoint->getY());
            }
        }
    
        //image->setLine(*linePoint, event);
        curAlg->draw(image, *Catter, MyLine(*linePoint, newpoint));
        Lines.append(MyLine(*linePoint, newpoint));
        delete linePoint;
        linePoint = nullptr;
    }
    else
    {
        linePoint = new MyPoint();
        *linePoint = event;
    }
}
void MyController::addLine(MyPoint event)
{
    if (isCatter)
    {
        addShapePoint(event);
    }
    else if (!isCatter)
    {
        addLinePoint(event);
    }
    image->updateDisplay();
}

