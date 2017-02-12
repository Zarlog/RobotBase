#ifndef ROBOT_H
#define ROBOT_H

#include <stdio.h>
class Robot
{
    public:
        Robot();
        virtual ~Robot();
        virtual int getTotalHP() = 0;
        virtual void printRobotAttributes() = 0;
    protected:
    private:
};

#endif // ROBOT_H
