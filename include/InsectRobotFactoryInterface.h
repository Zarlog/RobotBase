#ifndef INSECTROBOTFACTORYINTERFACE_H
#define INSECTROBOTFACTORYINTERFACE_H

#include <InsectRobot.h>
#include <InsectPartFactoryInterface.h>

class InsectRobotFactoryInterface
{
    public:
        InsectRobotFactoryInterface();

        virtual ~InsectRobotFactoryInterface();

        virtual InsectRobot* manufacture(InsectPartFactoryInterface* insectPartFactory) = 0;
    protected:
    private:
};

#endif // INSECTROBOTFACTORYINTERFACE_H
