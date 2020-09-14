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
    LeftArm *myLArm = factory->createLeftArm();
    RightLeg *myRLeg = factory->createRightLeg();
    LeftLeg *myLLeg = factory->createLeftLeg();

    sldrRobot->setHead(std::move(myHead));
    sldrRobot->setTorso(std::move(myTorso));
    sldrRobot->setRightArm(std::move(myRArm));
    sldrRobot->setLeftArm(myLArm);
    sldrRobot->setRightLeg(myRLeg);
    sldrRobot->setLeftLeg(myLLeg);
    return sldrRobot;
}
