#ifndef RECAPITULARE-BACKTRAKING_H_INCLUDED
#define RECAPITULARE-BACKTRAKING_H_INCLUDED
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

///1
char x[5],l[]="abcde";
int nr=0;

bool vocala(char c)
{
    return c=='a' || c=='e';
}

bool valid(int k)
{
    if(k==1 && x[k]!='b'){
        return false;
    }
    if(k==4 && x[k]!='e'){
        return false;
    }
    if(k>1 && vocala(x[k]) && vocala(x[k-1])){
        return false;
    }
    return true;
}

void afisare()
{
    for(int i=1;i<=4;i++){
        cout<<x[i];
    }
    cout<<endl;
    nr++;
}

void back(int k)
{
    for(int v=0;v<5;v++){
        x[k]=l[v];

        if(valid(k)){
            if(k==4){
                afisare();
            }
            else{
                back(k+1);
            }
        }
    }
}

void v001_III1()
{
    back(1);
    cout<<nr;
}

///2
int x18[10],n18,nr18=0;

int suma18(int k)
{
    int s=0;

    for(int i=1;i<=k;i++){
        s=s+x18[i];
    }
    return s;
}

bool valid18(int k)
{
    if(k==1 && x18[k]==0){
        return false;
    }
    if(suma18(k)>4){
        return false;
    }
    return true;
}

void afisare18()
{
    nr18++;

    if(nr18==7){
        for(int i=1;i<=n18;i++){
            cout<<x18[i];
        }
    }
}

void back18(int k)
{
    for(int v=0;v<=3;v++){
        x18[k]=v;

        if(valid18(k)){
            if(k==n18){
                if(suma18(k)==4){
                    afisare18();
                }
            }
            else{
                back18(k+1);
            }
        }
    }
}

void v031_III1()
{
    nr18=0;

    for(n18=1;nr18<7;n18++){
        back18(1);
    }
}

///3
int x19[20],n19=4,nr19=0;
char l19[]="acim";
bool ok19=false;

bool valid19(int k)
{
    for(int i=1;i<k;i++){
        if(x19[i]==x19[k]){
            return false;
        }
    }
    return true;
}

void afisare19()
{
    char s[5];

    for(int i=1;i<=n19;i++){
        s[i-1]=l19[x19[i]-1];
    }

    s[4]='\0';

    if(strcmp(s,"cami")==0){
        ok19=false;
    }

    if(ok19==true){
        cout<<s<<endl;
        nr19++;
    }

    if(strcmp(s,"amic")==0){
        ok19=true;
    }
}

void back19(int k)
{
    for(int v=1;v<=n19;v++){
        x19[k]=v;

        if(valid19(k)){
            if(k==n19){
                afisare19();
            }
            else{
                back19(k+1);
            }
        }
    }
}

void v059_III1()
{
    nr19=0;
    ok19=false;

    back19(1);
    cout<<nr19;
}

///4
int x20[20],n20=4,nr20=0;

bool valid20(int k)
{
    for(int i=1;i<k;i++){
        if(x20[i]==x20[k]){
            return false;
        }
    }

    if(k==n20 && x20[k]%2!=0){
        return false;
    }

    return true;
}

void afisare20()
{
    nr20++;

    if(nr20==4){
        for(int i=1;i<=n20;i++){
            cout<<x20[i];
        }
    }
}

void back20(int k)
{
    for(int v=1;v<=n20;v++){
        x20[k]=v;

        if(valid20(k)){
            if(k==n20){
                afisare20();
            }
            else{
                back20(k+1);
            }
        }
    }
}

void v081_III1()
{
    nr20=0;
    back20(1);
}

















#endif // RECAPITULARE-BACKTRAKING_H_INCLUDED
