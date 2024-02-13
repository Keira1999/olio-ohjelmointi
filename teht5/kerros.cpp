#include "kerros.h"
#include <iostream>
using namespace std;

kerros::kerros()
{

    cout << "kerros luotu"<<endl;
    as1 = new asunto;
    as2 = new asunto;
    as3 = new asunto;
    as4 = new asunto;
}


void kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4 kpl katutason asuntoja "<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double kerros::laskeKulutus(double hinta)
{
    double tulo = as1->laskeKulutus(hinta) +as2->laskeKulutus(hinta)+as3->laskeKulutus(hinta)+as4->laskeKulutus(hinta);
    //cout<<"kerrosten kulutus, kun "<<hinta<<" hinta =  "<<tulo<<endl;
    return tulo;
}

kerros::~kerros()
{
    cout<<"kerros tuhottu"<<endl;
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}
