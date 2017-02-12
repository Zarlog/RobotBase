#ifndef WORKERROBOTFACTORY_H
#define WORKERROBOTFACTORY_H

#include <RobotFactoryInterface.h>


class WorkerRobotFactory : public RobotFactoryInterface
{
    public:
        WorkerRobotFactory();
        virtual ~WorkerRobotFactory();

        /*RobotFactoryInterface functions*/
        virtual Robot* manufacture(RobotPartFactoryInterface* factory);

    protected:
    private:
};

#endif // WORKERROBOTFACTORY_H
