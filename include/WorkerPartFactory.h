#ifndef WORKERPARTFACTORY_H
#define WORKERPARTFACTORY_H
#define DEFAULT_HP 50
#define DEFAULT_SPEED 5
#define DEFAULT_STRENGTH 10
#define DEFAULT_INITIVE 50
#define DEFAULT_INVENTORY_CAPACITY 100

#include <RobotPartFactoryInterface.h>
#include <Part.h>
#include <Head.h>
#include <LeftArm.h>
#include <LeftLeg.h>
#include <RightArm.h>
#include <RightLeg.h>
#include <Torso.h>


class WorkerPartFactory : public RobotPartFactoryInterface
{
    public:
        WorkerPartFactory();
        virtual ~WorkerPartFactory();

        virtual std::unique_ptr<Head> createHead();
        virtual std::unique_ptr<Torso> createTorso();
        virtual RightArm* createRightArm();
        virtual RightLeg* createRightLeg();
        virtual LeftArm* createLeftArm();
        virtual LeftLeg* createLeftLeg();
    protected:
    private:
};

#endif // WORKERPARTFACTORY_H
