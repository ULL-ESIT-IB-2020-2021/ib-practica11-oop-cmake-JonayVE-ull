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

class Complex{
 public:
  Complex(double real = 0, double imaginary = 0){real_ = real; imaginary_ = imaginary;};
  void Print();
  void SetComplex(double real_, double imaginary);
  int GetReal() { return real_; }
  int GetImaginary() { return imaginary_; }
  void Add(Complex complex1, Complex complex2);
  void Sub(Complex complex1, Complex complex2);
  void Multiplicate(Complex complex1, Complex complex2);
  void Divide(Complex complex1, Complex complex2);

 private:
  double real_;
  double imaginary_;

};


