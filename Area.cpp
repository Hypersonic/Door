/*
 Syntax:
 Area ExampleArea (Area Number as int, Area Description as string)
 
 ExampleArea.GetNumber()
 Returns the Area's number as int.
 
 ExampleArea.GetDescription()
 Returns the Area's description as string.
 */
#include <string>
#include "Character.h"
#include "Area.h"

bool Area::InArea(Character cCharacter)
{
	if (cCharacter.GetArea() == m_nNumber) {
		return true;
	}
	else {
		return false;
	}

}
