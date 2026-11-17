#ifndef HARTIE_VECTORI_H_INCLUDED
#define HARTIE_VECTORI_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


///1.1
/*
În secvența alăturată variabilele i , j și aux sunt întregi, iar v memorează un tablou unidimensional
ale cărui elemente au următoarele valori: v[1] =2, v[2] =13, v[3] =1, v[4] =5, v[5] =-4. Care este
numărul de interschimbări care se efectuează în urma executării secvenței alăturate? Dați un exemplu de
alte 5 valori pentru elementele tabloului astfel încât, în urma executării secvenței alăturate, să nu se
efectueze nicio interschimbare.
  for(i=1;i<5;i++)
   for(j=5;j>i;j--)
     if(v[i]<v[j]){
       aux=v[i];
       v[i]=v[j];
       v[j]=aux;
     }
v[1] =2, v[2] =13, v[3] =1, v[4] =5, v[5] =-4

///parcurgere

i  i<5  j   j>i   v[i]<v[j]   vectorul        j--  i++
1   da  5    da    2<-4 F    2 13 1 5 -4       4
1   da  4    da    2<5 A     5 13 1 2 -4       3
1   da  3    da    5<1 F     5 13 1 2 -4       2
1   da  2    da    5<13 A    13 5 1 2 -4       1
1   da  1    nu  ----------------------------       2
2   da  5    da    5<-4 F    13 5 1 2 -4       4
2   da  4    da    5<2 F     13 5 1 2 -4       3
2   da  3    da    5<1 F     13 5 1 2 -4       2
2   da  2    nu -------------------------------     3
3   da  5    da    1<-4 F    13 5 1 2 -4       4
3   da  4    da    1<2  A    13 5 2 1 -4       3
3   da  3    nuy -----------------------------      4
4   da  5    da    1<-4 F    13 5 2 1 -4       4
4   da   4   nu ---------------------------------------

raspuns 13 5 2 1 4

numar dfe intershimbari 3

exemplu de 5 valori cu 0 interschimbari este 10 9 8 7 6

*/

void v40_2(int v[10],int n){
   for(int i=1;i<5;i++)
    for(int j=5;j>i;j--)
      if(v[i]<v[j]){
        int aux=v[i];
        v[i]=v[j];
        v[j]=aux;
      }

   for(int i=1;i<=n;i++){
     cout<<v[i]<<" ";
   }
}


///1.2
/*
Varianta 41 · III.1 — Cea mai mare valoare strict negativă
Cea mai mare dintre valorile strict negative memorate într-un tablou unidimensional NU există dacă:
a. în tablou sunt memorate numai valori strict negative
b. în tablou există cel puțin o valoare negativă
c. în tablou sunt memorate valori nenule pozitive și negative
d. în tablou sunt memorate numai valori strict pozitive

///raspuns d)

*/


///1.3

/*
Varianta 75 · III.2 — Secvență cu interschimbări
Variabilele i , j și aux sunt de tip întreg, iar elementele tabloului unidimensional x sunt următoarele:
x0 =10, x1 =5, x2 =-6, x3 =7, x4 =0, x5 =-2.
Ce valori se vor afișa în urma executării secvenței de program alăturate?
  for(i = 0; i < 4; i++)
    for(j = i + 1; j < 6; j++)
       if(x[i] > x[j]){
         aux = x[i];
         x[i] = x[j];
         x[j] = aux;
       }
  for(i = 0; i < 6; i++)
    cout<<x[i]<<" ";


x0 =10, x1 =5, x2 =-6, x3 =7, x4 =0, x5 =-2.

10 5 -6 7 0 -2



*/




















#endif
