/**
Every part of a robot will extend this Part class. Every part will have a HP value
that will be used to determine the total HP of the robot. The Part HP can also
be used to determine the status of the individual part.

Different parts of the robot will have certain attributes such as strength, speed etc...
but some parts it does not make sense to have some of the attributes. Such as
it doesn't make sense that a head have a speed attribute. This is probably not a good
design, because all of the parts will have to implement the get and set interface for
every attribute. I have done this so that the client can call any method on a object
of type part. The downside to this is if the client calls a method on an object that
is not supported it will have to handle an exception. I could just implement the
part specific attributes in their respective classes and not provide the generic
interface but then the client will have to check object types and use casts before
invoking part specific attribute function calls.

The default behavior of the interface methods will be to throw a exception of type
char *. So the catch statements will need to catch char* and then print the character
array. I have purposly made this look like an Object printout of
UnsupportedOperationException because the proper way is to define a class called
UnsupportedOperationException and catch UnsupportedOperationException objects,
but I am not sure how to do that in C++ right now.
**/

#include "Part.h"

Part::Part()
{
    HP=0;
    serialNumber=0;
    strength=0;
    inventoryCapacity=0;
    speed=0;
    initiative=0;
}

Part::~Part()
{
    //dtor
}

int Part::getSN()
{
    return serialNumber;
}

int Part::getHP()
{
    return HP;
}

int Part::getStrength()
{
    throw "UnsupportedOperationException::getInventoryCapacity()";
}

int Part::getInventoryCapacity()
{
    throw "UnsupportedOperationException::getInventoryCapacity()";
}

int Part::getSpeed()
{
    throw "UnsupportedOperationException::getSpeed()";
}

int Part::getInitiative()
{
    throw "UnsupportedOperationException::getInitiative()";
}

void Part::setSN(int SN)
{
    serialNumber=SN;
}

void Part::setHP(int HitPoints)
{
    HP=HitPoints;
}

void Part::setStrength(int str)
{
    throw "UnsupportedOperationException::setStrength(int str)";
}

void Part::setInventoryCapacity(int cap)
{
    throw "UnsupportedOperationException::setInventoryCapacity(int cap)";
}

void Part::setSpeed(int spd)
{
    throw "UnsupportedOperationException::setSpeed(int spd)";
}

void Part::setInitiative(int initiative)
{
    throw "UnsupportedOperationException::setInitiative(int initiative)";
}
