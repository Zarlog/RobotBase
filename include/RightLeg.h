#ifndef RIGHTLEG_H
#define RIGHTLEG_H

#include <Part.h>


class RightLeg : public Part
{
    public:
        RightLeg();
        virtual ~RightLeg();
        int getSpeed();
        void setSpeed(int spd);
        std::string getDescription();
    protected:
    private:
};

#endif // RIGHTLEG_H
