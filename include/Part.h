#ifndef PART_H
#define PART_H

#include <string>

class Part
{
    public:
        /* CONSTRUCTORS */
        Part();
        virtual ~Part();

        /* METHODS*/
        /*GETTERS*/
        virtual int getSN();
        virtual int getHP();
        virtual int getStrength();
        virtual int getInventoryCapacity();
        virtual int getSpeed();
        virtual int getInitiative();
        virtual std::string getDescription() = 0;

        /*SETTERS*/
        virtual void setSN(int SN);
        virtual void setHP(int HitPoints);
        virtual void setStrength(int str);
        virtual void setInventoryCapacity(int cap);
        virtual void setSpeed(int spd);
        virtual void setInitiative(int initiative);
    protected:
        std::string description;
        int serialNumber;
        int HP;
        int strength;
        int inventoryCapacity;
        int speed;
        int initiative;
    private:

};

#endif // PART_H
