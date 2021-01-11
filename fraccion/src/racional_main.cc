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

#include "racional.h"
#include <iostream>
#include <string>
#include <fstream>

  
int main (int argc, char* argv[]) {

  Usage(argc, argv);

  std::string input_file = argv[1];
  std::string output_file = argv[2];
  
  std::ifstream file{input_file};
  std::ofstream output{output_file};

  if (!file) {
    std::cerr << "No se pude abir el fichero\n";
    exit(EXIT_SUCCESS);
  }

    std::string num1 = "";
    std::string den1 = "";
  
    std::string num2 = "";
    std::string den2 = "";

    std::string string_input;
    std::getline(file, string_input);

    num1 = num1 + string_input[0];
    den1 = den1 + string_input[2];

    //std::cout << num1 << "-" << den1 << std::endl;
  
    num2 = num2 +string_input[4];
    den2 = den2 + string_input[6];

    //std::cout << num2 << "-" << den2 << std::endl;

  Racional racional1(std::stoi(num1),std::stoi(den1));
  Racional racional2(std::stoi(num2),std::stoi(den2));
  Racional resultado;

  resultado.Add(racional1,racional2);
  output << racional1.GetNum() << "/" << racional1.GetDen() << " + " << racional2.GetNum() << "/" 
  << racional2.GetDen() << " = " << resultado.GetNum() << "/" << resultado.GetDen() << std::endl;

  resultado.Sub(racional1,racional2);
  output << racional1.GetNum() << "/" << racional1.GetDen() << " - " << racional2.GetNum() << "/" 
  << racional2.GetDen() << " = " << resultado.GetNum() << "/" << resultado.GetDen() << std::endl;

  resultado.Multiplicate(racional1,racional2);
  output << racional1.GetNum() << "/" << racional1.GetDen() << " * " << racional2.GetNum() << "/" 
  << racional2.GetDen() << " = " << resultado.GetNum() << "/" << resultado.GetDen() << std::endl;

  resultado.Divide(racional1,racional2);
  output << racional1.GetNum() << "/" << racional1.GetDen() << " / " << racional2.GetNum() << "/" 
  << racional2.GetDen() << " = " << resultado.GetNum() << "/" << resultado.GetDen() << std::endl;



  return 0;
}
