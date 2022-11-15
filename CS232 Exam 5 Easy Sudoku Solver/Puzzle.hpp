#ifndef _PUZZLE
#define _PUZZLE
#include"Section.hpp"

class Puzzle : public Section
{
private:
	Section* getSection();
public:
	Puzzle();
	virtual ~Puzzle();

	// output fuctions
	int parsePuzzleFile();

	//void functions
	void createSections();


};

#endif // !_PUZZLE

