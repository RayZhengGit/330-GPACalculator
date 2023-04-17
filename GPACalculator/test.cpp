#include "pch.h"
#include "gtest/gtest.h"
#include <iostream>

GPACalculator calculator;

TEST(SpackTest, CalcTest) {
	float grade1 = 4.0;
	float grade2 = 3.5;
	float grade3 = 3.3;
	float grade4 = 1.7;
	float grade5 = 2.7;
	float gpa = calculator.GPACalc(grade1, grade2, grade3, grade4, grade5);

	ASSERT_FLOAT_EQ(gpa, 3.04);
}

//if you think of a better/funnier result for Brian feel free to change the string 
TEST(SpackTest, TeacherResponseTest) {
	string teacherName = "Brian Hall";
	string result = calculator.teacherResponse(teacherName);

	ASSERT_EQ(result, "He's alright");
}

TEST(RaymondTest, GPAResponse1) {
	ASSERT_EQ(calculator.respondToGPA(4.0), "A PERFECT GPA!!!!");
}
TEST(RaymondTest, GPAResponse2) {
	ASSERT_EQ(calculator.respondToGPA(3.9), "Excellent! You have a GPA in the A range.");
}
TEST(RaymondTest, GPAResponse3) {
	ASSERT_EQ(calculator.respondToGPA(2.9), "Good job! You have a GPA in the B range.");
}
TEST(RaymondTest, GPAResponse4) {
	ASSERT_EQ(calculator.respondToGPA(1.9), "You have a GPA in the C range. Keep working hard!");
}
TEST(RaymondTest, GPAResponse5) {
	ASSERT_EQ(calculator.respondToGPA(.9), "Your GPA is in the D range. You may need to improve.");
}
TEST(RaymondTest, GPAResponse6) {
	ASSERT_EQ(calculator.respondToGPA(0), "You have a failing GPA. Please see your academic advisor.");
}

TEST(RaymondTest, BrianModeResponse1) {
	calculator.changeBrianMode();
	ASSERT_EQ(calculator.respondToGPA(4.0), "Wow, you must be a genius or whater!");
}

TEST(RaymondTest, BrianModeResponse2) {
	ASSERT_EQ(calculator.respondToGPA(3.9), "Excellent work, overachiever!");
}

TEST(RaymondTest, BrianModeResponse3) {
	ASSERT_EQ(calculator.respondToGPA(2.9), "Good job, but let's be honest, we both know you can do better.");
}

TEST(RaymondTest, BrianModeResponse4) {
	ASSERT_EQ(calculator.respondToGPA(1.9), "Looks like you've been enjoying college life a little too much.");
}

TEST(RaymondTest, BrianModeResponse5) {
	ASSERT_EQ(calculator.respondToGPA(.9), "You never go to class what did you expect?");
}

TEST(RaymondTest, BrianModeResponse6) {
	ASSERT_EQ(calculator.respondToGPA(0), "Why are you still here?");
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}