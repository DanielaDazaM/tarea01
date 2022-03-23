// Tarea 1 del curso de Herramientas Computacionales
#include <iostream>
#include <cmath>

int main(void){
  double a = 1.0;
  double b = 1.0;
  int n = 1;
  double c = 0;
  double x_1=0 , x_2=0;
  double X_1=0, X_2=0;
 
  std::cout  << "n\t\t| x_1 \t "<<" \t | x_2 \t "<<"\t | x_1' \t"<<"| x_2' \n";
  
  for(n=1; n <= 10; n++){
    c = std::pow(10.0,-n);
    x_1 = (-b + std::sqrt( std::pow(b,2) - 4*a*c )) / (2*a);
    x_2 = (-b - std::sqrt( std::pow(b,2) - 4*a*c )) / (2*a);
    X_1 = -2*c / (b + std::sqrt( std::pow(b,2) - 4*a*c ));
    X_2 = -2*c / (b - std::sqrt( std::pow(b,2) - 4*a*c ));

    std::cout.precision(8);
    std::cout.setf(std::ios::scientific);
    std::cout << c << "\t| " << x_1 << " | " << x_2 << " | " << X_1 << " | " << X_2 << "\n";
  }
  return 0;
}
