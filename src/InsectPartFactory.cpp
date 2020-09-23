#include <InsectPartFactory.h>

InsectPartFactory::InsectPartFactory()
{

}

InsectPartFactory::~InsectPartFactory()
{
    //dtor
}

std::unique_ptr<InsectHead> InsectPartFactory::createInsectHead()
{
    std::unique_ptr<InsectHead> iHead (new InsectHead());
    iHead->setHP(DEFAULT_INSECT_HP);
    iHead->setInitiative(DEFAULT_INSECT_INITIVE);
    return iHead;
}

std::unique_ptr<Abdomen> InsectPartFactory::createInsectAbdomen()
{
    std::unique_ptr<Abdomen> iAbdomen (new Abdomen());
    iAbdomen->setHP(DEFAULT_INSECT_HP);
    iAbdomen->setInventoryCapacity(DEFAULT_INSECT_INVENTORY_CAPACITY);
    return iAbdomen;
}

std::unique_ptr<Thorax> InsectPartFactory::createInsectThorax()
{
    std::unique_ptr<Thorax> iThorax (new Thorax());
    iThorax->setHP(DEFAULT_INSECT_HP);
    return iThorax;
}

std::unique_ptr<InsectLeftLeg> InsectPartFactory::createInsectLeftLeg()
{
    std::unique_ptr<InsectLeftLeg> iLleg (new InsectLeftLeg());
    iLleg->setHP(DEFAULT_INSECT_HP);
    iLleg->setSpeed(DEFAULT_INSECT_LEGSPEED);
    return iLleg;
}

std::unique_ptr<InsectRightLeg> InsectPartFactory::createInsectRightLeg()
{
    std::unique_ptr<InsectRightLeg> iRleg (new InsectRightLeg());
    iRleg->setHP(DEFAULT_INSECT_HP);
    iRleg->setSpeed(DEFAULT_INSECT_LEGSPEED);
    return iRleg;
}

std::vector<std::unique_ptr<InsectLeftLeg> > InsectPartFactory::createInsectLeftLegs()
{
    std::vector<std::unique_ptr<InsectLeftLeg> > leftLegs;
    for (int i=0; i<3; i++)
    {
        std::unique_ptr<InsectLeftLeg> leg = createInsectLeftLeg();
        leftLegs.push_back(std::move(leg));
    }

    return leftLegs;
}

std::vector<std::unique_ptr<InsectRightLeg> > InsectPartFactory::createInsectRightLegs()
{
    //TODO: Since this is getting created here and new is not being used, will it get deleted when this function goes out of scope?
    std::vector<std::unique_ptr<InsectRightLeg> > rightLegs;
    for (int i=0; i<3; i++)
    {
        std::unique_ptr<InsectRightLeg> rleg = createInsectRightLeg();
        rightLegs.push_back(std::move(rleg));
    }

    return rightLegs;
}
