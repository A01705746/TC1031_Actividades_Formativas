#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>

class Funciones{
public:
    Funciones(){};
    int sumaIterativa(int n);
    int sumaRecursiva(int n);
    int sumaDirecta(int n);
};


// O(n)
int Funciones::sumaIterativa(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

// O(n)
int Funciones::sumaRecursiva(int n){
    if(n<1)
        return 0;
    else
        return n+sumaRecursiva(n-1);
}

// O(1)
int Funciones::sumaDirecta(int n){
    return (n*(n+1))/2;
}

#endif // FUNCIONES_H_INCLUDED
