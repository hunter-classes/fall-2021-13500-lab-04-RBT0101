#include <iostream>
#include "checkerboard.h"

std::string checkerBoard(int width, int height){
	std::string asteriskCheckerBoard = "";
	
	std::string pattern = "";
	for (int h=1; h<=height; h++){
		if (h%2 == 1){
			pattern = "*";
		}
		else{
			pattern = " ";
		}

		for (int w=1; w<=width; w++){
			if (pattern == " "){
				asteriskCheckerBoard += pattern;
				pattern = "*";
			}
			else{
				asteriskCheckerBoard += pattern;
				pattern = " ";
			}
		}
		
		asteriskCheckerBoard += "\n";
	}
	
	return asteriskCheckerBoard;
}
