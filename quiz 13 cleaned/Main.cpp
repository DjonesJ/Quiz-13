#include "QuestionAnswer.h"
#include "PointScore.h"
#include "Grading.h"
int main() {

	PointScore pointScore;
	Grading grading;
	double inScore = pointScore.Points();
	grading.SumOfGrade(inScore);
	
	
	system("pause");


	return 0;
}