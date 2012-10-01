#ifndef ROBOTPARTFACTORYINTERFACE_H
#define ROBOTPARTFACTORYINTERFACE_H

#include <Head.h>
#include <Torso.h>
#include <RightArm.h>
#include <LeftArm.h>
#include <RightLeg.h>
#include <LeftLeg.h>

class RobotPartFactoryInterface
{
    public:
        RobotPartFactoryInterface();
        virtual ~RobotPartFactoryInterface();
        virtual Head* createHead() = 0;
        virtual Torso* createTorso() = 0;
        virtual RightArm* createRightArm() = 0;
        virtual RightLeg* createRightLeg() = 0;
        virtual LeftArm* createLeftArm() = 0;
        virtual LeftLeg* createLeftLeg() = 0;
    protected:
    private:
};

#endif // ROBOTPARTFACTORYINTERFACE_H
