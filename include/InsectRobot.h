#ifndef INSECTROBOT_H
#define INSECTROBOT_H

#include <Robot.h>
#include <Abdomen.h>
#include <InsectHead.h>
#include <Thorax.h>
#include <InsectLeftLeg.h>
#include <InsectRightLeg.h>
#include <vector>

using namespace std;

class InsectRobot : public Robot
{
    public:
        InsectRobot();
        virtual ~InsectRobot();
        virtual void printRobotAttributes();
        virtual int getTotalHP();

        InsectHead* getHead();
        Thorax* getThorax();
        Abdomen* getAbdomen();
        InsectLeftLeg* getLeftLegs();
        InsectRightLeg* getRightLegs();

        void setHead(InsectHead *insectHead);
        void setThorax(Thorax *thorax);
        void setAbdomen(Abdomen *abdomen);
        //add insect right and left legs
        void setLeftLegs(std::vector<InsectLeftLeg> leftLeg);
        void setRightLegs(std::vector<InsectRightLeg> rightLeg);
    protected:

    private:
        vector<InsectLeftLeg> leftLegs;
        vector<InsectRightLeg> rightLegs;
        void printLegAttributes();
        int addUpLegHP();
};

#endif // INSECTROBOT_H
