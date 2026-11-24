#ifndef RECAPITULARE-VECTORI_H_INCLUDED
#define RECAPITULARE-VECTORI_H_INCLUDED
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

///1

int subv001(int v[],int n,int a)
{
    int nr=0;
    for(int i=0;i<n;i++){
        if(v[i]<a){
            nr++;
        }
    }
    return nr;
}

void v001_4()
{
    int v[100],n;
    bool ok=true;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        if(subv001(v,n,v[i]+1)-subv001(v,n,v[i])>1){
            ok=false;
        }
    }
    if(ok==true){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }
}

///2
void shift(int n,int x[])
{
    int aux=x[0];

    for(int i=0;i<n-1;i++){
        x[i]=x[i+1];
    }

    x[n-1]=aux;
}

void v023_3()
{
    int x[100],n;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x[i];
    }

    for(int i=n;i>=2;i--){
        shift(i,x);
    }

    for(int i=0;i<n;i++){
        cout<<x[i]<<" ";
    }
}
///4
void v056_3()
{
    ifstream fin("date/056-3/numere.txt");

    int v[1000],n=0,x,aux;

    while(fin>>x){
        if(x%2==0){
            v[n]=x;
            n++;
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }
        }
    }

    if(n==0){
        cout<<"nu exista";
    }
    else{
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
    }
}

///4
void v079_4()
{
    ifstream fin("date/079-4/numere.in");

    int f[101]={0},n,x;
    bool ok=false;

    fin>>n;

    for(int i=0;i<n;i++){
        fin>>x;
        f[x]++;
    }

    for(int i=1;i<=100;i++){
        if(f[i]==0){
            cout<<i<<" ";
            ok=true;
        }
    }

    if(ok==false){
        cout<<"NU LIPSESTE NICIUN NUMAR";
    }
}



#endif // RECAPITULARE-VECTORI_H_INCLUDED
