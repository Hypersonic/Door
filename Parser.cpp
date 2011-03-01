/*
 *  Parser.cpp
 *  door
 *
 *  This Class parses strings, which will be fed from input, into commands that the game will take.
 *	It basically has to go through a few steps:
 *	1) Tokenize the input
 *	2) Read what command is given
 *	3) Read the arguements to the command
 *	4) Call the appropriate function as determined from steps 2 & 3
 *
 */

#include <iostream>
#include <string>
#include "Parser.h"
void Parser::Parse (std::string input){
	std::string output = Tokenize(input);
	output = TokenParser(output);
	ExecuteInput(output);
}
/*
 * Tokenize is responsible for tokenizing, or breaking up into its' component parts (i.e: words) the input string.
 * it returns the output (currently as a string, this will probably be changed to an array)
 */
std::string Parser::Tokenize (std::string input){
	std::string output = input;	//Placeholder
	 return output;
 }
/*
 * Token Parser takes the tokenized input, and gets out the commands and arguments given.
 * If there is no proper command given, it will trigger something to ask for new input, so that we don't waste the player's turn.
 * It will return a string, which is the command that will be passed to ExecuteInput()
 */
std::string Parser::TokenParser (std::string input) {
	std::string output = input;	//Placeholder
	return output;
}
/*
 * ExecuteInput deals with taking the output of TokenParser, and running it as game-compatible code. It this code cannot be properly run (i.e: The door the player is trying to enter is locked),
 * ExecuteInput will restart the input loop.
 */
void Parser::ExecuteInput (std::string input) {
	std::string output = input;	//Placeholder
}
