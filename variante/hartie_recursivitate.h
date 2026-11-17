#ifndef HARTIE_RECURSIVITATE_H_INCLUDED
#define HARTIE_RECURSIVITATE_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

///1.1
/*
Varianta 1 · III.2 — Ce afișează f(121,1)
Pentru definiția de mai jos a subprogramului f , ce se afișează ca urmare a apelului f(121,1); ?
*/
void f(long n, int i)
{
    if(n!=0)
     if(n%3>0)
     {
       cout<<i;
       f(n/3,i+1);
     }
}
/*
f(121,1)   n   i   n%3>0                f(n/3,i+1)
f(121,1)  121  1     da       cout<<1    f(40,2);
f(40,2)   40   2     da       cout<<2    f(13,3);
f(13,3)   13   3     da       cout<<3    f(4,4);
f(4,4)    4    4     da       cout<<4    f(1,5);
f(1,5)    1    5     da       cout<<5    f(0,6);
f(0,6)    0    6   ------------------------------

raspuns 12345
*/

void v001_III2(){
    f(121,1);
}









#endif
