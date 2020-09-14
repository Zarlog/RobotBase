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

Robot* WorkerRobotFactory::manufacture(RobotPartFactoryInterface* factory)
{
    WorkerRobot *wrkrRobot = new WorkerRobot();
    std::unique_ptr<Head> myHead = factory->createHead();
    std::unique_ptr<Torso> myTorso = factory->createTorso();
    RightArm *myRArm = factory->createRightArm();
    LeftArm *myLArm = factory->createLeftArm();
    RightLeg *myRLeg = factory->createRightLeg();
    LeftLeg *myLLeg = factory->createLeftLeg();

    wrkrRobot->setHead(std::move(myHead));
    wrkrRobot->setTorso(std::move(myTorso));
    wrkrRobot->setRightArm(myRArm);
    wrkrRobot->setLeftArm(myLArm);
    wrkrRobot->setRightLeg(myRLeg);
    wrkrRobot->setLeftLeg(myLLeg);
    return wrkrRobot;
}
