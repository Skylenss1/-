#include <iostream>

int main() {
	double r,h,V;
	const float p = 3.14;
  std:: cout<< "Вdедіть радіус та висоту циліндру"<< std::endl;
	std::cin >> r >> h;
	V = r * r * h * p;
	
	std::cout << "Об'єм циліндру дорівнює"<< " " << V << std::endl;
	
}

