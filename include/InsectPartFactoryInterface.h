#ifndef INSECTPARTFACTORYINTERFACE_H
#define INSECTPARTFACTORYINTERFACE_H

#include <Part.h>
#include <InsectHead.h>
#include <Thorax.h>
#include <Abdomen.h>
#include <InsectLeftLeg.h>
#include <InsectRightLeg.h>
#include <vector>
#include <memory>

class InsectPartFactoryInterface
{
    public:
        InsectPartFactoryInterface();
        virtual ~InsectPartFactoryInterface();
        virtual std::unique_ptr<InsectHead> createInsectHead() = 0;
        virtual std::unique_ptr<Thorax> createInsectThorax() = 0;
        virtual std::unique_ptr<Abdomen> createInsectAbdomen() = 0;
        virtual std::vector<std::unique_ptr<InsectRightLeg> > createInsectRightLegs() = 0;
        virtual std::vector<std::unique_ptr<InsectLeftLeg> > createInsectLeftLegs() = 0;
    protected:
    private:
};

#endif // INSECTPARTFACTORYINTERFACE_H
