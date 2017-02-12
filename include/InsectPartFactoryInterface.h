#ifndef INSECTPARTFACTORYINTERFACE_H
#define INSECTPARTFACTORYINTERFACE_H

#include <Part.h>
#include <InsectHead.h>
#include <Thorax.h>
#include <Abdomen.h>
#include <InsectLeftLeg.h>
#include <InsectRightLeg.h>
#include <vector>

class InsectPartFactoryInterface
{
    public:
        InsectPartFactoryInterface();
        virtual ~InsectPartFactoryInterface();
        virtual InsectHead* createInsectHead() = 0;
        virtual Thorax* createInsectThorax() = 0;
        virtual Abdomen* createInsectAbdomen() = 0;
        virtual std::vector<InsectRightLeg> createInsectRightLegs() = 0;
        virtual std::vector<InsectLeftLeg> createInsectLeftLegs() = 0;
    protected:
    private:
};

#endif // INSECTPARTFACTORYINTERFACE_H
