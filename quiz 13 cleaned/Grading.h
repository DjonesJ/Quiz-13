#pragma once


class Grading {
public:

	Grading();
	//Grading(const Grading&);
	~Grading();

	void Grading::SumOfGrade(double gradInput);
private:
	const double veryHighGrade = 1000;
	const double highGrade = 500;
	const double veryGoodGrade = 300;
	const double goodGrade = 200;
	const double fairGrade = 150;
	const double notSoGoodGrade = 100;
	const double badGrade = 50;
	const double terribleGrade = 20;
	
};
