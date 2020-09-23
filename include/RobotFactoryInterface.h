#ifndef ROBOTFACTORYINTERFACE_H
#define ROBOTFACTORYINTERFACE_H

#include <RobotFactoryInterface.h>
#include <RobotPartFactoryInterface.h>
#include <Robot.h>

class RobotFactoryInterface
{
    public:
        RobotFactoryInterface();
        virtual ~RobotFactoryInterface();
        virtual Robot* manufacture(RobotPartFactoryInterface* factory) = 0;
        //virtual void qualityAssurance();
    protected:
    private:
};

#endif // ROBOTFACTORYINTERFACE_H
