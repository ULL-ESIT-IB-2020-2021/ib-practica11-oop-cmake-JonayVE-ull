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
#include <fstream>

/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main (int argc, char* argv[]) {
  Usage(argc, argv);
  std::string date = argv[1];
  int number_of_dates = std::stoi(argv[2]);
  std::string output_file = argv[3];
  std::string day = "";
  std::string month = "";
  std::string year = "";

  day = day + date[0] + date[1];
  month = month + date[3] + date[4];
  year = year + date[6] + date[7] + date[8] + date [9];

  int nday = std::stoi(day);
  int nmonth = std::stoi(month);
  int nyear = std::stoi(year);

  Date old_date(nday, nmonth, nyear);

  std::ofstream output{output_file};

  

  for(int i=0; i < number_of_dates; ++i){

    auto new_date = Increment(old_date);
    
    output << new_date.GetDay() << "/" << new_date.GetMonth() << "/" << new_date.GetYear() <<std::endl;

    old_date = new_date;
  }

  return 0;
}
