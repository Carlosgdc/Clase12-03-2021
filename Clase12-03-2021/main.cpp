//
//  main.cpp
//  Clase12-03-2021
//
//  Created by Countyfoot on 4/3/21.
//

// = assignment operator: assigns value, not memory address
#include <iostream>
#include <cstdlib>
#include <cmath>

int main (int argc, char *argv[])
{
  // Cuales son las caracteristicas de una variable?
  // Posee un nombre
  // Posee un tipo
  // Tiene un alcance
  // Tiene una direccion de memoria
  
  int a, b;
  a = 10;
  b = 14;
  a = b; // se copia el valor, es decir, a asignara su valor el valor que posea b, este signo de = no significa que las variables sean iguales ahora, simplemente a toma el valor que este tomando b. Mas no viceversa. Por lo cual el resultado de ejecutar esta declaración sera: a = 14.
  b = 7; // En esta linea cambiamos el valor de b, ahora, si fuera una igualdad nuestra declaración de la linea anterior (linea 24), al momento de cambiar el valor de b cambiaria automaticamente el valor de a por un 7. Pero esto no ocurre, ya que es una asignación y en el momento que se ejecuto la linea anterior, el valor de b era otro por lo cual se le asigno otro valor.

  std::cout << "a:" << a << std::endl;
  std::cout << "b:" << b << std::endl;
  std::cout << "&a:" << &a << std::endl;
  std::cout << "&b:" << &b << std::endl;

  a = 2 + (b = 5);      // En esta operación el programa toma como prioridad lo que se encuentre dentro de un parentesis, por lo cual b toma la signación del valor 5 y el resultado para que el programa opere sera: a=2+5, con lo cual a tendra el valor de 7.
  std::cout << "a:" << a << std::endl;
  std::cout << "b:" << b << std::endl;

  a = b = 7;            // En esta operación el programa toma como prioridad la primera asignación posible, asi el programa operaria este problema de la siguiente forma: a=(b=7). Asi la primera variable en ser asignada es b y luego a se le asignara el valor que posea b, en este caso ambas variables quedan asignadas con el valor 7.
  std::cout << "a:" << a << std::endl;
  std::cout << "b:" << b << std::endl;

  return 0;
}
