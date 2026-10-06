#ifndef TEMAVAR14_H_INCLUDED
#define TEMAVAR14_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Pentru care dintre perechile de valori
de mai jos expresia C/C++ alăturată
are valoarea 1? (4p.)
(a%100==b%100) && (a>99) || (b>99)
a. a=1003 şi b=3 b. a=35 şi b=35
c. a=1100 şi b=10 d. a=1234 şi b=12

(a%100==b%100) && (a>99) || (b>99)

Verificăm variantele.
a) a=1003, b=3
1003%100 = 3
3%100 = 3


2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu x%y restul împărţirii numărului natural x la
numărul natural nenul y şi cu [z] partea întreagă a
numărului real z.
a) Scrieţi valoarea ce se va afişa dacă se citesc, în
această ordine, numerele 12, 7, 354, 9, 1630, 0. (6p.)

 citeşte x
 (număr natural)
 nÅ0
┌cât timp x≠0 execută
│ yÅx; cÅ0
│ ┌cât timp y>0 execută
│ │ ┌dacă y%10>c atunci
│ │ │ cÅy%10
│ │ └■
│ │ yÅ[y/10]
│ └■
│ nÅn*10+c
│ citeşte x
└■
 scrie n

 Număr	Cifra maximă	n
  12	      2	        n+2
   7	      7	        n+7
  354	      5	        n+5
    9	      9	        n+9
   1630	      6	        n+6
    0	      0      	n+0
    n=0
n=0*10+2 = 2
n=2*10+7 = 27
n=27*10+5 = 275
n=275*10+9 = 2759
n=2759*10+6 = 27596
27596


3. Ce se afişează pe ecran în urma
executării secvenţei de program
alăturate, în care variabila s
memorează un şir cu cel mult 10
caractere, iar variabilele i şi j
sunt de tip întreg? (4p.)

char s[11]="abcduecda";
cout<<strlen(s);
i=0; j=strlen(s)-1;
while (i<j)
 if (s[i]==s[j])
 { strcpy(s+j,s+j+1);
 strcpy(s+i,s+i+1); j=j-2;
 }
 else
 { i=i+1; j=j-1; }
cout<<" "<<s;

       s	Caractere verificate
	abcduecda	a și a	          Sunt egale > se elimină
1	bcduecd	    b și d	          Sunt diferite > se merge spre interior
2	bcduecd	    c și c	          Sunt egale > se elimină
3	bdue d	    d și d	          Sunt egale > se elimină
4	bue	        b și e            Sunt diferite > se oprește

se afisaeza : 9 bue
*/

5.
Astfel, elementele de pe prima coloană a matricei vor fi toate egale cu
cifra unităţilor numărului dat, elementele de pe a doua coloană a
matricei vor fi toate egale cu cifra zecilor numărului dat, şi aşa mai
departe, ca în exemplu.
Exemplu: dacă se citeşte numărul 1359, matricea construită va fi cea
alăturată. (10p.)
Varianta 14
Ministerul Educaţiei, Cercetării şi Inovării
Centrul Naţional pentru Curriculum şi Evaluare în Învăţământul Preuniversitar
BACALAUREAT 2009 - INFORMATICĂ, limbajul C/C++ Subiectul III
Specializarea Matematică-informatică intensiv informatică
Subiectul III (30 de puncte) - Varianta 014
Pentru itemul 1, scrieţi pe foaia de examen litera corespunzătoare răspunsului corect.

void solutie5Var14(){
     int x,n=0,a[10];
    cin>>x;
    int y=x;
    while(y>0){
        a[n]=y%10;
        n++;
        y=y/10;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[j]<<" ";
        }

        cout<<endl;
    }
}

/*
3. Se citeşte de la tastatură un număr natural n (n≤500) şi apoi n cifre separate prin spaţii. Se
cere să se afişeze pe ecran cele n cifre citite, în ordine crescătoare, separate prin câte un
spaţiu.
Exemplu: pentru n=19 şi cifrele 3 3 0 9 2 1 2 1 3 7 1 5 2 7 1 0 3 2 3 se va
afişa pe ecran 0 0 1 1 1 1 2 2 2 2 3 3 3 3 3 5 7 7 9.
a) Descrieţi pe scurt un algoritm de rezolvare al problemei, eficient din punct de vedere al
spaţiului de memorie utilizat şi al timpului de executare, explicând în ce constă eficienţa
metodei alese. (4p.)
b) Scrieţi programul C/C++ corespunzător algoritmului descris. (6p.)
Fişierul text BAC.TXT conţine mai multe numere naturale, cu cel mult 6 cifre fiecare, câte
un număr pe fiecare linie a fişierului.
*/
void solutie4Var14(){
    int n,x;
    int v[10]={0};
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        v[x]++;
    }
    for(int i=0;i<=9;i++){
        for(int j=1;j<=v[i];j++){
            cout<<i<<" ";
        }
    }
}



#endif // TEMAVAR14_H_INCLUDED
