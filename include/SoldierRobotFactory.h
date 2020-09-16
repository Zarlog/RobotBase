#ifndef SOLDIERROBOTFACTORY_H
#define SOLDIERROBOTFACTORY_H

#include <RobotFactoryInterface.h>


class SoldierRobotFactory : public RobotFactoryInterface
{
    public:
        SoldierRobotFactory();
        virtual ~SoldierRobotFactory();

        /*RobotFactoryInterface functions*/
        virtual SoldierRobot* manufacture(RobotPartFactoryInterface* factory);

    protected:
    private:
};

#endif // SoldierROBOTFACTORY_H
