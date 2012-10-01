#ifndef THORAX_H
#define THORAX_H

#include <Part.h>

//Not sure that to do with Thorax. Could be there to add HP or possibley add
//more inventory capacity. Currently it will just add HP, to add inventory
//must implement the get and set inventory capacity methods.
class Thorax : public Part
{
    public:
        Thorax();
        virtual ~Thorax();
        virtual std::string getDescription();
    protected:
    private:
};

#endif // THORAX_H
