#ifndef SOLDIERPARTFACTORY_H
#define SOLDIERPARTFACTORY_H
#define SDEFAULT_HP 100
#define SDEFAULT_SPEED 10
#define SDEFAULT_STRENGTH 20
#define SDEFAULT_INITIVE 100
#define SDEFAULT_INVENTORY_CAPACITY 50

#include <RobotPartFactoryInterface.h>
#include <Part.h>
#include <Head.h>
#include <LeftArm.h>
#include <LeftLeg.h>
#include <RightArm.h>
#include <RightLeg.h>
#include <Torso.h>


class SoldierPartFactory : public RobotPartFactoryInterface
{
    public:
        SoldierPartFactory();
        virtual ~SoldierPartFactory();

        virtual std::unique_ptr<Head> createHead();
        virtual std::unique_ptr<Torso> createTorso();
        virtual std::unique_ptr<RightArm> createRightArm();
        virtual RightLeg* createRightLeg();
        virtual LeftArm* createLeftArm();
        virtual LeftLeg* createLeftLeg();
    protected:
    private:
};

#endif // SoldierPARTFACTORY_H
