/*
 DOOR Indev
 Rev. 3
 
 DOOR: A Text-Based Objective Game
 
 Copyright © 2011 Herbert F. Gilman and Josh Hofing
 
 
 The program is supposed to print a player and their location,
 then move them through a door into another area, and then print
 the player and the changed location. Unfortunately, it doesn't
 work yet.
 
 The problem can be in the Door::enter function or something else entirely.
 */

#include <iostream>
#include <string>
#include "Character.h"
#include "Area.h"
#include "Door.h"

int main()
{
	using namespace std; // We are in the standard namespace.
	#include "Config.h" // Configure pregame constants.
	#include "Declarations.h" // Initialize ingame objects.
	
	cout << cPlayer.GetName() << " is standing in Area " << cPlayer.GetArea() << "." << endl;
	cPlayer.enter(Door1.GetSide1());
	cout << cPlayer.GetName() << " is standing in Area " << cPlayer.GetArea() << "." << endl;
	cPlayer.enter(Door1.GetSide2());
	cout << cPlayer.GetName() << " is standing in Area " << cPlayer.GetArea() << "." << endl;	
	
// BEGIN GAME LOOP SECTION -- NOT READY FOR USE
	
/*	
	
	bool bGame = true; // This is the variable that control the game loop.
	
	
	while (bGame) // Begin the game loop.
	{
		
		cout << "You are standing in an industrially-lit hallway. There is a door at the end. Go into the next room." << endl;
		
		bGame = false;
	
	}
	
	
	cout << "Game over.";

*/	
	
	return 0;
}
