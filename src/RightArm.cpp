#include "RightArm.h"
#include <iostream>

RightArm::RightArm()
{
}

RightArm::~RightArm()
{
}

int RightArm::getStrength()
{
    return RightArm::strength;
}

void RightArm::setStrength(int str)
{
    Part::strength=str;
}

std::string RightArm::getDescription()
{
    return "Humanoid Right Arm";
}
