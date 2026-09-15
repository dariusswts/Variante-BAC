#ifndef ALGORTIMI-UTILI_H_INCLUDED
#define ALGORTIMI-UTILI_H_INCLUDED
#include <fstream>
#include <string.h>
using namespace std;


void alg(){
    int n;
    int P=1;
    int nou=0;
    while(n!=0){
        int c=n%10;
        nou=c*P+nou;
        P=P*10;
        n/=10;
    }
    cout<<nou<<endl;
}
//functie ce elimna cifrele pare
void eliminaPare(int n){
    int p=1;
    int x=0;
    while(n!=0){
        int c=n%10;
        if(c%2!=0){
          x=c*p+x;
          p=p*10;
        }
        n/=10;
    }
    cout<<x;
}
//parcurgere
//n=12345
///  n!=0    c=n%10   nou=c*p+nou              p*=10   n/=10
///   da        5     nou=5*1+0                p=10    1234
///   da        4     nou=4*10+5               p=100   123
///   da        3     nou=3*100+45             p=1000   12
///   da        2     nou=2*1000+345           p=10000   1
///   da        1     nou=1*10000+2345         p=100000  0
///   nu --------------
///rezulta 12345



///citirea fisierului cu while-ul
void citireWhile(int v[],int n){
    ifstream f("data.txt");
    int v[100];
    int n=0;
    if(f.is_open()){
        while(f>>v[n]){
            n++;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        f.close();
    }else{
        cout<<"Fisierul nu s-a putut deschide!";
    }
}


#endif // ALGORTIMI-UTILI_H_INCLUDED
