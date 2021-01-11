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
#include <fstream>
#include <string>
#include "racional.h"    

const std::string kHelpText = "El programa imprime en el fichero de salida (tercer parámetro) las \
N (segundo parámetro) fechas cronológicamente posteriores a la introducida (primer parámetro) con una separación \
de un día entre  fechas sucesivas";

void Usage(int argc, char *argv[]) {
  if (argc != 3) {
    if (argc == 2) {
      std::string parameter{argv[1]};
      if (parameter == "--help") {
        std::cout << kHelpText << std::endl;
        exit(EXIT_SUCCESS);
      }
    }
    std::cout << argv[0] << " -- Números Racionales" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " ./racionales fichero_entrada fichero_salida" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }

}


void Racional::PrintScreen() {
  std::cout << num_ << "/" << den_ << std::endl;
}

void Racional::PrintFile(std::string output_file) {

  std::ofstream file{output_file};
  file << num_ << "/" << den_ << std::endl;
}

void Racional::ReadFile(std::string input_file){
  std::ifstream file{input_file};

  if (!file) {
    std::cerr << "No se pude abir el fichero\n";
    exit(EXIT_SUCCESS);
  }

  while (file) {
    std::string string_input;
    std::getline(file, string_input);
    for(char a: string_input){
      if ((a <= 9) || (a >= 1) || (a == '/')){
        std::cout << a;
      }else{
        std::cout << std::endl;
      }
    }
  }
}

void Racional::SetRacional(int num, int den) {
  num_ = num;
  den_ = den;
}

int ReturnHigher(Racional racional1) {
  if(racional1.GetNum() > racional1.GetDen()){
    return racional1.GetNum();
  }else if(racional1.GetNum() < racional1.GetDen()){
    return racional1.GetDen();
  }else{
    return 1;
  }
}
void Racional::Simplificate(){
//std::cout << num_ << "-" << den_ << std::endl;
  Racional racional2(num_, den_);
  for(int i = ReturnHigher(racional2); i > 0; --i){
    if((num_ % i == 0) && (den_ % i == 0)){
      num_ = num_ / i;
      den_ = den_ / i;
      //std::cout << i << "-" << num_ << "-" << den_ << std::endl;
    }
  }
}

void Racional::Add(Racional racional1, Racional racional2){
  Racional auxiliar(1,1);
  auxiliar.den_ = racional1.den_ * racional2.den_;
  auxiliar.num_ = ((auxiliar.den_ / racional1.den_) * racional1.num_) + ((auxiliar.den_ / racional2.den_) * racional2.num_);
  auxiliar.Simplificate();
  num_ = auxiliar.GetNum();
  den_ = auxiliar.GetDen();
}

void Racional::Sub(Racional racional1, Racional racional2){
  Racional auxiliar(1,1);
  auxiliar.den_ = racional1.den_ * racional2.den_;
  auxiliar.num_ = ((auxiliar.den_ / racional1.den_) * racional1.num_) - ((auxiliar.den_ / racional2.den_) * racional2.num_);
  auxiliar.Simplificate();
  num_ = auxiliar.GetNum();
  den_ = auxiliar.GetDen();
}

void Racional::Multiplicate(Racional racional1, Racional racional2){
  Racional auxiliar(1,1);
  auxiliar.num_ = racional1.num_ * racional2.num_;
  auxiliar.den_ = racional1.den_ * racional2.den_;
  auxiliar.Simplificate();
  num_ = auxiliar.GetNum();
  den_ = auxiliar.GetDen();
}

void Racional::Divide(Racional racional1, Racional racional2){
  Racional auxiliar(1,1);
  auxiliar.num_ = racional1.num_ * racional2.den_;
  auxiliar.den_ = racional1.den_ * racional2.num_;
  auxiliar.Simplificate();
  num_ = auxiliar.GetNum();
  den_ = auxiliar.GetDen();
}

void Racional::Comparate( Racional racional2){

  if((num_ / den_) > (racional2.num_ / racional2.den_)){
    std::cout << num_ << "/" << den_ << "es mayor" << std::endl;
  }else{
    std::cout << racional2.num_ << "/" << racional2.den_ << "es mayor" << std::endl;
  }
}
