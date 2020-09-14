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
        std::unique_ptr<Torso> getTorso();
        std::unique_ptr<LeftArm> getLeftArm();
        std::unique_ptr<LeftLeg> getLeftLeg();
        std::unique_ptr<RightArm> getRightArm();
        std::unique_ptr<RightLeg> getRightLeg();

        void setHead(std::unique_ptr<Head> head);
        void setTorso(std::unique_ptr<Torso> torso);
        void setLeftArm(std::unique_ptr<LeftArm> leftArm);
        void setLeftLeg(std::unique_ptr<LeftLeg> leftLeg);
        void setRightArm(std::unique_ptr<RightArm> rightArm);
        void setRightLeg(std::unique_ptr<RightLeg> rightLeg);
    protected:
    private:
        int totalUpHP();
};

#endif // HUMANOIDROBOT_H
