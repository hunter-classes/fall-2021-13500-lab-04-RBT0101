#include <iostream>
#include "checkerboard3x3.h"

std::string checkerboard3x3(int width, int height){
	std::string asteriskCheckerBoard = "";
	std::string rowPattern = "*";
	std::string colPattern = "*";
	
	int h = height;
	int currentRow = 1;
	int currentCol = 1;
	while (h > 0){
		if (currentRow % 4 == 0){
			if (rowPattern == "*") rowPattern = " ";
			else rowPattern = "*";
			
			currentRow = 1;
		}
		
		colPattern = rowPattern;
		for (int i=0; i<width; i++){
			if (currentCol % 4 == 0){
				if (colPattern == "*") colPattern = " ";
				else colPattern = "*";
				
				currentCol = 1;
			}
			
			asteriskCheckerBoard += colPattern;
			currentCol++;
		}
		
		asteriskCheckerBoard += "\n";
		currentCol = 1;
		currentRow++;
		h--;
	}	
	return asteriskCheckerBoard;
}
