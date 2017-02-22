#include "Grading.h"
#include "PointScore.h"
#include "QuestionAnswer.h"

Grading::Grading() {

}

Grading::~Grading() {

}

void Grading::SumOfGrade(double gradeInput) {
	
	if (gradeInput > veryHighGrade) {
		cout << " this is unbelievable" << endl;
	}
	else if (gradeInput > highGrade) {
		cout << " this is almost unbelieveable" << endl ;
	}

	else if (gradeInput > veryGoodGrade) {
		cout << " this is super" << endl ;
	}
	else if (gradeInput > goodGrade) {
		cout << " this very good" << endl ;
	}
	else if (gradeInput > fairGrade) {
		cout << " this is this is a good result" << endl ;
	}
	else if (gradeInput > notSoGoodGrade) {
		cout << " this is on the good side" << endl ;
	}
	else if (gradeInput > badGrade) {
		cout << " this is fine" << endl ;
	}
	else if (gradeInput > terribleGrade) {
		cout << " this is not so good" << endl;
	}
	else
		cout << " bad grade" << endl;
}