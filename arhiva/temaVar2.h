#ifndef TEMAVAR2_H_INCLUDED
#define TEMAVAR2_H_INCLUDED
#include <fstream>
#include <string.h>
using namespace std;

/*
1. Variabilele x şi y sunt tip int. Care dintre expresiile C/C++ de mai jos are valoarea 1
dacă şi numai dacă valorile întregi nenule memorate în variabilele x şi y sunt egale? (4p.)
a. (x%y==0) && (y%x==0) && (x*y>0) b. (x<=y) && (y<x)
c. (x<=y) || (y<=x) d. x*x==y*y

a. (x%y==0) && (y%x==0) && (x*y>0)
*/
/*
2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu x%y restul împărţirii numărului întreg x la
numărul întreg nenul y.
a) Scrieţi ce se va afişa dacă se citesc, în această
ordine, numerele: 17 22 13 101 2 7 5 0.
 (6p.) (
x=17
y=22  17>22 fals 22%10=2
x=22

y=13  22>13 adevărat  22%10=2
x=13

y=101  13>101 fals  101%10=1
x=101

y=2  101>2 adevărat  101%10=1
x=2

y=7  2>7 fals  7%10=7
x=7

y=5  7>5 adevărat  7%10=7
x=5

y=0  5>0 adevărat  5%10=5
x=0  stop

Se afișează:2211775
*/

/*
5. Să se scrie un program C/C++ care citeşte de la tastatură un cuvânt format din cel mult 20
de caractere, doar litere mici ale alfabetului englez. Programul determină transformarea
cuvântului citit prin înlocuirea fiecărei vocale a cuvântului, cu un şir format din două caractere
şi anume vocala respectivă urmată de litera mare corespunzătoare, restul literelor
nemodificându-se, ca în exemplu. Programul afişează pe ecran cuvântul obţinut, pe o
singură linie. Se consideră vocale literele din mulţimea {a,e,i,o,u}.
Exemplu: pentru cuvântul bacalaureat se va afişa pe ecran: baAcaAlaAuUreEaAt
(10p.)
        */
bool esteVocala(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
void rezolvare5(){
     char cuvant[100];
     char cuvantNou[100];
     int poz=0;
     cin >> cuvant;

    for (int i = 0; i < strlen(cuvant); i++) {
         cuvantNou[poz]=cuvant[i];
          poz++;
        if (esteVocala(cuvant[i])) {
             cuvantNou[poz]=cuvant[i]-32;
             poz++;
        }
    }
    cuvantNou[poz]='\0';
    cout<<cuvantNou<<endl;
}

/*
Varianta 2
Ministerul Educaţiei, Cercetării şi Inovării
Centrul Naţional pentru Curriculum şi Evaluare în Învăţământul Preuniversitar
BACALAUREAT 2009 - INFORMATICĂ, limbajul C/C++ Subiectul III
Specializarea Matematică-informatică intensiv informatică
Subiectul III (30 de puncte) - Varianta 002
Pentru itemul 1, scrieţi pe foaia de examen litera corespunzătoare răspunsului corect.
1. Utilizând metoda backtracking se generează în ordine lexicografică cuvintele de câte patru
litere din mulţimea A={a,b,c,d,e}, cuvinte care nu conţin două vocale alăturate. Primele
opt cuvinte generate sunt, în ordine: abab, abac, abad, abba, abbb, abbc, abbd, abbe.
Care este ultimul cuvânt generat? (4p.)
a. edcb b. eeee c. edde d. eded
Scrieţi pe foaia de examen răspunsul pentru fiecare dintre cerinţele următoare.
2. Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(12345);? (6p.)
//C++
*/
void f(long n)
{ cout<<n%10;
 if(n!=0)
 { f(n/100); cout<<n%10;}
}
/*
f(12345)
12345 = 5
f(123) = 3
f(1) = 1
f(0) = 0

Se afișează 5310135
*/


/*
3. Fişierul text NR.TXT conţine pe o singură linie, separate prin câte un spaţiu, cel mult 100 de
numere întregi, fiecare număr având cel mult 4 cifre. Scrieţi un program C/C++ care citeşte
numerele din fişierul NR.TXT şi afişează pe ecran, separate prin câte un spaţiu, în ordine
crescătoare, toate numerele naturale nenule din fişier. Dacă nu există astfel de numere se
va afişa pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul NR.TXT conţine numerele: -3 -10 0 7 -5 7 51 -800 6 3798,
atunci pe ecran se va afişa: 6 7 7 51 3798
*/

void citire3(int v[],int &n){
    ifstream f("NR.TXT");
    int a=0;
    if(f.is_open()){
        while(f>>v[n]){
            n++;
        }
        for(int i=0;i<n;i++){
            if(v[i]>0){
              cout<<v[i]<<" ";
              a=1;
            }
        }
        f.close();
    }else{
        cout<<"Fisierul nu s-a putut deschide!";
    }
    if(a==0){
        cout<<"NU EXISTA!";
    }
}

void afisare3(int v[],int n){
    bool ok=false;
    for(int i=0;i<n;i++){
        if(v[i]>0){
            cout<<v[i]<<" ";
            ok=true;
        }
    }
    if(ok==false){
      cout<<"NU EXISTA";
    }
}


void sortareCresc(int v[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
            int aux=v[i];
            v[i]=v[j];
            v[j]=aux;
            }
        }
    }
}

void rez3(){
    int v[100],n;
    citire3(v,n);
    cout<<endl;
    sortareCresc(v,n);
    cout<<"dupa sortare"<<endl;
    afisare3(v,n);
}
//2^3*3^2*5^7  suma exponentiilor este => 3+2+7

/*
4.Un număr n se numeşte extraprim dacă atât el, cât şi orice număr obţinut prin permutarea
cifrelor lui n, sunt numere prime. De exemplu, numărul 113 este un număr extraprim
deoarece 113, 311, 131 sunt numere prime.
a) Scrieţi definiţia completă a unui subprogram f, cu un parametru, subprogram care:
- primeşte prin intermediul parametrului a un număr natural cu cel mult 3 cifre (a>1)
- returnează suma tuturor exponenţilor din descompunerea în factori primi a valorii
parametrului a.
Exemplu: pentru a=90 subprogramul va returna valoarea 4, deoarece a=2*32
*5 şi
1+2+1=4.
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n, 2≤n≤999 şi,
folosind apeluri utile ale subprogramului f, verifică dacă n este un număr extraprim. În caz
afirmativ, programul afişează pe ecran mesajul DA, în caz contrar afişând mesajul NU.
*/

int Var2f(int a){

}

/*
2. Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(12345);? (6p.)
*/
//C++
/*
void f(long n)
{ cout<<n%10;
 if(n!=0)
 { f(n/100); cout<<n%10;}
}
*/
/*
n	   n%10   	  Afișare la început	   Afișare după recursivitate
12345	5	            5	                           5
123	    3	            3	                           3
1	    1               1                   	       1
0       0               0                              --
Rezultat: 5310135
*/






























#endif // TEMAVAR2_H_INCLUDED
