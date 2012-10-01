#include "LeftArm.h"

LeftArm::LeftArm()
{

}

LeftArm::~LeftArm()
{
    //dtor
}

int LeftArm::getStrength()
{
    return LeftArm::strength;
}

void LeftArm::setStrength(int str)
{
    Part::strength=str;
}

std::string LeftArm::getDescription()
{
    return "Humanoid Left Arm";
}
