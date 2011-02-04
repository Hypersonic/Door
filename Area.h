/*
 Syntax:
 Area ExampleArea (Area Number as int, Area Description as string)
 
 ExampleArea.GetNumber()
 Returns the Area's number as int.
 
 ExampleArea.GetDescription()
 Returns the Area's description as string.
 */

#ifndef AREA_H
#define AREA_H


class Area {
private:
	int m_nNumber; // Area's number.
	std::string m_sDescription; // Area's description.
public:
	Area (int nNumber=0, std::string sDescription="") : m_nNumber(nNumber), m_sDescription(sDescription) { } // Class constructor.
	int GetNumber() const { return m_nNumber; }
	std::string GetDescription() const { return m_sDescription; }
	bool InArea(Character cCharacter);
};

#endif