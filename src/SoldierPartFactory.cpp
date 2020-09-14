#include "SoldierPartFactory.h"
#include <memory>

SoldierPartFactory::SoldierPartFactory()
{
    //ctor
}

SoldierPartFactory::~SoldierPartFactory()
{
    //dtor
}

std::unique_ptr<Head> SoldierPartFactory::createHead()
{
    std::unique_ptr<Head> h (new Head());
    h->setHP(SDEFAULT_HP);
    h->setInitiative(SDEFAULT_INITIVE);
    return h;
}

std::unique_ptr<Torso> SoldierPartFactory::createTorso()
{
    std::unique_ptr<Torso> t (new Torso());
    t->setHP(SDEFAULT_HP);
    t->setInventoryCapacity(SDEFAULT_INVENTORY_CAPACITY);
    return t;
}

std::unique_ptr<RightArm> SoldierPartFactory::createRightArm()
{
    std::unique_ptr<RightArm> ra (new RightArm());
    ra->setHP(SDEFAULT_HP);
    ra->setStrength(SDEFAULT_STRENGTH);
    return ra;
}

std::unique_ptr<RightLeg> SoldierPartFactory::createRightLeg()
{
    std::unique_ptr<RightLeg> rl (new RightLeg());
    rl->setHP(SDEFAULT_HP);
    rl->setSpeed(SDEFAULT_SPEED);
    return rl;
}

std::unique_ptr<LeftArm> SoldierPartFactory::createLeftArm()
{
    std::unique_ptr<LeftArm> la (new LeftArm());
    la->setHP(SDEFAULT_HP);
    la->setStrength(SDEFAULT_STRENGTH);
    return la;
}

std::unique_ptr<LeftLeg> SoldierPartFactory::createLeftLeg()
{
    std::unique_ptr<LeftLeg> ll (new LeftLeg());
    ll->setHP(SDEFAULT_HP);
    ll->setSpeed(SDEFAULT_SPEED);
    return ll;
}

