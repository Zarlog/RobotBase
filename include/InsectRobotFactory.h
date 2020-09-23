#ifndef INSECTROBOTFACTORY_H
#define INSECTROBOTFACTORY_H

#include <InsectRobotFactoryInterface.h>
#include <InsectRobot.h>

class InsectRobotFactory : public InsectRobotFactoryInterface
{
    public:
        InsectRobotFactory();
        virtual ~InsectRobotFactory();
        virtual InsectRobot* manufacture(InsectPartFactoryInterface* insectPartFactory);
    protected:
    private:
};

#endif // INSECTROBOTFACTORY_H
