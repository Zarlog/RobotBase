#include "WorkerRobot.h"
#include <iostream>

std::unique_ptr<Head> humHead;
std::unique_ptr<Torso> humTorso;
std::unique_ptr<RightArm> humRightArm;
std::unique_ptr<LeftArm> humLeftArm;
std::unique_ptr<RightLeg> humRightLeg;
std::unique_ptr<LeftLeg> humLeftLeg;

WorkerRobot::WorkerRobot()
{

}

WorkerRobot::~WorkerRobot()
{
    //dtor
}

std::unique_ptr<Head> WorkerRobot::getHead()
{
    return std::move(humHead);
}

std::unique_ptr<Torso> WorkerRobot::getTorso()
{
    return std::move(humTorso);
}

std::unique_ptr<RightArm> WorkerRobot::getRightArm()
{
    return std::move(humRightArm);
}

std::unique_ptr<RightLeg> WorkerRobot::getRightLeg()
{
    return std::move(humRightLeg);
}

std::unique_ptr<LeftArm> WorkerRobot::getLeftArm()
{
    return std::move(humLeftArm);
}

std::unique_ptr<LeftLeg> WorkerRobot::getLeftLeg()
{
    return std::move(humLeftLeg);
}

void WorkerRobot::setHead(std::unique_ptr<Head> head)
{
    humHead=std::move(head);
}

void WorkerRobot::setTorso(std::unique_ptr<Torso> torso)
{
    humTorso=std::move(torso);
}

void WorkerRobot::setLeftArm(std::unique_ptr<LeftArm> leftArm)
{
    humLeftArm=std::move(leftArm);
}

void WorkerRobot::setLeftLeg(std::unique_ptr<LeftLeg> leftLeg)
{
    humLeftLeg=std::move(leftLeg);
}

void WorkerRobot::setRightArm(std::unique_ptr<RightArm> rightArm)
{
    humRightArm=std::move(rightArm);
}

void WorkerRobot::setRightLeg(std::unique_ptr<RightLeg> rightLeg)
{
    humRightLeg=std::move(rightLeg);
}

int WorkerRobot::totalUpHP()
{
    int total = humHead->getHP() +
           humTorso->getHP() +
           humRightArm->getHP() +
           humLeftArm->getHP() +
           humLeftLeg->getHP() +
           humRightLeg->getHP();
    return total;
}

void WorkerRobot::printRobotAttributes()
{
    printf("Head Attributes\n");
    printf("-----------------\n");
    printf("Initiative: %10i\n", humHead->getInitiative());
    printf("Head HP: %13i\n\n", humHead->getHP());

    printf("Torso Attributes\n");
    printf("------------------\n");
    printf("Inventory Capacity: %1i\n", humTorso->getInventoryCapacity());
    printf("Torso HP: %12i\n\n", humTorso->getHP());

    printf("RightArm Attributes\n");
    printf("-------------------\n");
    printf("Strength: %12i\n",humRightArm->getStrength());
    printf("RightArm HP: %9i\n\n", humRightArm->getHP());

    printf("LeftArm Attributes\n");
    printf("-------------------\n");
    printf("Strength: %12i\n",humLeftArm->getStrength());
    printf("LeftArm HP: %10i\n\n", humLeftArm->getHP());

    printf("RightLeg Attributes\n");
    printf("-------------------\n");
    printf("Speed: %15i\n",humRightLeg->getSpeed());
    printf("RightLeg HP: %9i\n\n", humRightLeg->getHP());

    printf("LeftLeg Attributes\n");
    printf("-------------------\n");
    printf("Speed: %15i\n",humLeftLeg->getSpeed());
    printf("LeftLeg HP: %10i\n\n", humLeftLeg->getHP());

    printf("Total HP: %i\n\n",WorkerRobot::getTotalHP());

}

int WorkerRobot::getTotalHP()
{
    return WorkerRobot::totalUpHP();
}
