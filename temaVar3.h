#ifndef TEMAVAR3_H_INCLUDED
#define TEMAVAR3_H_INCLUDED
#include <fstream>
#include <string.h>
using namespace std;
/*
1. Care dintre următoarele expresii C/C++ are valoarea 1 dacă şi numai dacă numărul real
memorat în variabila x se află în intervalul (-2,2)? (4p.)
a. x*x-4<=0 b. 4-x*x>0 c. (2<x)&&(x<-2) d. (x-2)*(x+2)>0
b
*/
/*
2. Se consideră algoritmul alăturat, descris în
pseudocod.
S-a notat cu x%y restul împărţirii numărului întreg x la
numărul întreg nenul y.
a) Scrieţi ce se va afişa dacă se citesc, în această
ordine, numerele: 2 5 16 9 12 13 5 0. (6p.)
z=2, x=5

y=16
2 < 16-5    2 < 11 adevărat
5
x=16

y=9
2 < 9-16  2 < -7 fals
= 9
x=9

y=12
2 < 12-9  2 < 3  adevărat
 9
x=12

y=13
2 < 13-12  2 < 1  fals
 3
x=13

y=5
2 < 5-13  2 < -8  fals
 5
x=5

y=0
2 < 0-5  2 < -5  fals
 0
x=0 stop

Se afișează:599350
*/

/*
2. Pentru definiţia alăturată a
subprogramului f, ce se afişează ca
urmare a apelului f(26);? (6p.)
*/
void f (int x)
{
    if(x>0)
     if(x%4==0){
        cout<<’x’; | printf(”%c”,’x’);
           f(x-1); }
    else
    { f(x/3);
    cout<<"y"; | printf(”%c”,’y’);
    }
}
/*
f(26)
26%4=2  else
f(8)

8%4=0  x
f(7)

7%4!=0  f(2) cout y

2%4!=0  f(0) cout y

f(0) stop

Rezultat:xyyy
*/
/*
4. Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif. (4p.)
b) Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n cu exact 8 cifre
şi care determină şi afişează pe ecran, folosind apeluri utile ale subprogramului cif, cel mai
mare număr palindrom ce poate fi obţinut prin rearanjarea tuturor cifrelor numărului n. Dacă
nu se poate obţine un palindrom din toate cifrele numărului n, programul va afişa pe ecran
numărul 0. Un număr natural este palindrom dacă este egal cu numărul obţinut prin scrierea
cifrelor sale în ordine inversă.
Exemplu: dacă n=21523531 atunci se va afişa pe ecran numărul 53211235, iar dacă
n=12272351 atunci se va afişa pe ecran numărul 0.
*/
int cif(int a, int b)
{
    int cnt=0;

    while(a>0)
    {
        if(a%10==b)
            cnt++;
        a/=10;
    }

    return cnt;
}

/*
4.În secvenţa de instrucţiuni de mai jos, variabila s memorează un şir de caractere format
doar din litere ale alfabetului englez, iar variabilele i şi n sunt de tip int. Ştiind că în urma
executării secvenţei s-a afişat succesiunea de caractere eied*eael* scrieţi care este
şirul de caractere memorat de variabila s. (6p.)
//C++
n=strlen(s);
for(i=0;i<n;i++)
 if (s[i]==’e’) cout<<’*’;
 else cout<<'e'<<s[i];

Secvență afișată	s[i]
    ei	              i
ed	                  d
*	                  e
ea	                  a
el	                  l
*	                  e


s = "ideale"




5. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2≤n≤24) şi
   construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori
   după cum urmează:

- elementele aflate pe diagonala principală a matricei vor primi valoarea 0
- elementele de pe prima coloană, cu excepţia celui aflat pe diagonala principală vor primi
  valoarea n
- elementele de pe a doua coloană, cu excepţia celui aflat pe diagonala principală vor primi
  valoarea n-1
  ...
- elementele de pe ultima coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea 1 Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei pe câte o linie a ecranului, cu câte un spaţiu între elementele fiecărei linii (ca în exemplu). Exemplu: pentru n=4 se va afişa matricea alăturată &#x20;

vreau o rezolvare simpla pt astea
*/
void rezol5(){
    int n,a[25][25];
    cin>>n;

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=n-j;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}

/*
3. Fişierului text NR.TXT conţine pe o singură linie, separate prin câte un singur spaţiu, cel
mult 100 de numere naturale, fiecare număr având cel mult 4 cifre. Scrieţi un program
C/C++ care citeşte toate numerele din fişierul NR.TXT şi afişează pe ecran, separate prin
câte un spaţiu, în ordine crescătoare, toate numerele din fişier care au cel puţin 3 cifre.
Dacă fişierul nu conţine astfel de numere se va afişa pe ecran mesajul NU EXISTA.
*/

void citireVar3(int v[],int &n)
{
    ifstream f("NR.TXT");
    n=0;
    while(f>>v[n]){
        n++;
    }

    f.close();
}

void sortareVar3(int v[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }
}

void afisareVar3(int v[],int n)
{
    if(n==0){
        cout<<"NU EXISTA";
    }else
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
}
void rezolvare3(){
    int v[100],n=0,a[100],m=0;
    citireVar3(v,n);
    for(int i=0;i<n;i++){
        if(v[i]>=100){
           a[m]=v[i];
         m++;
        }
    }

    sortareVar3(a,m);
    afisareVar3(a,m);
}
/*
4. Subprogramul cif, cu doi parametri, primeşte prin intermediul parametrului a un număr
natural cu cel mult 8 cifre şi prin intermediul parametrului b o cifră; subprogramul returnează
numărul de apariţii ale cifrei b în scrierea numărului a.
Exemplu: pentru a=125854 şi b=5, subprogramul va returna valoarea 2.
a) Scrieţi definiţia completă a subprogramului cif.
*/
int cif(int a,int b)
{
    int nr=0;

    while(a>0)
    {
        if(a%10==b)
            nr++;
        a=a/10;
    }

    return nr;
}







#endif // TEMAVAR3_H_INCLUDED
