#include "InsectRobotFactory.h"

InsectRobotFactory::InsectRobotFactory()
{
    //ctor
}

InsectRobotFactory::~InsectRobotFactory()
{
    //dtor
}

InsectRobot* InsectRobotFactory::manufacture(InsectPartFactoryInterface* insectPartFactory)
{
    InsectRobot* iRobot = new InsectRobot();
    std::unique_ptr<InsectHead> iHead = insectPartFactory->createInsectHead();
    std::unique_ptr<Abdomen> iAbdomen = insectPartFactory->createInsectAbdomen();
    std::unique_ptr<Thorax> iThorax = insectPartFactory->createInsectThorax();

    iRobot->setHead(iHead);
    iRobot->setAbdomen(iAbdomen);
    iRobot->setThorax(iThorax);
    iRobot->setLeftLegs(insectPartFactory->createInsectLeftLegs());
    iRobot->setRightLegs(insectPartFactory->createInsectRightLegs());

    return iRobot;
}
