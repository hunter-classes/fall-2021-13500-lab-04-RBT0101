#include <iostream>
#include "upper.h"

std::string upperTriangle(int length){
	int currentSize = length;
	
	std::string asteriskUpperTriangle = "";
	while (currentSize >= 1){
		int temp = length - currentSize;
		while (temp > 0){
			asteriskUpperTriangle += " ";
			temp--;
		}
		
		for (int i=(length-currentSize); i<length; i++){
			asteriskUpperTriangle += "*";
		}
		
		asteriskUpperTriangle += "\n";
		currentSize--;
	}
	
	return asteriskUpperTriangle;
}
