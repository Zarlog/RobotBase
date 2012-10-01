#ifndef HEAD_H
#define HEAD_H

#include <Part.h>


class Head : public Part
{
    public:
        Head();
        virtual ~Head();
        int getInitiative();
        void setInitiative(int initiative);
        std::string getDescription();
    protected:

    private:
};

#endif // HEAD_H
