#ifndef RIGHTARM_H
#define RIGHTARM_H

#include <Part.h>

class RightArm : public Part
{
    public:
        RightArm();
        virtual ~RightArm();
        int getStrength();
        std::string getDescription();
        void setStrength(int str);
    protected:
    private:
};

#endif // RIGHTARM_H
