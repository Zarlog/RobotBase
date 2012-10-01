#ifndef LEFTARM_H
#define LEFTARM_H

#include <Part.h>


class LeftArm : public Part
{
    public:
        LeftArm();
        virtual ~LeftArm();
        int getStrength();
        void setStrength(int str);
        std::string getDescription();
    protected:
    private:
};

#endif // LEFTARM_H
