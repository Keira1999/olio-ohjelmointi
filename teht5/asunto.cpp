#include "asunto.h"

asunto::asunto()
{
    cout << "asunto luotu"<<endl;
}

void asunto::maarita(int a, int n)
{
    asukasmaara = a;
    neliot = n;
    cout << "Asunto maaritetty asukkaita = "<<asukasmaara<<" nelioita = "<< neliot << endl;
}

double asunto::laskeKulutus(double h)
{
    double kulutus =  h*asukasmaara * neliot;
    //cout << "Asunnon kulutus, kun hinta = "<<h<<" on "<<kulutus<< endl;
    return kulutus;
}
