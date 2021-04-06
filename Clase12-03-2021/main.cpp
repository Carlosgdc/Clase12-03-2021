//
//  main.cpp
//  Clase12-03-2021
//
//  Created by Countyfoot on 4/3/21.
//
// En este programa observamos las operaciones de incremento.
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
  int a = 0;
  int b = 1;
  int c = 7;

    // Esta es la operación de pre-incremento, en esta operación primero se incrementa el valor de b y luego se asigna a la variable a el resultado de este incremento.
  a = ++b; // pre: first increment, then assing
    std::cout<<"a: "<<a<<"\n"; //El resultado seria: a: 2
    std::cout<<"b: "<<b<<"\n"; //El resultado seria: b: 2
    
    std::cout<<"\n";
    
    // Esta es la operación de post-incremento, en esta operación primero se asigna a la variable a el valor que posee inicialmente la variable c y luego se incrementa el valor de la variable c.
  a = c++; // post: first assing, then increment
    std::cout<<"a: "<<a<<"\n"; //El resultado seria a: 7
    std::cout<<"c: "<<c<<"\n"; //El resultado seria c: 8

  return 0;
}
