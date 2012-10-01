#include <InsectPartFactory.h>

InsectPartFactory::InsectPartFactory()
{

}

InsectPartFactory::~InsectPartFactory()
{
    //dtor
}

InsectHead* InsectPartFactory::createInsectHead()
{
    InsectHead* iHead = new InsectHead();
    iHead->setHP(DEFAULT_INSECT_HP);
    iHead->setInitiative(DEFAULT_INSECT_INITIVE);
    return iHead;
}

Abdomen* InsectPartFactory::createInsectAbdomen()
{
    Abdomen* iAbdomen = new Abdomen();
    iAbdomen->setHP(DEFAULT_INSECT_HP);
    iAbdomen->setInventoryCapacity(DEFAULT_INSECT_INVENTORY_CAPACITY);
    return iAbdomen;
}

Thorax* InsectPartFactory::createInsectThorax()
{
    Thorax* iThorax = new Thorax();
    iThorax->setHP(DEFAULT_INSECT_HP);
    return iThorax;
}

InsectLeftLeg& InsectPartFactory::createInsectLeftLeg()
{
    InsectLeftLeg* iLleg = new InsectLeftLeg();
    iLleg->setHP(DEFAULT_INSECT_HP);
    iLleg->setSpeed(DEFAULT_INSECT_LEGSPEED);
    return *iLleg;
}

InsectRightLeg& InsectPartFactory::createInsectRightLeg()
{
    InsectRightLeg* iRleg = new InsectRightLeg();
    iRleg->setHP(DEFAULT_INSECT_HP);
    iRleg->setSpeed(DEFAULT_INSECT_LEGSPEED);
    return *iRleg;
}

std::vector<InsectLeftLeg> InsectPartFactory::createInsectLeftLegs()
{
    for (int i=0; i<3; i++)
    {
        leftLegs.push_back(createInsectLeftLeg());
    }

    return leftLegs;
}

std::vector<InsectRightLeg> InsectPartFactory::createInsectRightLegs()
{
    for (int i=0; i<3; i++)
    {
        rightLegs.push_back(createInsectRightLeg());
    }

    return rightLegs;
}
