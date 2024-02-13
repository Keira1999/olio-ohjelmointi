#include<iostream>
#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"
using namespace std;

int main()
{
    kerrostalo* asukas4;

    asukas4 = new kerrostalo;

    asukas4->laskeKulutus(1);

    delete asukas4;

    return 0;
}
