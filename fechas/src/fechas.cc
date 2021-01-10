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
#include <string>

#include "fechas.h"    

void Date::Print() {
  std::cout << "The Date is " << day_ << "/" << month_ << "/" << year_ << std::endl;
}

bool IsLeapYear(Date date){
  if(((date.GetYear()%100)%4)==0){
   return true;
  }else{
    return false;
  }
}


Date Increment(Date date){

  int new_day, new_month, new_year = date.GetYear() ;

  if(date.GetMonth()<13){

    switch (date.GetMonth()){
      case 2:
      
        if(IsLeapYear(date)){
          if(date.GetDay()<30){
            if((date.GetDay()+1) <= 29){
              new_day = date.GetDay() + 1;
              new_month = date.GetMonth();
            }else{
              new_day = 1;
              new_month = date.GetMonth() + 1;
            }
          }else{exit(EXIT_SUCCESS);}
        }else{
          if(date.GetDay()<29){
            if((date.GetDay()+1) <= 28){
              new_day = date.GetDay() + 1;
              new_month = date.GetMonth();
            }else{
              new_day = 1;
              new_month = date.GetMonth() + 1;
            }
          }else{exit(EXIT_SUCCESS);}
        }
      
        break;

      case 1:
      case 3:
      case 5:
      case 7:
      case 8:
      case 10:
      case 12:
        if(date.GetDay()<32){
            if((date.GetDay()+1) <= 31){
              new_day = date.GetDay() + 1;
              new_month = date.GetMonth();
            }else{
              new_day = 1;
              new_month = date.GetMonth() + 1;
            }
        }
        
        break;

      case 4:
      case 6:
      case 9:
      case 11:
        if(date.GetDay()<31){
            if((date.GetDay()+1) <= 30){
              new_day = date.GetDay() + 1;
              new_month = date.GetMonth();
            }else{
              new_day = 1;
              new_month = date.GetMonth() + 1;
            }
        }
      default:
        break;
    }
    if (new_month == 13){
      new_month = 1;
      new_year = date.GetYear() + 1;
    }
    Date new_date(new_day, new_month, new_year);
    return new_date;

  }else{
    exit(EXIT_SUCCESS);
  }
}
