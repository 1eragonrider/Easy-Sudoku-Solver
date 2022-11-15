#ifndef _SQUARE
#define _SQUARE

#include <iostream>
class Square
{
private:
	int value;
	int position[2];
public:
	Square();
	Square(int valuePar, int position0Par, int position1Par);

	void setPosition(int columnPar, int rowPar);
	void setValue(int inputPar);

	int getValue();
	std::pair<int, int> getPosition();
};

#endif // !_SQUARE

