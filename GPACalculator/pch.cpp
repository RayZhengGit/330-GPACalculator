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
	float total = grade1 + grade2 + grade3 + grade4 + grade5;

	return total / 5;
}

//this should be a void but I couldn't figure out how to test what the console outputs so it returns a string for its respose
//this function should  Ask who the user’s favorite teacher is and print a responce to what they say
//something like “They’re great” or something funny/snarky if the teacher is known and “I haven't had them before” for teacher inputs we don't have a specific thing for
string GPACalculator::teacherResponse(string teacherName)
{
	string response = "";
	if (teacherName == "Brian Hall") {
		response = "He's alright";
	}
	return response;
}

// maybe make these messages more encouraging that way you 
// have more material to work with in "Brian Mode"
string GPACalculator::respondToGPA(float gpa)
{
	if (getIsBrianMode()){
		if (gpa == 4.0) {
			return("Wow, you must be a genius or whater!");
		}
		else if (gpa < 4.0 && gpa >= 3.0) {
			return("Excellent work, overachiever!");
		}
		else if (gpa < 3.0 && gpa >= 2.0) {
			return("Good job, but let's be honest, we both know you can do better.");
		}
		else if (gpa < 2.0 && gpa >= 1.0) {
			return("Looks like you've been enjoying college life a little too much.");
		}
		else if (gpa < 1.0 && gpa > 0) {
			return("You never go to class what did you expect?");
		}
		else if (gpa == 0) {
			return("Why are you still here?");
		}
	}
	else {
		if (gpa == 4.0) {
			return("A PERFECT GPA!!!!");
		}
		else if (gpa < 4.0 && gpa >= 3.0) {
			return("Excellent! You have a GPA in the A range.");
		}
		else if (gpa < 3.0 && gpa >= 2.0 ) {
			return("Good job! You have a GPA in the B range.");
		}
		else if (gpa < 2.0 && gpa >= 1.0) {
			return("You have a GPA in the C range. Keep working hard!");
		}
		else if (gpa < 1.0 && gpa > 0) {
			return("Your GPA is in the D range. You may need to improve.");
		}
		else if (gpa == 0) {
			return("You have a failing GPA. Please see your academic advisor.");
		}
	}
	return("OUT OF RANGE");
}

// change the message being printed from respondToGPA 
// from nice messages to things that Brian would say
// you can change the function signiture to whatever would work best
void GPACalculator::changeBrianMode()
{
	isBrianMode = !isBrianMode;
}

