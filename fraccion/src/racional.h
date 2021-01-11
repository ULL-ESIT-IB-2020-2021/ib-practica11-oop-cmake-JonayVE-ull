/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <string>
#include <assert.h>

class Racional{
 public:
  Racional(int num = 1, int den = 1){
    
    num_ = num;
    assert((den_ = den) != 0);
  }
  void PrintScreen();
  void PrintFile(std::string output_file);
  void ReadFile(std::string input_file);
  void SetRacional(int real_, int imaginary);
  int GetNum() { return num_; }
  int GetDen() { return den_; }
  void Simplificate();
  void Add(Racional racional1, Racional racional2);
  void Sub(Racional racional1, Racional racional2);
  void Multiplicate(Racional racional1, Racional racional2);
  void Divide(Racional racional1, Racional racional2);
  void Comparate(Racional racional2);

 private:
  int num_;
  int den_;

};

void Usage(int argc, char *argv[]);
