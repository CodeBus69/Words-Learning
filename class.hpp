using namespace std;
#include <iostream>

//////////////////SOFTWARE SOFTWARE SOFTWARE/////////////////////

int openFile(string language, char chapter, char topic, char part);
//open files with excercises data and return number of all questions in topic
int myRate(float allPoints, float myPoints);
//changes number of all questions in topic and user's correct answers to rate in 1-6 scale

////////////////// CHOICES CHOICES CHOICES //////////////////////

char EngChapterChoice();
char EngTopicChoice();
char DeuChapterChoice();
char DeuTopicChoice();
char DeuModeChoice();
char DeuPartTopicChoice(char choiceChapter, char choiceTopic);
char QuizModeChoice();
char SequenceModeChoice();
int tellMeQuestionsNumber();

////////////////////// QUIZ QUIZ QUIZ ///////////////////////////

void quiz (int questions_nr, char mode);
void showMeTheList(int questions_nr);
void practising(int questions_nr);
//quiz mode with random answers from that same topic but number of questions = 15, feel like at the test :)

////////////////INTERFACE INTERFACE INTERFACE////////////////////

int main();
char mainMenu();
void exitMenu();
void wrongChoice();

////////////////////TESTED TESTED TESTED/////////////////////////

string changeMyName(string language, char chapter, char topic);
//converting language, chapter and topic numbers to real topic name, like "czynnosci", "zawody"
//it's in progress

/////////////////////////END END END/////////////////////////////


/////GLOBAL VARIABLES/////







