#include <InsectRobot.h>
#include <InsectHead.h>
#include <InsectLeftLeg.h>
#include <InsectRightLeg.h>
#include <Thorax.h>
#include <Abdomen.h>

InsectHead* insectHead;
Thorax* insectThorax;
Abdomen* insectAbdomen;
InsectLeftLeg leftLegs[3];
InsectRightLeg RightLeg[3];

InsectRobot::InsectRobot()
{
    //ctor
}

InsectRobot::~InsectRobot()
{
    //dtor
}

void InsectRobot::setHead(InsectHead *head)
{
    insectHead = head;
}

void InsectRobot::setThorax(Thorax* thorax)
{
    insectThorax = thorax;
}

void InsectRobot::setAbdomen(Abdomen* abdn)
{
    insectAbdomen = abdn;
}

void InsectRobot::setLeftLegs(std::vector<InsectLeftLeg> leftInsectLegs)
{
    leftLegs = leftInsectLegs;
}

void InsectRobot::setRightLegs(std::vector<InsectRightLeg> rightInsectLegs)
{
    rightLegs = rightInsectLegs;
}

InsectHead* InsectRobot::getHead()
{
    return insectHead;
}

Thorax* InsectRobot::getThorax()
{
    return insectThorax;
}

Abdomen* InsectRobot::getAbdomen()
{
    return insectAbdomen;
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
        printf("   HP: %i Speed: %i\n",rightLegs[i].getHP(), rightLegs[i].getSpeed());
    }

    printf("Left Legs:\n");
    for(int i=0; i<3; i++)
    {
        printf("   HP: %i Speed: %i\n",leftLegs[i].getHP(), leftLegs[i].getSpeed());
    }
}

int InsectRobot::addUpLegHP()
{
    int total = 0;
    for(int i=0; i<3; i++)
    {
        total = total + rightLegs[i].getHP();
    }

    for(int i=0; i<3; i++)
    {
        total = total + leftLegs[i].getHP();
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
