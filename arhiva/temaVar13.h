#ifndef TEMAVAR13_H_INCLUDED
#define TEMAVAR13_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


/*
1. Care dintre expresiile C/C++ de mai jos este echivalentă cu
expresia alăturată? (4p.)
!((a<5)&&(b>7))
a. (a>=5)&&(b<=7) b. !(a<5) || !(b>7)
c. !(a<5) && !(b>7) d. !(a>=5) && !(b<=7)

b. !(a<5) || !(b>7)


2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu x%y restul împărţirii numărului natural x la
numărul natural nenul y şi cu [z] partea întreagă a
numărului real z.
a) Scrieţi numărul ce se va afişa dacă pentru a se
citeşte valoarea 404, iar pentru b se citeşte valoarea
413. (6p.)

 kÅ0
┌pentru iÅa,b execută
│ nÅi; cÅ0
│ ┌cât timp n>0 execută
│ │ ┌dacă n%2=1 atunci
│ │ │ cÅc+1
│ │ └■
│ │ nÅ[n/10]
│ └■
│ ┌dacă c>0 atunci
│ │ kÅk+1
│ └■
└■
scrie k

Avem:
a=404
b=413

Algoritmul verifică numerele de la 404 până la 413 și numără câte au cel puțin o cifră impară.

404 > are 1 cifră impară > k=1
405 > are 5 > k=2
406 > are 1 > k=3
407 > are 7 > k=4
408 > are 1 > k=5
409 > are 9 > k=6
410 > are 1 > k=7
411 > are 1 > k=8
412 > are 1 > k=9
413 > are 1 sau 3 > k=10


4. Scrieţi ce se afişează pe
ecran în urma executării
secvenţei de program
alăturate, în care variabila s
memorează un şir de cel mult
12 caractere, iar variabila i
este de tip întreg. (6p.)
char s[13]="abcdefghoid";
i=0;
cout<<strlen(s);
while (i<strlen(s))
 if (strchr("aeiou",s[i])!=NULL)
 strcpy(s+i,s+i+1);
 else i++;
cout<<" "<<s;


se parcurge sirul s si daca gaseste o consoana o elimina sirul ramane bcdfghd




5.
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, ale cărei
elemente primesc valori după cum urmează:
- elementele aflate pe diagonala secundară sunt toate nule;
- elementele de pe coloana i (1≤i≤n), aflate deasupra diagonalei secundare, au valoarea
egală cu i;
- elementele de pe linia n-i+1 (1≤i≤n), aflate sub diagonala secundară, au valoarea egală
cu i.
Programul afişează pe ecran matricea construită, câte o linie a matricei pe
câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un
spaţiu.
Exemplu: pentru n=4 se va afişa matricea alăturată. (10p.)
1 2 3 0
1 2 0 3
1 0 2 2
0 1 1 1


*/
void construire5Var13(int a[25][25], int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j==n+1)
            {
                a[i][j]=0;
            }
            else
            {
                if(i+j<n+1)
                {
                    a[i][j]=j;
                }
                else
                {
                    a[i][j]=n-i+1;
                }
            }
        }
    }
}

void afisare5Var13(int a[25][25], int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solutie5Var13(){
    int n,a[25][25];

    cin>>n;

    construire5Var13(a,n);
    afisare5Var13(a,n);
}

/*
1. Fie subprogramul fct definit alăturat, parţial. Iniţial, variabile întregi
a, b şi c au valorile a=8, b=31 şi c=9, iar după apelul fct(a,b,c),
valorile celor trei variabile sunt a=9, b=31 şi c=39. Care poate fi
antetul subprogramului fct? (4p.)
void fct(....)
{ x=x+1;
 y=y-1;
 z=x+y;
}
void fct(int &x,int y,int &z)

a. void fct(int &x,int &y,int &z) b. void fct(int x,int &y,int &z)
c. void fct(int x,int y,int z) d. void fct(int &x,int y,int &z)
*/




#endif // TEMAVAR13_H_INCLUDED
