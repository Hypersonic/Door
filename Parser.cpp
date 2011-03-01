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

std::string Parser::Tokenize (std::string input){
	std::string output = input;	//Placeholder
	 return output;
 }

std::string Parser::TokenParser (std::string input) {
	std::string output = input;	//Placeholder
	return output;
}

void Parser::ExecuteInput (std::string input) {
	std::string output = input;	//Placeholder
}
