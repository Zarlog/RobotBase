#ifndef ABDOMEN_H
#define ABDOMEN_H

#include <Part.h>


class Abdomen : public Part
{
    public:
        Abdomen();
        virtual ~Abdomen();
        //override the Part getInventoryCapacity because it will throw a exception
        int getInventoryCapacity();
        //define the setInventoryCapacity to set the correct capacity
        void setInventoryCapacity(int cap);
        virtual std::string getDescription();
    protected:
    private:
};

#endif // ABDOMEN_H
