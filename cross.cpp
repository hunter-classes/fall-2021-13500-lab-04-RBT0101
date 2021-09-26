#include <iostream>
#include "cross.h"

std::string cross(int size){
	if (size <= 0 || !size) return "";
	
	int left = 0;
	int right = size-1;
	int spaceOffset = 0;

	int temp = 0;
	std::string asteriskCross = "";
	//Upper Half
	while (left <= right) {
		//Generate space offset on left then append left asterisk
		while (spaceOffset < left){
			asteriskCross += " ";
			spaceOffset++;
		}
		asteriskCross += "*";
		temp = left;
		
		//Generate spaces between left and right (exclusive) then append right asterisk
		while (temp+1 < right){
			temp++;
			asteriskCross += " ";
			
		}
		//In case size is odd, we only want to add one asterisk in the middle
		if (left != right) asteriskCross += "*";
		
		//Reduce the space offset from the right to 0 to balance left and right
		while (spaceOffset > 0){
			asteriskCross += " ";
			spaceOffset--;
		}
		
		asteriskCross += "\n";
		left++;
		right--;
	}
	
	//If size is odd, we will format the (left, right) accordingly for the lower part, otherwise format for the even size
	if (size % 2 == 1){
		left = ((size-1)/2)-1;
		right = ((size-1)/2)+1;
	}
	else{
		left = (size-1)/2;
		right = ((size-1)/2)+1;
	}

	//Lower Half
	while ((left >= 0) && (right < size)) {
		//Generate space offset on left then append left asterisk
		while (spaceOffset < left){
			asteriskCross += " ";
			spaceOffset++;
		}
		asteriskCross += "*";
		temp = left;
		
		//Generate spaces between left and right (exclusive) then append right asterisk
		while (temp+1 < right){
			asteriskCross += " ";
			temp++;
		}
		asteriskCross += "*";
	
		//Reduce the space offset from the right to 0 to balance left and right
		while (spaceOffset > 0){
			asteriskCross += " ";
			spaceOffset--;
		}
		
		asteriskCross += "\n";
		left--;
		right++;
	}
	
	return asteriskCross;
}
