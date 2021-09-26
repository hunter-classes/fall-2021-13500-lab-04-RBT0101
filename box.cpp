#include <iostream>
#include "box.h"
std::string box(int width, int height){
	std::cout << "\n";	//Separator
	
	std::cout << "Input width: " << width << "\n";
	std::cout << "Input height: " << height << "\n\n";
	
	std::cout << "Shape: \n";	//Separator
	
	std::string asteriskBox = "";
	for (int h=1; h<= height; h++){
		for (int w=1; w<=width; w++){
			asteriskBox += "*";
		}
		asteriskBox += "\n";
	}
	
	return asteriskBox;
}
