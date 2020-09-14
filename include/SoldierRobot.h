#ifndef SOLDIERROBOT_H
#define SOLDIERROBOT_H

#include <Robot.h>
#include <Head.h>
#include <LeftArm.h>
#include <LeftLeg.h>
#include <Part.h>
#include <RightArm.h>
#include <RightLeg.h>
#include <Torso.h>
#include <memory>

class SoldierRobot : public Robot
{
    public:
        SoldierRobot();
        virtual ~SoldierRobot();
        int getTotalHP();
        virtual void printRobotAttributes();

        std::unique_ptr<Head> getHead();
        std::unique_ptr<Torso> getTorso();
        LeftArm* getLeftArm();
        LeftLeg* getLeftLeg();
        RightArm* getRightArm();
        RightLeg* getRightLeg();

        void setHead(std::unique_ptr<Head> head);
        void setTorso(std::unique_ptr<Torso> torso);
        void setLeftArm(LeftArm *leftArm);
        void setLeftLeg(LeftLeg *leftLeg);
        void setRightArm(RightArm *rightArm);
        void setRightLeg(RightLeg *rightLeg);
    protected:
    private:
        int totalUpHP();
};

#endif // HUMANOIDROBOT_H
