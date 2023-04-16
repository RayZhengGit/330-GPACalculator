#include "pch.h"
#include "gtest/gtest.h"
#include <iostream>

using namespace std;



float GPACalc(float grade1, float grade2, float grade3, float grade4, float grade5) {
	return 0.0;
}

//this should be a void but I couldn't figure out how to test what the console outputs so it returns a string for its respose
//this function should  Ask who the user’s favorite teacher is and print a responce to what they say
//something like “They’re great” or something funny/snarky if the teacher is known and “I haven't had them before” for teacher inputs we don't have a specific thing for
string teacherResponse(string teacherName) {
	return "";
}

TEST(TestCase2, CalcTest) {
	float gpa = GPACalc(1, 1, 1, 1, 1);
	ASSERT_EQ(gpa, 3.04);
}

//if you think of a better/funnier result for Brian feel free to change the string 
TEST(TestCase2, TeacherResponseTest) {
	string result = teacherResponse("teacherName");
	ASSERT_EQ(result, "He's alright");
}