/*
 *  Parser.h
 *  door
 *
 *  You should only have to call Parse(inputString) with this, and it should do all the work for you.
 *	i.e.: Game loop takes input, puts in it Parser.Parse(input) and then assumes any necessary parsing has been done.
 *	
 *
 */
#ifndef PARSER_H
#define PARSER_H

class Parser {

private:
	std::string Tokenize (std::string input);
	std::string TokenParser (std::string input);
	void ExecuteInput (std::string input);

public:
	
	void Parse (std::string input);



};
#endif