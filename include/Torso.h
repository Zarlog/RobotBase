#ifndef TORSO_H
#define TORSO_H

#include <Part.h>


class Torso : public Part
{
    public:
        Torso();
        virtual ~Torso();
        int getInventoryCapacity();
        void setInventoryCapacity(int cap);
        std::string getDescription();
    protected:
    private:
};

#endif // TORSO_H
