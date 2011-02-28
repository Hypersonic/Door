/*
 *  Character.cpp
 *  door
 *
 *  Created by Josh Hofing on 2/27/11.
 *  (here it tried to attribute the code to my school, lol. Silly Xcodes)
 *
 */
#include <iostream>
#include <string>
#include "Door.h"
#include "Character.h"



void Character::enter (Door cDoor) {

//	SetArea(cDoor.GetSide2());

	
	if (GetArea()==cDoor.GetSide1()) { // If the character is on the first side of the door...
		SetArea(cDoor.GetSide2()); // Bring them to the second side.
		std::cout << "You enter the door, going to Area " << cDoor.GetSide2() << std::endl; } // And tell them that.
	
	else {
		
		
		
		if (GetArea()==cDoor.GetSide2()) { // If the character is on the second side of the door...
			SetArea(cDoor.GetSide1()); // Bring them to the first side.
			std::cout << "You enter the door, going to Area " << cDoor.GetSide1() << std::endl;  // And tell them that.
		}
		else { // If the character is not on the first or second side of the door...
			std::cout << "ERROR: Player is not on either side of door." << std::endl; // Tell them that crazy shit be goin on.
			std::cout << "I'd exit() right now but I can't." << std::endl; } // Halt removed. Replaced with message.
	}

	
	
	
	
}
void Character::SetArea(int nArea) { 
	m_nArea = nArea;
}
int Character::GetArea() {
	return m_nArea;
}