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
    Head *myHead = factory->createHead();
    Torso *myTorso = factory->createTorso();
    RightArm *myRArm = factory->createRightArm();
    LeftArm *myLArm = factory->createLeftArm();
    RightLeg *myRLeg = factory->createRightLeg();
    LeftLeg *myLLeg = factory->createLeftLeg();

    wrkrRobot->setHead(myHead);
    wrkrRobot->setTorso(myTorso);
    wrkrRobot->setRightArm(myRArm);
    wrkrRobot->setLeftArm(myLArm);
    wrkrRobot->setRightLeg(myRLeg);
    wrkrRobot->setLeftLeg(myLLeg);
    return wrkrRobot;
}
