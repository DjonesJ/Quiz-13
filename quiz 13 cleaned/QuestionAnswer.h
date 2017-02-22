#pragma once
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <iterator>
#include <fstream>
using namespace std;

class QuestionAnswer {
public:
	
	QuestionAnswer();
	~QuestionAnswer();
	
	double QuestionAnswer::loopFunction();
	vector <string> questionsVector;
private:

	string answerInput;
	vector <string> answerVector;
	vector <string> answerVectorIncorrect;
	string line;
	string inswer;
	vector <string> rangeOfCount;

};