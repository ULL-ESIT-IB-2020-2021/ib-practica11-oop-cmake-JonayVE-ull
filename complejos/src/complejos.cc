/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Cada nuevo término de la serie de Fibonacci se genera sumando los dos anteriores. 
 *        Comenzando con 0 y 1, los primeros 10 términos serán: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 *        Desarrolle en C++ un programa que calcule la suma de todos los términos de valor par 
 *        de la serie que sean menores que 1000.
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include <iostream>
#include "complejos.h"    


void Complex::Print() {
  std::cout << real_ << " + (" << imaginary_ << ") i" << std::endl;
}

void Complex::SetComplex(double real, double imaginary) {
  real_ = real;
  imaginary_ = imaginary;
}

Complex Add(Complex complex1, Complex complex2) {
 
  Complex resultado(complex1.GetReal() + complex2.GetReal(), complex1.GetImaginary() + complex2.GetImaginary());

  return resultado;

}

Complex Sub(Complex complex1, Complex complex2) {

  Complex resultado(complex1.GetReal() - complex2.GetReal(), complex1.GetImaginary() - complex2.GetImaginary());

  return resultado;

}


