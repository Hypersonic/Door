#include <iostream>
#include <string>
#include "Character.h"
#include "Door.h"

/*
 NOTE:
 Yes, I realize that the if statements in enter() could be more efficiently
 done using switch statements. But switch statements require constants for
 case values, and GetSide1() and GetSide2() are not constants. When I try to
 make constants from them it doesn't seem to work either. Strange? Hmmm...
 Chaining if statements will suffice.
																		--HG
 
 Alright apparantly they don't because this function doesn't work.
 */

void Door::enter(Character cCharacter) { // Function to allow a character to enter the door.
	
	if (cCharacter.GetArea()==GetSide1()) { // If the character is on the first side of the door...
		cCharacter.SetArea(GetSide2()); // Bring them to the second side.
		std::cout << "You enter the door." << std::endl; } // And tell them that.
	
	else { // If they aren't on the first side of the door, run another check:
		
	if (cCharacter.GetArea()==GetSide2()) { // If the character is on the second side of the door...
		cCharacter.SetArea(GetSide1()); // Bring them to the first side.
		std::cout << "You enter the door." << std::endl; } // And tell them that.
		
		else { // If the character is not on the first or second side of the door...
			std::cout << "ERROR: Player is not on either side of door." << std::endl; // Tell them that crazy shit be goin on.
			std::exit(1); } } // And perform a halt.
}
