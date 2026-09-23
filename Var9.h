#ifndef VAR9_H_INCLUDED
#define VAR9_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


///greaseala
/*
1. Variabila x este de tip real. Care dintre următoarele expresii C/C++ are valoarea 1 dacă şi
numai dacă numărul real memorat în variabila x aparţine intervalului (5,8]? (4p.)
a. (x<8) && (x>=5) b. (x<=8) || (x>5)
c. (x>8) || (x<=5) d. (x<=8) && (x>5)
5<x<=8
raspuns d. (x<=8) && (x>5)


2. Se consideră algoritmul alăturat, descris în pseudocod.
S-a notat cu x%y restul împărţirii numărului întreg x la numărul
întreg nenul y şi cu [a] partea întreagă a numărului real a.
a) Scrieţi valoarea care se va afişa dacă se citeşte
n=103456. (6p.)
citeşte n (număr natural)
z=0
p=1
┌cât timp n>0 execută
│ cÅn%10
│ nÅ[n/10]
│┌dacă c%3=0 atunci
││ zÅz+p*(9-c)
││ pÅp*10
│└■
└■
scrie z

n=103456

    n          c    if(c%3==0) z=z+p*(9-c)       p=p*10;
103456         6         da    z=0+1*3=3          p=1*10=10
10345          5         nu    ------
1034           4         nu   -------
103            3         da    z=3+10*6=63         p=10*10=100
10             0         da    z=63+100*9=963      p=100*10=1000
1              1         nu    ------------

raspuns 963
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


1. Care dintre expresiile C/C++ de mai jos este
echivalentă cu expresia alăturată? (4p.)
((a>3) && (a<15)) || (a!=b)
a. ((a>3) || (a<15)) && (a==b) b. !((a<=3) || (a>=15)) || (a!=b)
c. ((a>3) || (a<15)) && (a!=b) d. !(a<3 || a>15) && (a!=b)

d!(a<3 || a>15) && (a!=b)

2.2. Se consideră algoritmul alăturat, descris în pseudocod:
S-a notat cu [c] partea întreagă a numărului real c, iar cu
a%b restul împărţirii numărului întreg a la numărul întreg nenul
b.
a) Scrieţi valoarea care se afişează, în urma executării
algoritmului, dacă se citeşte pentru n valoarea 1239.

citeşte n (număr natural)
s=10
┌cât timp n>0 execută
│┌dacă n%10<s atunci
││ s=n%10
││altfel
││ s=-1
│└■
│ n=[n/10]
└■
 scrie s


 n=1239 n>0   n%10<s  s=n%10  else s=-1  n/=10
         da    9<10    s=9       ------    123
   123   da    3<9     s=3    ---------     12
   12    da    2<3     s=2    ---------      1
   1     da    1<2     s=1    ---------      0
   0     nu-----------

   1


1. Considerând declararea alăturată, care dintre următoarele secvenţe
realizează în mod corect citirea de la tastatură a valorilor celor două
câmpuri ale variabilei x? (4p.)
struct {
 int a;
 int b;} x;

a. cin>>x.a>>x.b;
b. cin>>a.x>>b.x;
c. cin>>x;
d. cin>>a->x>>b->x;



*/



































#endif // VAR9_H_INCLUDED
