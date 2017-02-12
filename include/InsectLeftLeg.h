#ifndef INSECTLEFTLEG_H
#define INSECTLEFTLEG_H

#include <LeftLeg.h>


class InsectLeftLeg : public LeftLeg
{
    public:
        InsectLeftLeg();
        virtual ~InsectLeftLeg();
        std::string getDescription();
    protected:
    private:
};

#endif // INSECTLEFTLEG_H
