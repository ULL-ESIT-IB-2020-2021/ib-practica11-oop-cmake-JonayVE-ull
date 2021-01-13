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

#include <iostream>

#include "tools.h"    
#include "fechas.h"
#include <string>    
#include <fstream>
#include <sstream>
#include <vector>


/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main (int argc, char* argv[]) {
  Usage(argc, argv);
  std::stringstream date(argv[1]);
  std::stringstream get_data;
  int number_of_dates = std::stoi(argv[2]);
  std::string output_file = argv[3];
  int day, month, year;


   while (date.good()) {
    std::string substr;
    getline(date, substr, '/');
    get_data << substr << ' ';
    }

  get_data >> day >> month >> year;

  Date old_date(day, month, year);

  std::ofstream output{output_file};

  for(int i=0; i < number_of_dates; ++i){

    auto new_date = Increment(old_date);
    
    output << new_date.GetDay() << "/" << new_date.GetMonth() << "/" << new_date.GetYear() <<std::endl;

    old_date = new_date;
  }

  return 0;
}
