#ifndef HARTIE_SIRURI_H_INCLUDED
#define HARTIE_SIRURI_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


///1.1
/*
Varianta 3 · II.4 — Șirul din care s-a afișat eied*eael*
În secvența de instrucțiuni de mai jos, variabila s memorează un șir de caractere format doar din litere
ale alfabetului englez, iar variabilele i și n sunt de tip int . Știind că în urma executării secvenței s-a
afișat succesiunea de caractere eied*eael* scrieți care este șirul de caractere memorat de variabila s .
   n=strlen(s);
   for(i=0;i<n;i++)
     if (s[i]=='e') cout<<'*';
     else cout<<'e'<<s[i];



eied*eael*

i   caracter afisat   caracter initial
0
1          i                  i
2          e
3          d                  d
4          *                  e
5          e
6          a                  a
7          e
8          l                  l
9          *                  e

raspuns ideale


*/


void v003_II2(){

   char s[200]="ideale";
   int n,i;
   n=strlen(s);
   for(i=0;i<n;i++)
     if (s[i]=='e') cout<<'*';
     else cout<<'e'<<s[i];
}





#endif
