#include "Rhombus.h"
#include "Exception.h"
#include <iostream>

Rhombus::Rhombus(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrilateral) : Parallelogram(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, nameQuadrilateral)
{
	if (sideA != sideB) throw Except("������� A � B �� �����");
	if (sideA != sideD) throw Except("������� A � D �� �����");
	if (sideB != sideC) throw Except("������� B � C �� �����");
	if (sideC != sideD) throw Except("������� C � D �� �����");
}

void Rhombus::print_sides()
{
	std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Rhombus::print_angles()
{
	std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}