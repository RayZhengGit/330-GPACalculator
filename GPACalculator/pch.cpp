//
// pch.cpp
//

#include "pch.h"

GPACalculator::GPACalculator()
{
	isBrianMode = false;
}

float GPACalculator::GPACalc(float grade1, float grade2, float grade3, float grade4, float grade5)
{
	return 0.0f;
}

//this should be a void but I couldn't figure out how to test what the console outputs so it returns a string for its respose
//this function should  Ask who the user’s favorite teacher is and print a responce to what they say
//something like “They’re great” or something funny/snarky if the teacher is known and “I haven't had them before” for teacher inputs we don't have a specific thing for
string GPACalculator::teacherResponse(string teacherName)
{
	return string();
}

// maybe make these messages more encouraging that way you 
// have more material to work with in "Brian Mode"
string GPACalculator::respondToGPA(float gpa)
{
	return string();
}

// change the message being printed from respondToGPA 
// from nice messages to things that Brian would say
// you can change the function signiture to whatever would work best
void GPACalculator::changeBrianMode()
{

}


