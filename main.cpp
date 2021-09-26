#include <iostream>

#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"

int main(){
	//Task A
	std::cout << "Test 1: box(2,5)\n";
	std::string testingBox = box(2,5);
	std::cout << testingBox;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 2: box(5,5)\n";
	std::string testingBoxTwo = box(5,5);
	std::cout << testingBoxTwo;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 3: box(1,0)\n";
	std::string testingBoxThree = box(1,0);
	std::cout << testingBoxThree;
	std::cout << "\n--------------------------\n";
	
	//Task B
	std::cout << "******Testing Task B******\n\n";
	std::cout << "Test 1: checkerBoard(11,6)\n";
	std::string testingCheckerBoardOne = checkerBoard(11, 6);
	std::cout << testingCheckerBoardOne;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 2: checkerBoard(0,5)\n";
	std::string testingCheckerBoardTwo = checkerBoard(0, 5);
	std::cout << testingCheckerBoardTwo;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 3: checkerBoard(6,11)\n";
	std::string testingCheckerBoardThree = checkerBoard(6, 11);
	std::cout << testingCheckerBoardThree;
	std::cout << "\n--------------------------\n";
	
	//Task C
	std::cout << "******Testing Task C******\n\n";
	std::cout << "Test 1: cross(2)\n";
	std::string testingCrossOne = cross(2);
	std::cout << testingCrossOne;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 2: cross(8)\n";
	std::string testingCrossTwo = cross(8);
	std::cout << testingCrossTwo;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 3: cross(4)\n";
	std::string testingCrossThree = cross(4);
	std::cout << testingCrossThree;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 4: cross(3)\n";
	std::string testingCrossFour = cross(3);
	std::cout << testingCrossFour;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 5: cross(5)\n";
	std::string testingCrossFive = cross(5);
	std::cout << testingCrossFive;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 6: cross(1)\n";
	std::string testingCrossSix = cross(1);
	std::cout << testingCrossSix;
	std::cout << "\n--------------------------\n";
	
	//Task D
	std::cout << "******Testing Task D******\n\n";
	std::cout << "Test 1: lowerTriangle(1)\n";
	std::string testingLowerOne = lowerTriangle(1);
	std::cout << testingLowerOne;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 2: lowerTriangle(2)\n";
	std::string testingLowerTwo = lowerTriangle(2);
	std::cout << testingLowerTwo;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 3: lowerTriangle(6)\n";
	std::string testinglowerThree = lowerTriangle(6);
	std::cout << testinglowerThree;
	std::cout << "\n--------------------------\n";

	//Task E
	std::cout << "******Testing Task E******\n\n";
	std::cout << "Test 1: upperTriangle(1)\n";
	std::string testingUpperOne = upperTriangle(1);
	std::cout << testingUpperOne;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 2: upperTriangle(2)\n";
	std::string testingUpperTwo = upperTriangle(2);
	std::cout << testingUpperTwo;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 3: upperTriangle(6)\n";
	std::string testingUpperThree = upperTriangle(6);
	std::cout << testingUpperThree;
	std::cout << "\n--------------------------\n";
	
	//Task F
	std::cout << "******Testing Task F ******\n\n";
	std::cout << "Test 1: trapezoid(12,5)\n";
	std::string testingTrapezoidOne = trapezoid(12,5);
	std::cout << testingTrapezoidOne;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 2: trapezoid(5,3)\n";
	std::string testingTrapezoidTwo =  trapezoid(5,3);
	std::cout << testingTrapezoidTwo;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 3:  trapezoid(12,7)\n";
	std::string testingTrapezoidThree =  trapezoid(12,7);
	std::cout << testingTrapezoidThree;
	std::cout << "\n--------------------------\n";
	
	//Task G
	std::cout << "******Testing Task G ******\n\n";
	std::cout << "Test 1: checkerboard3x3(16,11)\n";
	std::string testingCheckerBoard3x3One = checkerboard3x3(16,11);
	std::cout << testingCheckerBoard3x3One;
	std::cout << "\n--------------------------\n";
	
	std::cout << "Test 2: checkerboard3x3(27,27)\n";
	std::string testingCheckerBoard3x3Two =  checkerboard3x3(27,27);
	std::cout << testingCheckerBoard3x3Two;
	std::cout << "\n--------------------------\n";
	return 0;
}
