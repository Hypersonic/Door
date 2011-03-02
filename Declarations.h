/*
 Declarations File
 Includes all objects declared at the beginning of the game.
 These variables are configured in Config.h
 */

Parser cParser;			// The input Parser
Character cPlayer (PlayerName, OpeningPlayerArea); // The player.
Area Area1 (1, Description_Area1); // Area 1.
Area Area2 (2, Description_Area2); // Area 2.
Door Door1 (1, Openable_Door1, FirstSide_Door1, SecondSide_Door1, Locked_Door1, KeyID_Door1); // Door 1.
