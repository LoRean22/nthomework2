#include "Square.h"
#include "Exception.h"
#include <iostream>

Square::Square(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrilateral) : Rhombus(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, nameQuadrilateral)
{
	if (sideA != sideC) throw Except("Ñòîðîíû A è C íå ðàâíû");
	if (sideB != sideD) throw Except("Ñòîðîíû B è D íå ðàâíû");
	if (angleA != 90) throw Except("Óãîë A íå ðàâåí 90 ãðàäóñîâ");
	if (angleB != 90) throw Except("Óãîë B íå ðàâåí 90 ãðàäóñîâ");
	if (angleC != 90) throw Except("Óãîë C íå ðàâåí 90 ãðàäóñîâ");
	if (angleD != 90) throw Except("Óãîë D íå ðàâåí 90 ãðàäóñîâ");
}

void Square::print_sides()
{
	std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Square::print_angles()
{
	std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}
