#include <InsectRobot.h>
#include <InsectHead.h>
#include <InsectLeftLeg.h>
#include <InsectRightLeg.h>
#include <Thorax.h>
#include <Abdomen.h>

// TODO: Should these be declaired here? or should they be in the .h file under private?
// What does it mean when they are declared in the cpp file and not the .h???
std::unique_ptr<InsectHead> insectHead;
std::unique_ptr<Thorax> insectThorax;
std::unique_ptr<Abdomen> insectAbdomen;

InsectRobot::InsectRobot()
{
    //ctor
}

InsectRobot::~InsectRobot()
{
    //dtor
}

void InsectRobot::setHead(std::unique_ptr<InsectHead>& head)
{
    insectHead = std::move(head);
}

void InsectRobot::setThorax(std::unique_ptr<Thorax>& thorax)
{
    insectThorax = std::move(thorax);
}

void InsectRobot::setAbdomen(std::unique_ptr<Abdomen>& abdn)
{
    insectAbdomen = std::move(abdn);
}

void InsectRobot::setLeftLegs(std::vector<std::unique_ptr<InsectLeftLeg> > leftInsectLegs)
{
    // TODO: Find out why this has to be a move. The vector is not unique but its elements are.
    // I may be returning a copy, is that appropriate?
    leftLegs = std::move(leftInsectLegs);
}

void InsectRobot::setRightLegs(std::vector<std::unique_ptr<InsectRightLeg> > rightInsectLegs)
{
    rightLegs = std::move(rightInsectLegs);
}

std::unique_ptr<InsectHead> InsectRobot::getHead()
{
    return std::move(insectHead);
}

std::unique_ptr<Thorax> InsectRobot::getThorax()
{
    return std::move(insectThorax);
}

std::unique_ptr<Abdomen> InsectRobot::getAbdomen()
{
    return std::move(insectAbdomen);
}

void InsectRobot::printRobotAttributes()
{
    printf("Head Attributes\n");
    printf("-----------------\n");
    printf("Initiative: %11i\n", insectHead->getInitiative());
    printf("Head HP: %13i\n\n", insectHead->getHP());

    printf("Thorax Attributes\n");
    printf("------------------\n");
    printf("Thorax HP: %11i\n\n", insectThorax->getHP());

    printf("Abdomen Attributes\n");
    printf("-------------------\n");
    printf("Inventory Capacity: %1i\n", insectAbdomen->getInventoryCapacity());
    printf("Abdomen HP: %10i\n\n", insectAbdomen->getHP());

    printf("Leg Attributes\n");
    printf("--------------\n");
    printLegAttributes();

    printf("Total HP: %i\n\n",InsectRobot::getTotalHP());
}

void InsectRobot::printLegAttributes()
{
    printf("Right Legs:\n");
    for(int i=0; i<3; i++)
    {
        printf("   HP: %i Speed: %i\n",rightLegs[i]->getHP(), rightLegs[i]->getSpeed());
    }

    printf("Left Legs:\n");
    for(int i=0; i<3; i++)
    {
        printf("   HP: %i Speed: %i\n",leftLegs[i]->getHP(), leftLegs[i]->getSpeed());
    }
}

int InsectRobot::addUpLegHP()
{
    int total = 0;
    for(int i=0; i<3; i++)
    {
        total = total + rightLegs[i]->getHP();
    }

    for(int i=0; i<3; i++)
    {
        total = total + leftLegs[i]->getHP();
    }

    return total;
}

int InsectRobot::getTotalHP()
{
    return insectHead->getHP() +
           insectAbdomen->getHP() +
           insectThorax->getHP()+
           addUpLegHP();
}
