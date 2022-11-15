#include<iostream>
#include<string>
#include"Section.hpp"

Square* Section::getSquare(std::string returnType, int squareRef)
{
	// create string which is the name of the square
	std::string SquareToOutput = sectionName + std::to_string(squareRef);
	// standardize input
	returnType = stringLower(returnType);
	// choose which value to return
	if (returnType == "value")
	{
		int valueOutput;
	}
	else if (returnType == "position")
	{
		int positionOutput[2];
	}

	// output the squares information ???? HOW?

}

Section::Section()
{
	sectionName = 'Z';
	std::string squareRef;

	// for loop generate 
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			// generate referance in format Z_ij
			squareRef = sectionName + "_" + std::to_string(i) + std::to_string(j);

			Square* squareRef = new Square(); //???    Why pointer?  Do I need destructor?
		}
	}
}

Section::Section(int sectionNamePar,
	int _11val, int _12val, int _13val,
	int _21val, int _22val, int _23val,
	int _31val, int _32val, int _33val)
{

	sectionName = sectionNamePar;
	std::string squareRef;
	int array [3][3] = { _11val,_12val,_13val ,_21val ,_22val ,_23val ,_31val ,_32val ,_33val };

	// for loop generate 
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			// generate referance in format Z_ij
			squareRef = sectionName + "_" + std::to_string(i) + std::to_string(j);

			Square* squareRef = new Square(array[i][j], i, j); //???    Why pointer?  Do I need destructor?
		}
	}
}

void Section:: setSection(char inputPar)
{
	sectionName = inputPar;
}

char Section::getSection()
{
	return sectionName;
}

std::string Section::stringLower(std::string upTxt)
{
	for (int i = 0; i < upTxt.length(); i++)
	{
		if (upTxt[i] >= 'A' && upTxt[i] <= 'Z')
		{
			upTxt[i] = upTxt[i] + 32;
		}
	}
	return upTxt;
}
