#include "RightLeg.h"

RightLeg::RightLeg()
{
    //ctor
}

RightLeg::~RightLeg()
{
    //dtor
}

int RightLeg::getSpeed()
{
    return RightLeg::speed;
}

void RightLeg::setSpeed(int spd)
{
    Part::speed=spd;
}

std::string RightLeg::getDescription()
{
    return "Humanoid Right Leg";
}
