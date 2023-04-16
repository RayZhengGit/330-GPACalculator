//
// pch.h
//

#pragma once

#include "gtest/gtest.h"
#include <string>

using namespace std;

class GPACalculator {
public:
	GPACalculator();

	void menu();

	float GPACalc(float grade1, float grade2, float grade3, float grade4, float grade5);
	string teacherResponse(string teacherName);
	string respondToGPA(float gpa);
	void changeBrianMode();

	bool getIsBrianMode() { return isBrianMode; }
private:
	bool isBrianMode;
};