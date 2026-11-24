#ifndef PARCURGERE_H_INCLUDED
#define PARCURGERE_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int sub(int v[],int n,int a){
    int nr=0;
    for(int i=0;i<n;i++){
        if(v[i]<a){
            nr++;
        }
    }
    return nr;
}

/*
void v001_4(){
    int n,v[100];
    int x[100];
    bool ok=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int )



    for(int i=0;i<n;i++){
        for(int j=i+1;j,n;j++){
            if
        }
    }



}
*/


#endif
