#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef:public Chef
{
public:
    ItalianChef(string s);
    string getName();
    void makePasta();

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
