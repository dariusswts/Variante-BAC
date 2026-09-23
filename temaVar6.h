#ifndef TEMAVAR6_H_INCLUDED
#define TEMAVAR6_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
1

Care dintre următoarele expresii C/C++ are ca valoare cel mai mic dintre numerele naturale nenule memorate în variabilele x și y?
a. (x+y-abs(x-y))/2
b. x+y-abs(x-y)/2
c. (x+y+abs(x-y))/2
d. (x+y+abs(x+y))/2
Rezolvare
Formula pentru minimul dintre două numere este:
(x+y-abs(x-y))/2

Răspuns: a.

2 a)
Se citește numărul 9321. Să se scrie valoarea afișată de algoritm.
citește n
s ← 1

cât timp n>0 execut
    dacă n%10>s atunci
        s  n%10
    altfel
        s  11
    n  [n/10]

scrie s

Rezolvare
n=9321
1>1 fals  s=11
n=932

2>11 fals  s=11
n=93

3>11 fals  s=11
n=9

9>11 fals  s=11
n=0

Rsp 11

II.1

Care dintre următoarele expresii reprezintă un element al tabloului:

int a[5][6];

a. a[40]
b. a[6][7]
c. a[2][3]
d. a[10*5]

5 linii  0,1,2,3,4
6 coloane  0,1,2,3,4,5

a[2][3] este un element valid.
Rspuns c

5. Se consideră un text cu maximum 255 de caractere în care cuvintele sunt separate prin
unul sau mai multe spaţii. Primul caracter din textul citit este o literă, iar cuvintele sunt
formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi îl transformă, înlocuind prima literă a fiecărui cuvânt cu litera mare
corespunzătoare, restul caracterelor rămânând nemodificate. Textul astfel transformat va fi
afişat pe ecran.
Exemplu: dacă de la tastatură se introduce textul: mare frig rosu
se va afişa pe ecran: Mare Frig Rosu
*/
void Var6Rez6(char s[])
{
    s[0]=s[0]-'a'+'A';

    for(int i=1;i<strlen(s);i++){
        if(s[i-1]==' '&&s[i]!=' '){
            s[i]=s[i]-'a'+'A';
        }
    }
}

int rezVar6()
{
    char s[256];
    cin.getline(s,256);
    Var6Rez6(s);
    cout << s;

}

/*
3. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (n≤100) şi apoi
cele n elemente, numere naturale cu cel mult 4 cifre fiecare, ale unui tablou unidimensional
a. Programul afişează pe o linie a ecranului suma celor n elemente ale tabloului, pe
următoarea linie a ecranului suma primelor n-1 elemente şi aşa mai departe, astfel încât
ultima linie afişată să conţină doar primul element al tabloului.
Exemplu: dacă n=4 iar tabloul are elementele
a=(1,7,3,4) programul va afişa valorile
alăturate: (10p.)
15
11
8
1*/
int sumaVar6(int a[], int n)
{
    int s=0;
    for (int i=0;i<n;i++){
        s=s+a[i];
    }

    return s;
}

void rezolvareVAr6()
{
    int n,a[101];
    cin >>n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=n;i>=1; i--){
        cout<<sumaVar6(a,i)<< endl;
    }

}





#endif // TEMAVAR6_H_INCLUDED
