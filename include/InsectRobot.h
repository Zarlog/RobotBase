#ifndef INSECTROBOT_H
#define INSECTROBOT_H

#include <Robot.h>
#include <Abdomen.h>
#include <InsectHead.h>
#include <Thorax.h>
#include <InsectLeftLeg.h>
#include <InsectRightLeg.h>
#include <vector>
#include <memory>

using namespace std;

class InsectRobot : public Robot
{
    public:
        InsectRobot();
        virtual ~InsectRobot();
        virtual void printRobotAttributes();
        virtual int getTotalHP();

        std::unique_ptr<InsectHead> getHead();
        std::unique_ptr<Thorax> getThorax();
        std::unique_ptr<Abdomen> getAbdomen();

        //Why do the arguments below need to be References, when the soldier and worker robots do not need to be???????
        void setHead(std::unique_ptr<InsectHead>& insectHead);
        void setThorax(std::unique_ptr<Thorax>& thorax);
        void setAbdomen(std::unique_ptr<Abdomen>& abdomen);
        //add insect right and left legs
        void setLeftLegs(std::vector<std::unique_ptr<InsectLeftLeg> > leftInsectLegs);
        void setRightLegs(std::vector<std::unique_ptr<InsectRightLeg> > rightInsectLegs);
    protected:

    private:
        vector<std::unique_ptr<InsectLeftLeg> > leftLegs;
        vector<std::unique_ptr<InsectRightLeg> > rightLegs;
        void printLegAttributes();
        int addUpLegHP();
};

#endif // INSECTROBOT_H
