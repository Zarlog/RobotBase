#include "LeftLeg.h"

LeftLeg::LeftLeg()
{
    //ctor
}

LeftLeg::~LeftLeg()
{
    //dtor
}

int LeftLeg::getSpeed()
{
    return LeftLeg::speed;
}

void LeftLeg::setSpeed(int spd)
{
    Part::speed=spd;
}

std::string LeftLeg::getDescription()
{
    return "Humanoid Left Leg";
}
