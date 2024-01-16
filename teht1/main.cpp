#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int arvaukset;
int luku;
int suurin = 40;

int peli(int max){
    int arvaus = 0;
    luku = rand() %max;
    cout <<luku<< endl;

    while (arvaus != luku){
        cout << "arvaa numero" << endl;
        cin>>arvaus;

        if(arvaus == luku){
            cout <<"oikein"<< endl;
            arvaukset++;
        }
        else if(arvaus >= luku){
            cout <<"Luku on pienempi"<< endl;
            arvaukset ++;
        }
        else if(arvaus <= luku){
            cout <<"Luku on suurempi"<< endl;
            arvaukset ++;
        }
    }
    return arvaukset;
}

int main()
{
    srand(time(NULL));
    peli(suurin);
    cout <<"Arvauksia: "<<arvaukset<< endl;
    return 0;
}
