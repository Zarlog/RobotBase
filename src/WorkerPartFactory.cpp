#include "WorkerPartFactory.h"

WorkerPartFactory::WorkerPartFactory()
{
    //ctor
}

WorkerPartFactory::~WorkerPartFactory()
{
    //dtor
}

std::unique_ptr<Head> WorkerPartFactory::createHead()
{
    std::unique_ptr<Head> h (new Head());
    h->setHP(DEFAULT_HP);
    h->setInitiative(DEFAULT_INITIVE);
    return std::move(h);
}

std::unique_ptr<Torso> WorkerPartFactory::createTorso()
{
    std::unique_ptr<Torso> t (new Torso());
    t->setHP(DEFAULT_HP);
    t->setInventoryCapacity(DEFAULT_INVENTORY_CAPACITY);
    return t;
}

std::unique_ptr<RightArm> WorkerPartFactory::createRightArm()
{
    std::unique_ptr<RightArm> ra (new RightArm());
    ra->setHP(DEFAULT_HP);
    ra->setStrength(DEFAULT_STRENGTH);
    return ra;
}

std::unique_ptr<RightLeg> WorkerPartFactory::createRightLeg()
{
    std::unique_ptr<RightLeg> rl (new RightLeg());
    rl->setHP(DEFAULT_HP);
    rl->setSpeed(DEFAULT_SPEED);
    return rl;
}

std::unique_ptr<LeftArm> WorkerPartFactory::createLeftArm()
{
    std::unique_ptr<LeftArm> la (new LeftArm());
    la->setHP(DEFAULT_HP);
    la->setStrength(DEFAULT_STRENGTH);
    return la;
}

std::unique_ptr<LeftLeg> WorkerPartFactory::createLeftLeg()
{
    std::unique_ptr<LeftLeg> ll (new LeftLeg());
    ll->setHP(DEFAULT_HP);
    ll->setSpeed(DEFAULT_SPEED);
    return ll;
}

