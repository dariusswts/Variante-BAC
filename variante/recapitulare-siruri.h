#ifndef RECAPITULARE-SIRURI_H_INCLUDED
#define RECAPITULARE-SIRURI_H_INCLUDED
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

///1
void v004_II4()
{
    char s[101],aux[101];
    int i=0;

    cin>>s;

    while(i<strlen(s)){
        if(s[i]>='a' && s[i]<='z'){
            strcpy(aux,s+i+1);
            strcpy(s+i,aux);
        }
        else{
            i++;
        }
    }

    cout<<s;
}
///2
void v012_II4()
{
    char s[13]="informatica";

    cout<<strlen(s);

    for(int i=0;i<strlen(s);i++){
        if(strchr("aeiou",s[i])!=NULL){
            s[i]='*';
        }
    }

    cout<<" "<<s;
}
///3
char s[101],t[201];

bool vocala(char c)
{
    if(strchr("aeiouAEIOU",c)!=NULL){
        return true;
    }
    return false;
}

void citire()
{
    cin.getline(s,101);
}

void prelucrare()
{
    int k=0,nr=0;

    for(int i=0;i<strlen(s);i++){
        t[k]=s[i];
        k++;

        if(vocala(s[i])==true){
            t[k]='*';
            k++;
            nr++;
        }
    }

    t[k]='\0';

    if(nr==0){
        cout<<"FARA VOCALE";
    }
    else{
        cout<<t;
    }
}

void v079_II5()
{
    citire();
    prelucrare();
}


///4
void v059_II1()
{
    char s[101];

    cin>>s;

    if(strlen(s)<10){
        cout<<"DA";
    }
    else{
        cout<<"NU";
    }
}

/*
salut	5	DA
calculator	10	NU
informatica	11	NU
*/




#endif // RECAPITULARE-SIRURI_H_INCLUDED
