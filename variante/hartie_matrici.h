#ifndef HARTIE_MATRICI_H_INCLUDED
#define HARTIE_MATRICI_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


///1.1
/*
Varianta 2 · II.4 — Ultima cifră a sumei elementelor pozitive de pe o linie
În secvența de program alăturată, variabila a memorează o matrice cu n linii și n coloane (numerotate
de la 0 la n-1 ) cu elemente numere întregi, iar toate celelalte variabile sunt întregi. Știind că n este un
număr natural par, nenul, scrieți instrucțiunile care pot înlocui punctele de suspensie din secvența de
program alăturată astfel încât, în urma executării acesteia, să se afișeze ultima cifră a sumei elementelor
pozitive de pe linia k (0≤ k < n ) a matricei a .
s = 0;
for(j = 0; j < n/2; j++)
{
.............
}
cout<<s;

*/

void v039_II4(){

    int a[4][4]={
    {1,2,3,4},
    {5,-3,7,2},
    {4,6,-2,1},
    {8,1,3,5}
    };
    int n=4;
    int s = 0;
    int i=1;
    for(int j = 0; j < n/2; j++){
      if(a[i][j]>0){
        s+=a[i][j];
      }
    }


   cout<<s;
}











#endif
