/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gabriel Jonay Vera Estévez
 * @date 10.enero.2021
 * @brief Desarrolle una clase Fecha que permita representar y gestionar fechas. Incorpore en la clase los miembros de datos 
 *        y métodos que considere adecuados para la finalidad que se persigue en este ejercicio. Incluya un método que permita 
 *        determinar si el año correspondiente a una fecha es un año bisiesto o no. Realice un programa cliente fechas.cc que 
 *        tome como parámetro una fecha, un número y un nombre de fichero:
 * 
 *
 */

#include "complejos.h"
#include <iostream>

  
int main (int argc, char* argv[]) {
  
  Complex complex1{4, 5}, complex2{7, -8};
  Complex result{0,0};

  result = Add(complex1, complex2);
  result.Print();
  result = Sub (complex1, complex2);
  result.Print();

  return 0;
}
