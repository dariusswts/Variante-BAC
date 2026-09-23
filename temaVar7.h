#ifndef TEMAVAR7_H_INCLUDED
#define TEMAVAR7_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
/*
1
Cerința
Fiecare dintre variabilele întregi x şi y memorează câte un număr natural. Care dintre expresiile C/C++
de mai jos are valoarea 1 dacă şi numai dacă numărul memorat în x este strict mai mare decât 0 şi numărul memorat în y este strict mai mare decât 5?
a. x*y-5!=0
b. x*(y-5)!=0
c. x*(y-5)>=0
d. !(x*(y-5)<=0)

b. x*(y-5)!=0

1
Cerința
Care dintre variantele de mai jos reprezintă declararea eficientă şi corectă a unui tablou bidimensional cu exact 20 de elemente, numere întregi cu cel mult 4 cifre fiecare?
a. int a[2][10];
b. float a[40];
c. char a[2][10];
d. int a[40];

int a[2][10];
are:
2*10=20
Răspuns
a. int a[2][10];

5. Se consideră un text cu maximum 255 de caractere în care cuvintele sunt separate prin
unul sau mai multe spaţii. Primul caracter din textul citit este o literă, iar cuvintele sunt
formate numai din litere mici ale alfabetului englez. Scrieţi un program C/C++ care citeşte
de la tastatură textul şi îl transformă, înlocuind prima literă a fiecărui cuvânt cu litera mare
corespunzătoare, restul caracterelor rămânând nemodificate. Textul astfel transformat va fi
afişat pe ecran.
Exemplu: dacă de la tastatură se introduce textul: mare frig rosu
se va afişa pe ecran: Mare Frig Rosu
*/
void Var7Rez5(char s[])
{
    s[0]=s[0]-'a'+'A';

    for(int i=1;i<strlen(s);i++){
        if(s[i-1]==' '&&s[i]!=' '){
            s[i]=s[i]-'a'+'A';
        }
    }
}
int rezVar7()
{
    char s[256];
    cin.getline(s,256);
    Var7Rez5(s);
    cout << s;

}

/*
1. Se consideră subprogramul f definit
alăturat. Ce se va afişa în urma
apelului f(12345);? (4p.)
void f(long int n)
{ if (n!=0)
 {if (n%2 == 0)
 cout<<n%10; | printf(“%d”,n%10);
 f(n/10);
 }
}
a. 513 b. 24 c. 42 d. 315

12345 > 5 > 4 > 3 > 2 > 1

Se afișează:
4
2

Raspuns
42

 3. Scrieţi un program C/C++ care citeşte de la tastatură un număr natural n (0<n≤100)şi cele
3*n elemente ale tabloului unidimensional v, fiecare element fiind un număr natural cu cel
mult patru cifre fiecare. Tabloul este împărţit în trei zone, cu câte n elemente: prima zonă
conţine primele n elemente din tablou, a doua zonă conţine următoarele n elemente din
tablou, restul elementelor fiind în zona a treia. Programul va interschimba primul element
par (dacă există) al zonei unu cu ultimul element impar (dacă există) al zonei trei şi apoi va
scrie pe prima linie a fişierului text BAC.TXT toate elementele tabloului, separate prin câte
un spaţiu. În cazul în care unul dintre aceste două elemente, care urmează a fi
interschimbate, nu există, programul nu va efectua nici o modificare asupra tabloului dat.
Exemplu: pentru n=3 şi v=(1 2 3 4 5 6 7 8 9), fişierul BAC.TXT va conţine:
1 9 3 4 5 6 7 8 2
*/





#endif // TEMAVAR7_H_INCLUDED
