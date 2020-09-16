#include <WorkerRobotFactory.h>
#include <WorkerRobot.h>

WorkerRobot *wkrRobot;

WorkerRobotFactory::WorkerRobotFactory()
{
    //ctor
}

WorkerRobotFactory::~WorkerRobotFactory()
{
    //dtor
}

WorkerRobot* WorkerRobotFactory::manufacture(RobotPartFactoryInterface* factory)
{
    WorkerRobot *wrkrRobot = new WorkerRobot();
    std::unique_ptr<Head> myHead = factory->createHead();
    std::unique_ptr<Torso> myTorso = factory->createTorso();
    std::unique_ptr<RightArm> myRArm = factory->createRightArm();
    std::unique_ptr<LeftArm> myLArm = factory->createLeftArm();
    std::unique_ptr<RightLeg> myRLeg = factory->createRightLeg();
    std::unique_ptr<LeftLeg> myLLeg = factory->createLeftLeg();

    wrkrRobot->setHead(std::move(myHead));
    wrkrRobot->setTorso(std::move(myTorso));
    wrkrRobot->setRightArm(std::move(myRArm));
    wrkrRobot->setLeftArm(std::move(myLArm));
    wrkrRobot->setRightLeg(std::move(myRLeg));
    wrkrRobot->setLeftLeg(std::move(myLLeg));
    return wrkrRobot;
}
