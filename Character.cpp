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
#include "Door.cpp"
#include "Character.h"
void Character::enter (int cDoor) {

	SetArea(cDoor);
	
}
void Character::SetArea(int nArea) { 
	m_nArea = nArea;
}
int Character::GetArea() {
	return m_nArea;
}