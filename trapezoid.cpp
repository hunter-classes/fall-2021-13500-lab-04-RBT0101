#include <iostream>
#include "trapezoid.h"

std::string trapezoid(int width, int height){
	if ((width - (height-1)*2) <= 0) return "Impossible shape!";
	
	std::string asteriskTrapezoid = "";
	int w = width;
	int h = height;
	int step = 0;
	
	int temp = 0;
	while (h > 0){
		while (temp < step){
			asteriskTrapezoid += " ";
			temp++;
		}
		
		while (temp < w){
			asteriskTrapezoid += "*";
			temp++;
		}
		
		temp = step;
		while (temp > 0){
			asteriskTrapezoid += " ";
			temp--;
		}
		
		asteriskTrapezoid += "\n";
		step++;
		w -= 1;
		h  -= 1;
	}
	
	return asteriskTrapezoid;
}
