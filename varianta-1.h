#include <iostream>
#include <fstream>
using namespace std;
///SUB 1
/*
1. Variabila x este de tip real. Care dintre următoarele expresii C/C++ are valoarea 1 dacă şi
numai dacă numărul real memorat în variabila x aparţine intervalului (5,8]? (4p.)
a. (x<8) && (x>=5) b. (x<=8) || (x>5)
c. (x>8) || (x<=5) d. (x<=8) && (x>5)
x>5 si x<=8 raspuns B
*/
///SUB 2
/*
3. În declararea alăturată, câmpurile x şi y ale înregistrării pot memora
coordonatele carteziene ale unui punct din planul xOy. Scrieţi o
secvenţă de instrucţiuni prin executarea căreia se memorează în
variabila C coordonatele mijlocului segmentului cu capetele în punctele
ale căror coordonate sunt memorate în variabilele A şi B.
struct punct
{
 float x,y;
}A,B,C;
*/
struct punct
{
 float x,y;
};


void mijloculSG(punct A,punct B){
    punct C;
    C.x=(A.x+B.x)/2;
    C.y=(A.y+B.y)/2;
    cout<<"Cordonatele punctului C sunt  x="<<C.x<<"  y="<<C.y;

}

void solutie3(){
    punct A,B,C;
    cout<<"Coordonatele lui A"<<endl;
    cin>>A.x;
    cin>>A.y;
    cout<<"Coordonatele lui B"<<endl;
    cin>>B.x;
    cin>>B.y;
    mijloculSG(A,B);
}

/*
5.Scrieţi un program C/C++ care citeşte de la tastatură două numere naturale nenule n şi m
(2≤m≤10, 2≤n≤10) şi care construieşte în memorie şi apoi afişează o matrice A cu n linii
(numerotate de la 1 la n) şi m coloane (numerotate de la 1 la m) cu proprietatea că fiecare
element Aij memorează cea mai mică dintre valorile indicilor i şi j (1≤i≤n, 1≤j≤m).
Matricea se va afişa pe ecran, câte o linie a matricei pe câte o linie a ecranului, elementele
fiecărei linii fiind separate prin câte un spaţiu.

Exemplu: pentru n=4 şi m=5 se va afişa matricea alăturată.
 1 1 1 1 1
 1 2 2 2 2
 1 2 3 3 3
 */

int minim(int a,int b){
    if(a<b){
       return a;
    }
    if(b<a){
       return b;
    }
    return a;
}
/*
void afisareMatrice(int A[100][100],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

void solutie5(){
    int A[100][100];
    int n,m;
    cout<<"Introdu val lui m 2<=m<=10 :"<<endl;
    cin>>m;
    cout<<endl;
    cout<<"Introdu val lui n  2<=n<=10 :"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            A[i][j]=minim(i,j);
        }
    }

    ///afisare mat
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}

///SUB3
/*
Pentru definiţia de mai jos a subprogramului f, ce se afişează ca urmare a apelului
f(121,1);? (6p.)
//C++
void f(long n, int i)
{ if(n!=0)
 if(n%3>0)
 { cout<<i; f(n/3,i+1); }
}
*/
void f(long n, int i){
   if(n!=0)
   if(n%3>0){
     cout<<i; f(n/3,i+1);
   }
}
//ecran: 12345

//f(0,6)=>nu afiseaza pentru ca n==0
//f(1,5)=>af(5)
//f(4,4)=>af(4)
//f(13,3)=>af(3)
//f(40,2)=>af(2)
//f(121,1)=>af(1)
//          f(40,2)[]
//          f(13,3)[]
//          f(4,4)[]
//          f(1,5)[]
//          f(0,6)[]

/*
3. Fişierul text bac.txt conţine, pe o singură linie, cel mult 1000 de numere naturale nenule
cu cel mult 4 cifre fiecare, numerele fiind separate prin câte un spaţiu. Scrieţi un program
C/C++ care citeşte de la tastatură un număr natural nenul n (n≤999) şi numerele din fişierul
bac.txt şi care afişează pe ecran, separate prin câte un spaţiu, toate numerele din fişier
care sunt divizibile cu n. Dacă fişierul nu conţine niciun astfel de număr, atunci se va afişa
pe ecran mesajul NU EXISTA.
Exemplu: dacă fişierul bac.txt conţine numerele: 3 100 40 70 25 5 80 6 3798,
pentru n=10 atunci pe ecran se va afişa: 100 40 70 80
*/





