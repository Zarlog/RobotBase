#include <SoldierRobotFactory.h>
#include <SoldierRobot.h>

SoldierRobot *sldrRobot;

SoldierRobotFactory::SoldierRobotFactory()
{
    //ctor
}

SoldierRobotFactory::~SoldierRobotFactory()
{
    //dtor
}

Robot* SoldierRobotFactory::manufacture(RobotPartFactoryInterface* factory)
{
    SoldierRobot *sldrRobot = new SoldierRobot();
    std::unique_ptr<Head> myHead = factory->createHead();
    std::unique_ptr<Torso> myTorso = factory->createTorso();
    std::unique_ptr<RightArm> myRArm = factory->createRightArm();
    std::unique_ptr<LeftArm> myLArm = factory->createLeftArm();
    std::unique_ptr<RightLeg> myRLeg = factory->createRightLeg();
    std::unique_ptr<LeftLeg> myLLeg = factory->createLeftLeg();

    sldrRobot->setHead(std::move(myHead));
    sldrRobot->setTorso(std::move(myTorso));
    sldrRobot->setRightArm(std::move(myRArm));
    sldrRobot->setLeftArm(std::move(myLArm));
    sldrRobot->setRightLeg(std::move(myRLeg));
    sldrRobot->setLeftLeg(std::move(myLLeg));
    return sldrRobot;
}
