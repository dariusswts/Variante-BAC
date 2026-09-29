#ifndef TEMAVAR11_H_INCLUDED
#define TEMAVAR11_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Variabilele x şi y sunt de tip întreg, x memorând valoarea 8, iar y valoarea 6. Care dintre
expresiile C/C++ de mai jos are valoarea 0? (4p.)
a. 3*x-4*y==0 b. (x+y)/2 > x%y+1
c. !(x/2+2==y) d. x-y+3!=0

a.

3*8-4*6 = 24-24 = 0
raaspuns A


2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu x%y restul împărţirii numărului natural x
la numărul natural nenul y şi cu [z] partea întreagă a
numărului real z.
a) Scrieţi valoarea care se va afişa dacă se
citeşte pentru n valoarea 296385, iar pentru k
valoarea 3.

pÅ1
┌cât timp n>0 şi k>0 execută
│ cÅn%10
│ ┌dacă c%2=1 atunci
│ │ pÅp*c
│ └■
│ nÅ[n/10]
│ kÅk-1
└■
scrie p

n	    k	c=n%10	Verificare	p
296385	3	5	5%2=1 → impar	1*5=5
29638	2	8	8%2=0 → par	5
2963	1	3	3%2=1 → impar	5*3=15

k=0

se afișează:
15


3. Ce se afişează pe ecran în urma
executării secvenţei de program
alăturate, în care variabila s
memorează un şir cu cel mult 12
caractere, iar variabila i este de
tip întreg?
 (6p.)
strcpy(s,”abracadabra”);
i=0;
cout<<strlen(s);
while (i<strlen(s))
 if (s[i]=='a')
 strcpy(s+i,s+i+1);
 else
 i=i+1;
cout<<” ”<<s;

Se șterg toate caracterele a
brcdbr
Se afișează:

11 brcdbr

*/





//2. Pentru funcţia f definită alăturat, stabiliţi care
//este valoarea f(5). Dar f(23159)? (6p.)
int f(int n){
 int c;
 if (n==0) return 9;
 else
 {c=f(n/10);
 if (n%10<c) return n%10;
 else return c;
 }
}
//f(5)
//n	n/10	n%10	f(n/10)	  Rezultat
//5	 0	     5	       9	    5 < 9        5
//0	 -	     -	       -	     9
//f(5)=5

//f(23159)
//n	        n/10	n%10	f(n/10)	   Rezultat
//23159	    2315	   9	   1	      9 < 1 , 1
//2315	     231	   5	   1	  5 < 1 , 1
//231	      23	   1	   2	  1 < 2 , 1
//23	       2       3       2	  3 < 2 , 2
//2	           0       	2    	9	  2 < 9 , 2
//0	           -      	-	    -     	9

//f(23159)=1

/*
3Fişierul text numere.txt conţine pe prima linie un număr natural n (n<30000), iar pe a
doua linie n numere întregi având maximum 4 cifre fiecare. Se cere să se afişeze pe ecran
un şir de n numere întregi, cu proprietatea că valoarea termenului de pe poziţia i
(i=1,2,…,n) din acest şir este egală cu cea mai mare dintre primele i valori de pe a doua
linie a fişierului numere.txt.
a) Descrieţi pe scurt un algoritm de rezolvare, eficient din punct de vedere al timpului de
executare şi al spaţiului de memorie utilizat, explicând în ce constă eficienţa sa. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris. (6p.)
3.
Exemplu: dacă fişierul numere.txt are conţinutul
alăturat, se afişează pe ecran numerele
4 6 6 7 8 8 8 8 8 9 10 10
12
4 6 3 7 8 1 6 2 7 9 10 8

*/
void citVar11(int &n, int v[])
{
    ifstream f("NR.TXT");
    f>>n;
    for(int i=0;i<n;i++)
    {
        f>>v[i];
    }
    f.close();
}

void Var11ex3(int v[], int n)
{
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            v[i]=v[i-1];
        }
    }
}

void afiVar11(int v[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
void rezVar10(){
    int n,v[30000];
    citVar10(n,v);
    Var11ex3(v,n);
    afiVar11(v,n);
}



#endif // TEMAVAR11_H_INCLUDED
