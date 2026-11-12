#ifndef TEMAVAR8_H_INCLUDED
#define TEMAVAR8_H_INCLUDED
#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

/*
2
Se consideră algoritmul alăturat descris în pseudocod:
S-a notat cu [c] partea întreagă a numărului real c, iar cu a%b restul împărţirii numărului întreg a la numărul întreg b.
citeşte n,k (numere naturale nenule)
nr←0
p←1

┌cât timp n≠0 şi k≠0 execută
│┌dacă n%2=0 atunci
││ nr←nr+n%10*p
││ p←p*10
││altfel
││ k←k-1
│└■
│ n←[n/10]
└■

scrie nr
a) Scrieţi valoarea care se afişează, în urma executării algoritmului, dacă se citeşte pentru n valoarea 932125 şi pentru k valoarea 3. (4p.)
n	n%10	Pară/Impar	k	nr	p
932125	5	impar	    2	0	1
93212	2	par	        2	2	10
9321	1	impar	    1	2	10
932  	2	par	        1   22	100
93	    3	impar	    0	22	100
afiseaza 22

3. Ce se afişează în urma executării secvenţei de
program alăturate dacă variabila s memorează
şirul de caractere abcdefgh? (6p.)
strcpy(s+2,s+4);
cout<<s<<” ”<<strlen(s);
rezultat
abefgh 6

2

Se consideră subprogramul f, descris alăturat. Ce se va afişa în urma apelului f(3)? (6p.)
void f(int n)
{
    if (n!=0)
    {
        if (n%2==0)
            cout<<n<<' ';

        f(n-1);

        cout<<n<<' ';
    }
    else
        cout<<endl;
}
n	n%2	Afișare înainte de recursivitate	Afișare după recursivitate
3	1	           —	                               3
2	0	           2	                               2
1	1	           —	                               1
0	—              —                                   —


3. Pe prima linie a fişierului text BAC.TXT se află o valoare naturală n (1<n≤50), iar pe a doua
linie n numere naturale cu maximum 4 cifre fiecare, despărţite prin câte un spaţiu. În şirul
numerelor de pe a doua linie a fişierului există cel pzâin două numere pătrate perfecte.
Scrieţi un program C/C++ care citeşte toate numerele din fişier şi afişează pe ecran
expresia aritmetică reprezentând suma numerelor de pe a doua linie a fişierului care au
proprietatea că sunt pătrate perfecte, cu simbolul + între ele şi, după un semn =, valoarea
acestei sume, ca în exemplu. Termenii sumei afişate se pot afla în orice ordine.
Exemplu: dacă fişierul BAC.TXT are următorul conţinut
5
9 5 36 9 8
atunci pe ecran se poate afişa:
9+9+36=54 sau 9+36+9=54 sau 36+9+9=54
*/
bool patrat(int x)
{
    for (int i=0;i*i<=x;i++){
        if(i*i==x){
            return true;
        }
    }
    return false;
}

void rezolvareVar8(){
    ifstream f("BAC.TXT");
    int n,x,s=0;
    bool primul=true;
    f>>n;
    for (int i=0;i<n;i++){
        f>>x;
        if(patrat(x)){
            if (primul==false){
                cout<<"+";
            }

            cout<<x;
            s=s+x;
            primul=false;
        }
    }

    cout<<"="<<s;
}

/*
4
 4. Subprogramul sub primeşte prin intermediul parametrilor:
– n şi m două numere naturale (1<n<100, 1<m<100)
– a şi b două tablouri unidimensionale, fiecare având componente numere naturale de
maximum patru cifre, ordonate crescător; tabloul a conţine n numere pare, iar tabloul b
conţine m numere impare.
Subprogramul va afişa pe ecran, în ordine crescătoare, separate prin câte un spaţiu, un şir
format dintr-un număr maxim de elemente care aparţin cel puţin unuia dintre tablouri, astfel
încât orice două elemente aflate pe poziţii consecutive să fie de paritate diferită.
Exemplu: pentru n=5, m=3 şi tablourile a=(2,4,8,10,14) şi b=(3,5,11), subprogramul
va afişa 2 3 4 5 8 11 14 sau 2 3 4 5 10 11 14.
a) Scrieţi definiţia completă a subprogramului sub, alegând pentru rezolvare un algoritm
eficient din punctul de vedere al timpului de executare.


*/



















#endif // TEMAVAR8_H_INCLUDED
