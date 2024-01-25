#include "italianchef.h"

ItalianChef::ItalianChef(string s):Chef(s)
{
    cout<<"Chef "<<name<<" konstruktori"<<endl;
    jauhot=250;
    vesi=100;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta with special recept"<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
}
