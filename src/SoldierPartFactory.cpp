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

Torso* SoldierPartFactory::createTorso()
{
    Torso *t = new Torso();
    t->setHP(SDEFAULT_HP);
    t->setInventoryCapacity(SDEFAULT_INVENTORY_CAPACITY);
    return t;
}

RightArm* SoldierPartFactory::createRightArm()
{
    RightArm *ra = new RightArm();
    ra->setHP(SDEFAULT_HP);
    ra->setStrength(SDEFAULT_STRENGTH);
    return ra;
}

RightLeg* SoldierPartFactory::createRightLeg()
{
    RightLeg *rl = new RightLeg();
    rl->setHP(SDEFAULT_HP);
    rl->setSpeed(SDEFAULT_SPEED);
    return rl;
}

LeftArm* SoldierPartFactory::createLeftArm()
{
    LeftArm *la = new LeftArm();
    la->setHP(SDEFAULT_HP);
    la->setStrength(SDEFAULT_STRENGTH);
    return la;
}

LeftLeg* SoldierPartFactory::createLeftLeg()
{
    LeftLeg *ll = new LeftLeg();
    ll->setHP(SDEFAULT_HP);
    ll->setSpeed(SDEFAULT_SPEED);
    return ll;
}

