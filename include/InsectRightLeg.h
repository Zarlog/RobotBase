#ifndef INSECTRIGHTLEG_H
#define INSECTRIGHTLEG_H

#include <RightLeg.h>


class InsectRightLeg : public RightLeg
{
    public:
        InsectRightLeg();
        virtual ~InsectRightLeg();
        std::string getDescription();
    protected:
    private:
};

#endif // INSECTRIGHTLEG_H
