#include "InsectRobotFactory.h"

InsectRobotFactory::InsectRobotFactory()
{
    //ctor
}

InsectRobotFactory::~InsectRobotFactory()
{
    //dtor
}

Robot* InsectRobotFactory::manufacture(InsectPartFactoryInterface* insectPartFactory)
{
    InsectRobot* iRobot = new InsectRobot();
    InsectHead* iHead = insectPartFactory->createInsectHead();
    Abdomen* iAbdomen = insectPartFactory->createInsectAbdomen();
    Thorax* iThorax = insectPartFactory->createInsectThorax();

    iRobot->setHead(iHead);
    iRobot->setAbdomen(iAbdomen);
    iRobot->setThorax(iThorax);
    iRobot->setLeftLegs(insectPartFactory->createInsectLeftLegs());
    iRobot->setRightLegs(insectPartFactory->createInsectRightLegs());

    return iRobot;
}
