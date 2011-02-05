/*
 Syntax:
 Character ExampleCharacter (Character Name as string, Area character is in)
 
 ExampleCharacter.GetName()
 Returns Character Name as string.
 
 ExampleCharacter.GetArea()
 Returns Character's Area as int.
 
 ExampleCharacter.SetArea(Character's area)
 Sets character's new area.
 */

#ifndef CHARACTER_H
#define CHARACTER_H


class Character {
private:
	std::string m_sName; // Character name variable.
	int m_nArea; // Character area variable.
	
public:
	
	Character (std::string sName="", int nArea=0) : m_sName(sName), m_nArea(nArea) { } // Class constructor.
	
	std::string GetName() const { return m_sName; } // Access function.
	int GetArea() const { return m_nArea; } // Access function.
	
	void SetArea(int nArea) { m_nArea = nArea; } // Function to set character's area.
};

#endif
