#include "katutaso.h"
#include <iostream>
using namespace std;

katutaso::katutaso()
{

    cout<< "katutaso luotu"<<endl;
    as1 = new asunto;
    as2 = new asunto;
}


void katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja "<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja "<<endl;
    this->kerros::maaritaAsunnot();
}

double katutaso::laskeKulutus(double hinta)
{
    double kulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta)+this->kerros::laskeKulutus(1);
    cout<<"Katutason ja perityn kerroksen kulutus kun hinta = "<<hinta<<" on "<<kulutus<<endl;
    return kulutus;
}
katutaso::~katutaso()
{
    cout<<"katutaso tuhottu"<<endl;
    delete as1;
    delete as2;
}

