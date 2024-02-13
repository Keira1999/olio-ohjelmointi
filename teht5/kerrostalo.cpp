#include "kerrostalo.h"
#include <iostream>
using namespace std;

kerrostalo::kerrostalo()
{
    cout<<"kerrostalo luotu"<<endl;
    cout<< "Maaritellaan koko kerrostalon asunnot"<<endl;
    eka = new katutaso;
    toka = new kerros;
    kolmas = new kerros;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double kerrostalo::laskeKulutus(double hinta)
{
    double tulo = eka->laskeKulutus(hinta) +toka->laskeKulutus(hinta)+kolmas->laskeKulutus(hinta);
    //cout<<"kerrosten kulutus, kun "<<hinta<<" hinta =  "<<tulo<<endl;
    return tulo;
}

kerrostalo::~kerrostalo()
{
    cout<<"kerrostalo tuhottu"<<endl;
    delete eka;
    delete toka;
    delete kolmas;
}

