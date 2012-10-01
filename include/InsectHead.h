#ifndef INSECTHEAD_H
#define INSECTHEAD_H

#include <Head.h>


class InsectHead : public Head
{
    public:
        InsectHead();
        virtual ~InsectHead();
        //override the description to return Insect Head
        std::string getDescription();
        //This should already be defined by the head class
        //void setInitiative(int initiative);
    protected:
    private:
};

#endif // INSECTHEAD_H
