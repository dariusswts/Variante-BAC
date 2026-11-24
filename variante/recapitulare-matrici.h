#ifndef RECAPITULARE-MATRICI_H_INCLUDED
#define RECAPITULARE-MATRICI_H_INCLUDED
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

///1
void v002_II4()
{
    int a[100][100],n,k,s,j;

    cin>>n>>k;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    s=0;
    for(j=0;j<n/2;j++){
        if(a[k][j]>0){
            s=s+a[k][j];
        }
        if(a[k][j+n/2]>0){
            s=s+a[k][j+n/2];
        }
        s=s%10;
    }

    cout<<s;
}

///3
int a[11][11],n,m,k;

void citire()
{
    cin>>k>>n>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
}

bool verificare(int j)
{
    for(int i=1;i<=n;i++){
        if(a[i][j]==k){
            return true;
        }
    }
    return false;
}

void v082_II5()
{
    citire();

    int p=1,nr=0;

    for(int j=1;j<=m;j++){
        if(verificare(j)==true){
            p=p*j;
            nr++;
        }
    }

    if(nr==0){
        cout<<"NU EXISTA";
    }
    else{
        cout<<p;
    }
}
///4
void initializare()
{
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            a[i][j]=10-j;
        }
    }
}

void prelucrare()
{
    int aux;

    for(int i=0;i<=8;i++){
        if(a[i][9-i]<a[i+1][8-i]){
            aux=a[i][9-i];
            a[i][9-i]=a[i+1][8-i];
            a[i+1][8-i]=aux;
        }
    }
}

void v055_II3()
{
    initializare();
    prelucrare();

    cout<<a[0][9]<<" "<<a[9][0];
}


#endif // RECAPITULARE-MATRICI_H_INCLUDED
