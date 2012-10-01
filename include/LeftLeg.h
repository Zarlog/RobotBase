#ifndef LEFTLEG_H
#define LEFTLEG_H

#include <Part.h>


class LeftLeg : public Part
{
    public:
        LeftLeg();
        virtual ~LeftLeg();
        int getSpeed();
        void setSpeed(int spd);
        std::string getDescription();
    protected:
    private:
};

#endif // LEFTLEG_H
