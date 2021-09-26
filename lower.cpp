#include <iostream>
#include "lower.h"

std::string lowerTriangle(int length){
	if (length <= 0) return "";
	std::string asteriskLowerTriangle = "";

	int currentSize = 1;
	while (currentSize <= length){
		for (int i=1; i<=currentSize; i++){
			asteriskLowerTriangle += "*";
		}
		
		asteriskLowerTriangle += "\n";
		currentSize++;
	}
	
	return asteriskLowerTriangle;
}
