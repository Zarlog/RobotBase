#include "Torso.h"

Torso::Torso()
{
    //ctor
}

Torso::~Torso()
{
    //dtor
}

int Torso::getInventoryCapacity()
{
    //hmmm why did I do torso? Shouldn't this be Part::inventoryCapacity
    return Torso::inventoryCapacity;
}

void Torso::setInventoryCapacity(int cap)
{
    Part::inventoryCapacity=cap;
}

std::string Torso::getDescription()
{
    return "Humanoid Torso";
}
