#ifndef _SECTION
#define _SECTION

#include <string>
#include "Square.hpp"

class Section : public Square
{
private:
	char sectionName;
	int numOfSquares = 9;

	Square* getSquare(std::string returnType, int squareRef);
public:
	Section();
	Section(int sectionNamePar, 
		int _11val, int _12val, int _13val, 
		int _21val, int _22val, int _23val, 
		int _31val, int _32val, int _33val);
	void setSection(char inputPar);
	char getSection();
	std::string stringLower(std::string upTxt);
};
#endif // !_SECTION

