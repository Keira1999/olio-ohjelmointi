#ifndef CFHEF_H
#define CFHEF_H
#include <iostream>
using namespace std;

class Chef
{
public:
    Chef(string);
    ~Chef();
    void makeSalad();
    void makeSoup();
    void makePasta();

protected:
    string name;
};

#endif // CFHEF_H
