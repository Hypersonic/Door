/*
 Configuration File
 Includes all constants used in declarations at the beginning of the game.
 */

const string PlayerName = "Player"; // The player's name.
const int OpeningPlayerArea = 1; // The area in which the player is at the beginning of the game.

const string Description_Area1 = "a long hallway with double doors at one end and an elevator at the other."; // Area 1's description.
const string Description_Area2 = "a wide room with two couches and a desk."; // Area 2's description.


// Door 1:
const bool Openable_Door1 = true; // Can Door 1 be opened?
const int FirstSide_Door1 = 1;    // The area on the first side of Door 1.
const int SecondSide_Door1 = 2;   // The area on the second side of Door 1.
const bool Locked_Door1 = false;  // Is Door 1 locked?
const int KeyID_Door1 = 0;        // What is the ID of the key for Door 1? (if none, write 0)