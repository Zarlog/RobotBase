#ifndef WORKERROBOTFACTORY_H
#define WORKERROBOTFACTORY_H

#include <RobotPartFactoryInterface.h>
#include <RobotFactoryInterface.h>
#include <WorkerRobot.h>


class WorkerRobotFactory : public RobotFactoryInterface
{
    public:
        WorkerRobotFactory();
        virtual ~WorkerRobotFactory();

        /*RobotFactoryInterface functions*/
        virtual WorkerRobot* manufacture(RobotPartFactoryInterface* factory);

    protected:
    private:
};

#endif // WORKERROBOTFACTORY_H
