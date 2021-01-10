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

 private:
  double real_;
  double imaginary_;

};

void Print();
void SetComplex(double real_, double imaginary);
Complex Add(Complex complex1, Complex complex2);
Complex Sub(Complex complex1, Complex complex2);