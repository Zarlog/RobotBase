#include "Head.h"

Head::Head()
{
    //ctor
}

Head::~Head()
{
    //dtor
}

int Head::getInitiative()
{
    return Head::initiative;
}

void Head::setInitiative(int initiative)
{
    Part::initiative=initiative;
}

std::string Head::getDescription()
{
    return "Humanoid Head";
}
