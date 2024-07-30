#include "complexo.h"

Complexo::~Complexo() {
  // Não precisei utilizar alocação dinâmica
}

//Não mudar
Complexo::Complexo() {
  a = 0.;
  b = 0.;
}

//Não mudar
void Complexo::imprimir() {
  // Imprime na tela "a+bi" (sem aspas) e sem espaços.
  cout << a<<"+"<<b<<"i";
}

//Para Fazer
Complexo::Complexo(Complexo const &i_){
  a = i_.a;
  b = i_.b;
}

//Para Fazer
Complexo::Complexo(float a_, float b_) { 
  a = a_;
  b = b_;
}

//Para Fazer
//Método de Potência de um número imaginário elevado a um número inteiro "i_"
Complexo Complexo::pow(int i_){
  Complexo res = Complexo(*this); // Cria uma cópia do número com o valor inicial

  for (int i = 1; i < i_; i++) 
      res = res * (*this);

  return res;
}

//Para Fazer
Complexo Complexo::operator+(Complexo const &i_){
  Complexo res;
  res.a = a + i_.a;
  res.b = b + i_.b;

  return res;
}

//Para Fazer
Complexo Complexo::operator-(Complexo const &i_) {
  Complexo res;
  res.a = a - i_.a ;
  res.b = b - i_.b ;

  return res;
}

//Para Fazer
Complexo Complexo::operator*(Complexo const &i_) {
  Complexo res;
  res.a = (a * i_.a) - (b * i_.b);
  res.b = (a * i_.b) + (b * i_.a);

  return res;
}

//Para Fazer
Complexo Complexo::operator/(Complexo const &i_){
  Complexo res;
  float denominador = (i_.a * i_.a) + (i_.b * i_.b);
  res.a = (a * i_.a + b * i_.b) / denominador;
  res.b = (b * i_.a - a * i_.b) / denominador;
  return res; 
}

//Para Fazer
Complexo& Complexo::operator=(Complexo const &i_){
  a = i_.a;
  b = i_.b;
  return *this;
}

//Para Fazer
bool Complexo::operator==(Complexo const &i_){
  return (a == i_.a && b == i_.b);
}

//Para Fazer
bool Complexo::operator!=(Complexo const &i_){
  return (a != i_.a && b != i_.b);
}
