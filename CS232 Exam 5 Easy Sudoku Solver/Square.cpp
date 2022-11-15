#include<iostream>
#include"Square.hpp"

Square::Square()
{
	value = 0;
	position[0] = 0;
	position[1] = 0;
}

Square::Square(int valuePar, int position0Par, int position1Par)
{
	value = valuePar;
	position[0] = position0Par;
	position[1] = position1Par;
}

void Square::setPosition(int columnPar, int rowPar)
{
	position[0] = columnPar;
	position[1] = rowPar;
}

void Square::setValue(int inputPar)
{
	value = inputPar;
}

int Square::getValue()
{
	return value;
}

std::pair<int, int> Square::getPosition()
{
	return std::make_pair(position[0], position[1]);
}