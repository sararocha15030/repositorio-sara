#include <iostream>
#include <string>
#include "complexo.h"

using namespace std;

int main() {

  Complexo Z1(1.0f, 2.35f); // complexo 1
  Complexo Z2(3.2f, 1.95f); // complexo 2
  Complexo Result;

  cout << "Z1: "; Z1.imprimir(); cout  << endl;
  cout << "Z2: "; Z2.imprimir(); cout  << endl << endl;

  // Soma
  cout << ">> SOMA Z1 + Z2:" << endl;
  Result = Z1 + Z2;
  Result.imprimir();

  cout << endl << endl;

  // Subtração
  cout << ">> DIFERENCA Z1 - Z2:" << endl;
  Result = Z1 - Z2;
  Result.imprimir();

  cout << endl << endl;

  //multiplicacao
  cout << ">> PRODUTO Z1 * Z2:" << endl;
  Result = Z1 * Z2;
  Result.imprimir();

  cout << endl << endl;

  //divisao
  cout << ">> DIVISAO Z1 / Z2:" << endl;
  Result = Z1 / Z2;
  Result.imprimir();

  cout << endl << endl;

  // Potencia
  cout << ">> POTENCIA Z1^3" << endl;
  Result = Z1.pow(3); // elevando Z1 ao cubo
  Result.imprimir();
  cout << endl << endl;

  // Igualdade
  cout << ">> COMPARAÇÃO (Z1 / Z2) == Z2" << endl;
  cout << ((Z1 / Z2) == Z2) << endl;
  cout << ">> COMPARAÇÃO (Z1 * Z1) == Z1^2:" << endl;
  cout << ((Z1 * Z1) == Z1.pow(2));

  cout << endl << endl;

  // Diferença
  cout << ">> COMPARAÇÃO (Z1 + Z1) != (Z1 * 2):" << endl;
  cout << ((Z1 + Z1) != (Z1 * Complexo(2, 0))) << endl;
  cout << ">> COMPARAÇÃO Z1 != Z2:" << endl;
  cout << (Z1 != Z2) << endl;

  cout << endl << endl;

  // Calculos Complexos
  Complexo a(2.5, 1.25), m(1.32, 3.27), n(3.15, 1.38), j(2.2, 1.5), k(3.33, 1.11);
  cout << ">> Caso mais \"complexo\" kakskasksakjaksa:" << endl;

  Complexo comp1((Complexo(2.,0.)*(a-m*n)) / (j*j*k*k));
  Complexo comp2((Complexo(2.,0.)*(a-m*n)) / (j.pow(2)*k.pow(2)));
  comp1.imprimir(); cout << endl;
  comp2.imprimir(); cout << endl;
  if ( (Complexo(2.,0.)*(a-m*n)) / (j*j*k*k) == (Complexo(2.,0.)*(a-m*n)) / (j.pow(2)*k.pow(2)) ) {
    cout << "Deu bom" << endl;
  }

  return 0;

}