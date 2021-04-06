//
//  main.cpp
//  Clase12-03-2021
//
//  Created by Countyfoot on 4/3/21.
//
//En este programa se observa como se manipulan los bits directamente para obtener resultados en terminos de optimización. NOTA: Es muy arriesgado realizar este tipo de operaciones.
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
  int a = 6; // 110
  int b = 4; // 100

  int c = a & b; // c = 100 = 4
  c = a | b; // c = 110 = 6
  c = a ^ b; // c = 010 = 2
  c = ~a;    // c = 001 = -7
  c = a<<2;  // c = 11000 =
  return 0;
}
