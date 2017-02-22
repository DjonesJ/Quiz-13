#include "PointScore.h"
#include "QuestionAnswer.h"
#include "Grading.h"


using namespace std::chrono;
QuestionAnswer questionAnswer;


PointScore::PointScore() {
}

PointScore::~PointScore() {
}

double PointScore::Points() {

	int n = 1;
	auto t1 = system_clock::now();
	for (int i = 0; i < n; i++) {

		double score = questionAnswer.loopFunction();

		auto t2 = system_clock::now();
		cout << "this session took: " << duration_cast<milliseconds> (t2 - t1).count() << "miliseconds" << endl;
		double currentScore = score / (duration_cast<milliseconds> (t2 - t1).count()/100);
		cout << "score for you: " << currentScore;

		return currentScore;
	}
	return 0.0;
}
