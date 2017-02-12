#include "Abdomen.h"

Abdomen::Abdomen()
{
    //ctor
}

Abdomen::~Abdomen()
{
    //dtor
}

std::string Abdomen::getDescription()
{
    return "Insect Abdomen";
}

void Abdomen::setInventoryCapacity(int cap)
{
    Part::inventoryCapacity=cap;
}

int Abdomen::getInventoryCapacity()
{
    return Part::inventoryCapacity;
}
