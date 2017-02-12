#ifndef WORKERROBOT_H
#define WORKERROBOT_H

#include <Robot.h>
#include <Head.h>
#include <LeftArm.h>
#include <LeftLeg.h>
#include <Part.h>
#include <RightArm.h>
#include <RightLeg.h>
#include <Torso.h>
#include <memory>

class WorkerRobot : public Robot
{
    public:
        WorkerRobot();
        virtual ~WorkerRobot();
        int getTotalHP();
        virtual void printRobotAttributes();

        std::unique_ptr<Head> getHead();
        Torso* getTorso();
        LeftArm* getLeftArm();
        LeftLeg* getLeftLeg();
        RightArm* getRightArm();
        RightLeg* getRightLeg();

        void setHead(std::unique_ptr<Head> head);
        void setTorso(Torso *torso);
        void setLeftArm(LeftArm *leftArm);
        void setLeftLeg(LeftLeg *leftLeg);
        void setRightArm(RightArm *rightArm);
        void setRightLeg(RightLeg *rightLeg);
    protected:
    private:
        int totalUpHP();
};

#endif // HUMANOIDROBOT_H
