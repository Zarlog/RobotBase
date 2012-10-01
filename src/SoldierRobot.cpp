#include <SoldierRobot.h>
#include <iostream>

Head *humSldrHead;
Torso *humSldrTorso;
RightArm *humSldrRightArm;
LeftArm *humSldrLeftArm;
RightLeg *humSldrRightLeg;
LeftLeg *humSldrLeftLeg;

SoldierRobot::SoldierRobot()
{

}

SoldierRobot::~SoldierRobot()
{
    //dtor
}

Head* SoldierRobot::getHead()
{
    return humSldrHead;
}

Torso* SoldierRobot::getTorso()
{
    return humSldrTorso;
}

RightArm* SoldierRobot::getRightArm()
{
    return humSldrRightArm;
}

RightLeg* SoldierRobot::getRightLeg()
{
    return humSldrRightLeg;
}

LeftArm* SoldierRobot::getLeftArm()
{
    return humSldrLeftArm;
}

LeftLeg* SoldierRobot::getLeftLeg()
{
    return humSldrLeftLeg;
}

void SoldierRobot::setHead(Head *head)
{
    humSldrHead=head;
}

void SoldierRobot::setTorso(Torso *torso)
{
    humSldrTorso=torso;
}

void SoldierRobot::setLeftArm(LeftArm *leftArm)
{
    humSldrLeftArm=leftArm;
}

void SoldierRobot::setLeftLeg(LeftLeg *leftLeg)
{
    humSldrLeftLeg=leftLeg;
}

void SoldierRobot::setRightArm(RightArm *rightArm)
{
    humSldrRightArm=rightArm;
}

void SoldierRobot::setRightLeg(RightLeg *rightLeg)
{
    humSldrRightLeg=rightLeg;
}

int SoldierRobot::totalUpHP()
{
    int total = humSldrHead->getHP() +
           humSldrTorso->getHP() +
           humSldrRightArm->getHP() +
           humSldrLeftArm->getHP() +
           humSldrLeftLeg->getHP() +
           humSldrRightLeg->getHP();
    return total;
}

void SoldierRobot::printRobotAttributes()
{
    printf("Head Attributes\n");
    printf("-----------------\n");
    printf("Initiative: %10i\n", humSldrHead->getInitiative());
    printf("Head HP: %13i\n\n", humSldrHead->getHP());

    printf("Torso Attributes\n");
    printf("------------------\n");
    printf("Inventory Capacity: %1i\n", humSldrTorso->getInventoryCapacity());
    printf("Torso HP: %12i\n\n", humSldrTorso->getHP());

    printf("RightArm Attributes\n");
    printf("-------------------\n");
    printf("Strength: %12i\n",humSldrRightArm->getStrength());
    printf("RightArm HP: %9i\n\n", humSldrRightArm->getHP());

    printf("LeftArm Attributes\n");
    printf("-------------------\n");
    printf("Strength: %12i\n",humSldrLeftArm->getStrength());
    printf("LeftArm HP: %10i\n\n", humSldrLeftArm->getHP());

    printf("RightLeg Attributes\n");
    printf("-------------------\n");
    printf("Speed: %15i\n",humSldrRightLeg->getSpeed());
    printf("RightLeg HP: %9i\n\n", humSldrRightLeg->getHP());

    printf("LeftLeg Attributes\n");
    printf("-------------------\n");
    printf("Speed: %15i\n",humSldrLeftLeg->getSpeed());
    printf("LeftLeg HP: %10i\n\n", humSldrLeftLeg->getHP());

    printf("Total HP: %i\n\n",SoldierRobot::getTotalHP());
}

int SoldierRobot::getTotalHP()
{
    return SoldierRobot::totalUpHP();
}
