#include "Rectangle.h"
#include "Exception.h"
#include <iostream>

Rectangle::Rectangle(int sideA, int sideB, int sideC, int sideD, int angleA, int angleB, int angleC, int angleD, std::string nameQuadrilateral) : Parallelogram(sideA, sideB, sideC, sideD, angleA, angleB, angleC, angleD, nameQuadrilateral)
{
	if (angleA != 90) throw Except("���� A �� ����� 90 ��������");
	if (angleB != 90) throw Except("���� B �� ����� 90 ��������");
	if (angleC != 90) throw Except("���� C �� ����� 90 ��������");
	if (angleD != 90) throw Except("���� D �� ����� 90 ��������");
}

void Rectangle::print_sides()
{
	std::cout << "a = " << sideA << " b = " << sideB << " c = " << sideC << " d = " << sideD;
}

void Rectangle::print_angles()
{
	std::cout << "A = " << angleA << " B = " << angleB << " C = " << angleC << " D = " << angleD;
}