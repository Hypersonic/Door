/*
 Syntax:
 Door ExampleDoor(ID as int, openable? as bool, area on first side as int, area on second side as int, locked? as bool, keyid as int)
 
 
 ACCESS FUNCTIONS:
 GetID() returns door ID as int
 Opens() returns whether or not it opens as a bool
 GetSide1() returns area of first side
 GetSide2() returns area of second side
 IsLocked() returns whether it is locked as bool
 GetKeyID() returns key ID as int
 
 
 OTHER FUNCTIONS:
 enter(Character) moves a character from one side of the door to the other WHETHER OR NOT IT IS OPEN
 */

#ifndef DOOR_H
#define DOOR_H

class Door {
	
private:
	int m_nID;
	bool m_bOpens;
	int m_nSide1;
	int m_nSide2;
	bool m_bLocked;
	int m_nKeyID;
	
public:
	// Constructor
	Door(int nID=0, bool bOpens=true, int nSide1=0, int nSide2=0, bool bLocked=false, int nKeyID=0) : m_nID(nID), m_bOpens(bOpens), m_nSide1(nSide1), m_nSide2(nSide2), m_bLocked(bLocked), m_nKeyID(nKeyID) { }
	
	// Access functions
	int GetID() const { return m_nID; }
	bool Opens() const { return m_bOpens; }
	int GetSide1() const { return m_nSide1; }
	int GetSide2() const { return m_nSide2; }
	bool IsLocked() const { return m_bLocked; }
	int GetKeyID() const { return m_nKeyID; }
	
	// Use functions.
	void enter(Character cCharacter);
	
};

#endif