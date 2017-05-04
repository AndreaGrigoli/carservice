#ifndef BUILDER_H
#define BUILDER_H
#include "HorsePower.h"

class Builder
{
    public:
        virtual HorsePower* getHorsePower() = 0;


};

#endif // BUILDER_H
