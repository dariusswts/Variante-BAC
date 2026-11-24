#ifndef RECAPITULARE-RECURSIVITATE_H_INCLUDED
#define RECAPITULARE-RECURSIVITATE_H_INCLUDED
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

///1
void f1(long n,int i)
{
    if(n!=0){
        if(n%3>0){
            cout<<i;
            f1(n/3,i+1);
        }
    }
}
/*
Apel       n%3	 afișează
f(121,1)	1	  1	        f(40,2)
f(40,2)	    1	  2	        f(13,3)
f(13,3)	    1	  3	        f(4,4)
f(4,4)	    1	  4	        f(1,5)
f(1,5)	    1	  5	         f(0,6)
f(0,6)	    —	 Nimic	    Stop
*/
///2
int f2(int x,int y)
{
    if(x<y){
        return 1+f2(x+1,y);
    }
    if(y<x){
        return 1+f2(y+1,x);
    }
    return 1;
}
/*
f(8,4)=1+f(5,8)
f(5,8)=1+f(6,8)
f(6,8)=1+f(7,8)
f(7,8)=1+f(8,8)
f(8,8)=1

f(7,8)=1+1=2
f(6,8)=1+2=3
f(5,8)=1+3=4
f(8,4)=1+4=5



f(7,8)=1+1=2
f(6,8)=1+2=3
f(5,8)=1+3=4
f(8,4)=1+4=5
*/
///3
int f3(int n)
{
    if(n>20){
        return 0;
    }
    else{
        return 5+f3(n+5);
    }
}

///a) Calculăm f(25)
///Deoarece 25 > 20:

///f(25)=0

/*
b) Calculam f(1)+f(5)+f(15)

Calculam f(1):

f(1)=5+f(6)
f(6)=5+f(11)
f(11)=5+f(16)
f(16)=5+f(21)
f(21)=0

f(1)=5+5+5+5+0=20

Calculam f(5):

f(5)=5+f(10)
f(10)=5+f(15)
f(15)=5+f(20)
f(20)=5+f(25)
f(25)=0

f(5)=5+5+5+5+0=20

Calculam f(15):

f(15)=5+f(20)
f(20)=5+f(25)
f(25)=0

f(15)=5+5+0=10

Rezultat final:
f(1)+f(5)+f(15)=20+20+10=50
*/

///4
int sub(long n)
{
    if(n!=0){
        if(n%2!=0){
            return 1+sub(n/10);
        }
        else{
            return sub(n/10);
        }
    }
    else{
        return 0;
    }
}

/*
a) Calculam sub(4)

sub(4)=sub(0)=0

b) Calculam sub(123986)

sub(123986)=sub(12398)
sub(12398)=sub(1239)
sub(1239)=1+sub(123)
sub(123)=1+sub(12)
sub(12)=sub(1)
sub(1)=1+sub(0)
sub(0)=0

sub(1)=1+0=1
sub(12)=1
sub(123)=1+1=2
sub(1239)=1+2=3
sub(12398)=3
sub(123986)=3

Rezultat final:
sub(123986)=1+1+1+0=3
*/










#endif // RECAPITULARE-RECURSIVITATE_H_INCLUDED
