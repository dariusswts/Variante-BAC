#ifndef VAR12_H_INCLUDED
#define VAR12_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


//1. Care dintre următoarele expresii C/C++ are valoarea 1 dacă şi numai dacă variabilele x şi
//y memorează două numere naturale pare consecutive? (4p.)
//a. (x-y==2) && (y-x==2) b. (x==2) && (y==4)
//c. x-y==2 d. ((x-y==2) || (y-x==2)) && (x%2==0)

// rapsuns d. ((x-y==2) || (y-x==2)) && (x%2==0)

/*
2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu [c] partea întreagă a numărului real c.
a) Scrieţi valoarea care va fi afişată dacă se citesc, în
această ordine, numerele 12, 7, 354, 9, 630, 0.
 (6p.)
 citeşte x
 (număr natural)
y=0
┌cât timp x≠0 execută
│ ┌cât timp x>9 execută
│ │ x=[x/10]
│ └■
│ y=y*10+x
│ citeşte x
└■
scrie y

x      x!=0  x>9   x=x/10  y=y*10+x      cin x

12      da    da     1
1       da    nu     --    y=0*10+1=1     x=7
7       da    nu     --    y=1*10+7=17    x=354
354     da    da     35
35      da    da     3
3       da    nu     --    y=1






 */

#endif // VAR12_H_INCLUDED
