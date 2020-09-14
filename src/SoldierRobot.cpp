#include <SoldierRobot.h>
#include <iostream>
#include <memory>

std::unique_ptr<Head> humSldrHead;
std::unique_ptr<Torso> humSldrTorso;
std::unique_ptr<RightArm> humSldrRightArm;
std::unique_ptr<LeftArm> humSldrLeftArm;
std::unique_ptr<RightLeg> humSldrRightLeg;
std::unique_ptr<LeftLeg> humSldrLeftLeg;

SoldierRobot::SoldierRobot()
{

}

SoldierRobot::~SoldierRobot()
{
    //dtor
}

std::unique_ptr<Head> SoldierRobot::getHead()
{
    return std::move(humSldrHead);
}

std::unique_ptr<Torso> SoldierRobot::getTorso()
{
    return std::move(humSldrTorso);
}

std::unique_ptr<RightArm> SoldierRobot::getRightArm()
{
    return std::move(humSldrRightArm);
}

std::unique_ptr<RightLeg> SoldierRobot::getRightLeg()
{
    return std::move(humSldrRightLeg);
}

std::unique_ptr<LeftArm> SoldierRobot::getLeftArm()
{
    return std::move(humSldrLeftArm);
}

std::unique_ptr<LeftLeg> SoldierRobot::getLeftLeg()
{
    return std::move(humSldrLeftLeg);
}

void SoldierRobot::setHead(std::unique_ptr<Head> head)
{
    humSldrHead=std::move(head);
}

void SoldierRobot::setTorso(std::unique_ptr<Torso> torso)
{
    humSldrTorso=std::move(torso);
}

void SoldierRobot::setLeftArm(std::unique_ptr<LeftArm> leftArm)
{
    humSldrLeftArm=std::move(leftArm);
}

void SoldierRobot::setLeftLeg(std::unique_ptr<LeftLeg> leftLeg)
{
    humSldrLeftLeg=std::move(leftLeg);
}

void SoldierRobot::setRightArm(std::unique_ptr<RightArm> rightArm)
{
    humSldrRightArm=std::move(rightArm);
}

void SoldierRobot::setRightLeg(std::unique_ptr<RightLeg> rightLeg)
{
    humSldrRightLeg=std::move(rightLeg);
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
