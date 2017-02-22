#include "QuestionAnswer.h"
#include <sstream>

QuestionAnswer::QuestionAnswer() {

	cout << "hi and welcome to the quiz where you are suppose to answer \"yes\" or \"no\" to 13 questions REMEMBER LOWERCASE LETTERS: " << endl << endl;

	

	ifstream inFile;
	ifstream inswerFile;
	ifstream incorrectAnswerFile;

	inFile.open("Questions.txt");
	inswerFile.open("Answer.txt");
	incorrectAnswerFile.open("AnswerIncorrect.txt");
	

	if (!inFile) {
		cout << "Error opening the file";
	}
	while (getline(inFile, line)) {
		questionsVector.push_back(line);
	}
	
	for (int i = 0; i<questionsVector.size(); ++i) {
		answerVector.push_back("Answer.txt");
		getline(inswerFile, answerVector[i]);
		//cout << answerVector[i] << endl;
	}

	for (int i = 0; i < questionsVector.size(); ++i) {
		answerVectorIncorrect.push_back("AnswerIncorrect.txt");
		getline(incorrectAnswerFile, answerVectorIncorrect[i]);
		//cout << answerVectorIncorrect[i] << endl;
	}

	
	rangeOfCount = { "nine ", "eight ", "seven ", "six ", "five ", "four ", "three ", "two ", "one ", "zero " };
	
	
	answerInput = " ";
}

QuestionAnswer::~QuestionAnswer() {
};
double QuestionAnswer::loopFunction() {
	
	double sum = 0;

		for (int i = 0; i < questionsVector.size(); i++) {
			
			cout << questionsVector[i] << endl;
			cin >> answerInput;
			
			if (answerInput == answerVector[i]) {
				cout << "that is correct" << endl;

				sum += 4000;
			}
			else if (answerInput == answerVectorIncorrect[i]) {
				cout << "it is incorrect" << endl;
				sum += 0;
			}
			else 

				for (vector<string>::iterator it = rangeOfCount.begin(); it != rangeOfCount.end(); ++it) {

					cout << "I don't know that input, if you want to try again type \"yes\" \n " << "for next question type \"no\": " << *it << endl;
					cin >> answerInput;
					sum += 0;
					if (answerInput == "yes" ) {
						i--;
						break;
					}			
					else if (answerInput == "no") {
						sum += 0;
						break;
					}
			}
	}
	return sum;
}