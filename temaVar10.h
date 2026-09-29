#ifndef TEMAVAR10_H_INCLUDED
#define TEMAVAR10_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;


/*
1. Care este valoarea expresiei C/C++ alăturate? (4p.) 9/2*2-5
a. 3 b. 4
c. -3 d. -3.75

raspuns 3

Scrieţi pe foaia de examen răspunsul pentru fiecare dintre cerinţele următoare.
2. Se consideră algoritmul alăturat, descris în
pseudocod
S-a notat cu [c] partea întreagă a numărului real c,
iar cu a%b restul împărţirii numărului întreg a la
numărul întreg nenul b.
a) Scrieţi valoarea care se afişează, în urma
executării algoritmului, dacă se citeşte pentru
n valoarea 23456 şi pentru k valoarea 3. (4p.)


n=23456 > cifra 6 este pară > k=2
n=2345  > cifra 5 este impară > nr=4
n=234   > cifra 4 este pară > k=1
n=23    > cifra 3 este impară > nr=2*10+2=42
n=2     > cifra 2 este pară > k=0

 (numere naturale nenule)
 nrÅ0
 pÅ1
┌cât timp n≠0 şi k≠0 execută
│┌dacă n%2≠0 atunci
││ nrÅnr + [n/10]%10*p
││ pÅp*10
││altfel
││ kÅk-1
│└■
│ nÅ[n/10]
└■
 scrie nr


1. Considerând declararea alăturată, care dintre următoarele secvenţe
de instrucţiuni afişează valorile memorate în cele două câmpuri ale
variabilei x, separate printr-un spaţiu? (4p.)
struct {
 int a, b;
}x;
a. cout<<x.a<<” ”<<x.b;
b. cout<<a.x<<” ”<<b.x;
c. cout<<x;
d. cout<<a->x<<” ”<<b->x;

raspuns a
a. cout<<x.a<<” ”<<x.b;



 4. Ce se va afişa în urma executării secvenţei de
instrucţiuni alăturate dacă variabila s memorează
şirul de caractere abbacdde, iar variabila i este de
tip întreg? (6p.)
i=0;
while (i<strlen(s)-1)
 if (s[i]==s[i+1])
 strcpy(s+i,s+i+1);
 else
 i=i+1;
cout<<s; | printf(”%s”,s);

i	s	         Verificare
0	abbacdde	a != b , i = 1
1	abbacdde	b = b , ștergere
1	abacdde	    b != a , i = 2
2	abacdde	    a != c , i = 3
3	abacdde	    c != d , i = 4
4	abacdde	    d = d , ștergere
4	abacde	    d != e , i = 5

Rezultat:
abacde


 5. Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale n şi p
(2≤n≤20, 1≤p≤20) şi construieşte în memorie un tablou bidimensional cu n linii şi p
coloane. Tabloul va fi construit astfel încât, parcurgând matricea linie cu linie de sus în jos şi
fiecare linie de la stânga la dreapta, să se obţină şirul primelor n*p pătrate perfecte pare,
ordonat strict crescător, ca în exemplu. Tabloul astfel construit va fi afişat pe ecran, fiecare
linie a tabloului pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii.
Exemplu: pentru n=2, p=3 programul va afişa tabloul alăturat:
(10p.)
 0 4 16
 36 64 100
 */

 void Var10ex5(int a[20][20], int n, int p)
{
    int x=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            a[i][j]=x*x;
            x=x+2;
        }
    }
}

void afisVar10(int a[20][20], int n, int p)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            cout<<a[i][j]<<" ";
        }

        cout<<endl;
    }
}
void rezVar10(){
    int n,p,a[20][20];

    cin>>n>>p;

    Var10ex5(a,n,p);
    afisVar10(a,n,p);
}





//1. Se consideră subprogramul cu definiţia
//alăturată. Ce valoare are f(3,1)?

int f(int n,int y)
{ if(n!=0)
 { y=y+1;
 return y+f(n-1,y);
 }
 else return 0;
}
//a. 9 b. 6 c. 7 d. 8
//n	y	Calcul
//3	1	y=2  2 + f(2,2)
//2	2	y=3  2 + 3 + f(1,3)
//1	3	y=4  2 + 3 + 4 + f(0,4)
//0	4	f(0,4)=0

//Calcul final:

//f(3,1)
//= 2 + 3 + 4 + 0
//= 9
//Răspuns: 9






#endif // TEMAVAR10_H_INCLUDED
