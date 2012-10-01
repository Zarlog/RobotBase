#ifndef INSECTROBOTFACTORY_H
#define INSECTROBOTFACTORY_H

#include <InsectRobotFactoryInterface.h>
#include <InsectRobot.h>
#include <Robot.h>


class InsectRobotFactory : public InsectRobotFactoryInterface
{
    public:
        InsectRobotFactory();
        virtual ~InsectRobotFactory();
        virtual Robot* manufacture(InsectPartFactoryInterface* insectPartFactory);
    protected:
    private:
};

#endif // INSECTROBOTFACTORY_H
