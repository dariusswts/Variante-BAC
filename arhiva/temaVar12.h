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

x      x!=0  x>9   x=x/10  y=y*10+x                   cin x

12      da    da     1
1       da    nu     --    y=0*10+1=1                 x=7
7       da    nu     --    y=1*10+7=17                x=354
354     da    da     35
35      da    da     3
3       da    nu     --    y=17*10+3=173              x=9
9       da    da     --    y=173*10+9=1739            x=630
630     da    da     63
63      da    da      6
6       da    nu     --    y=17390+6=17396            x=0
0       nu -----------------------------------

cout<<y

afiseaza 17396
 */

/*
4. Scrieţi ce se afişează pe
ecran în urma executării
secvenţei de program
alăturate, în care variabila s
memorează un şir de cel mult
12 caractere, iar variabila i
este de tip întreg.
*/


///char s[13]="informatica";
///cout<<strlen(s);
///for (i=0;i<strlen(s);i++)
/// if (strchr("aeiou",s[i])!=NULL)
/// s[i]= '*';
///cout<<" "<<s;

/*
informatica
i=0 i<11   if (strchr("aeiou",s[i])!=NULL)  s[i]='*' i++    cout<<" "<<s;

0    da              este vocala            s[0]='*'  1
1    da              nu este vocala         --------  2
2    da              nu eeste vocala        --------  3
3    da              este vocala            s[3]='*'  4
4    da              nu este vocala         --------  5
5    da              nu este vocala         --------  6
6    da              este vocala            s[6]='*'  7
7    da              nu este vocala         --------  8
8    da              este vocala            s[8]='*'  9
9    da              nu este vocala         --------  10
10   da              eeste vocala           s[10]='*' 11
11   nu --------------------------------------------------   acum la final afiseaza

///reaspuns afisat: *nf*rm*t*c*
*/




/*
5.
Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (2<n<25) şi apoi
construieşte în memorie o matrice cu n linii şi n coloane, numerotate de la 1 la n, ale cărei
elemente primesc valori după cum urmează: elementul din linia i şi coloana j primeşte ca
valoare ultima cifră a produsului i*j (1≤i≤n şi 1≤j≤n).
Programul va afişa matricea astfel construită pe ecran, câte o linie a matricei
pe o linie a ecranului, elementele fiecărei linii fiind separate prin câte un
spaţiu.
Exemplu: pentru n=4 se va afişa matricea alăturată.
1 2 3 4
2 4 6 8
3 6 9 2
4 8 2 6
*/

void construireVar12ex5(int a[][],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            a[i][j]=(i*j)%10;
        }
    }
}

void afisVar12(int a[][],int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" "<,endl;
        }
    }
}

void solutie5Var12(){
    int a[25][25], n;
    cin>>n;
    construire(a,n);
    afisare(a,n);
}

/*
1. Se consideră subprogramul P, definit alăturat.
Ştiind că valoarea variabilei întregi a este înainte
de apel 4, care este valoarea ei imediat după
apelul P(a)? (4p.)
void P(int &x)
{
 x=x+5;
}
a. 10 b. 4 c. 9 d. 5

a=4
a = 4 + 5 = 9

4. Scrieţi un program C/C++ care citeşte de la tastatură o valoare naturală nenulă n (n≤20),
apoi un şir de n numere naturale, având fiecare exact 5 cifre. Dintre cele n numere citite,
programul determină pe acelea care au toate cifrele egale şi le afişează pe ecran, în ordine
crescătoare, separate prin câte un spaţiu.
Exemplu: pentru n=5 şi numerele 11111 33333 12423 59824 11111 33443 se va
afişa: 11111 11111 33333.
*/
bool cifreEgale(int x){
    int c = x % 10;
    x=x/10;
    while(x>0){
        if(x % 10 != c){
            return false;
        }
        x =x/10;
    }
    return true;
}

void sortare4Var12(int v[], int n)
{
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            if(v[i]>v[j]){
                int aux=v[i];
                v[i]=v[j];
                v[j] =aux;
            }
        }
    }
}

void afisare4Var12(int v[], int n)
{
    for(int i=1;i<=n;i++){
        if(cifreEgale(v[i])){
            cout<<v[i]<<" ";
        }
    }
}

void solutie4Var12(){
    ///trebuie introduse 11111 33333 12423 59824 11111 33443
    int n,v[21];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }

    sortare4Var12(v,n);
    afisare4Var12(v,n);
}








































#endif // VAR12_H_INCLUDED
