//What's to fix:
//Fix bug in case of choose wrong choice in every menu
//
#include "class.hpp"
#include <iostream>
#include <windows.h>

using namespace std;

int main ()
{

    /////////////////////////////////////////////////////////////
    ///////////////////////DATA DATA DATA ///////////////////////
    /////////////////////////////////////////////////////////////

    char choiceMenu;
    char choiceChapter;
    char choiceTopic;
    char choicePart;
    char choiceMode;
    char choiceQuizMode;
    int questions_nr;
    string language;

    /////////////////////////////////////////////////////////////
    ///////////////CHOICE THE LANGUAGE AND OTHERS ///////////////
    /////////////////////////////////////////////////////////////
    choiceMenu = mainMenu();
    switch(choiceMenu)
    {
    /////////////////////////ENGLISCH////////////////////////////
        case '1':
                  language = "ang";
                  choiceChapter = EngChapterChoice();
                  choiceTopic = EngTopicChoice();
        break;
    /////////////////////////DEUTSCH/////////////////////////////
        case '2':
                  choiceChapter = DeuChapterChoice();
                  choiceTopic = DeuTopicChoice();
                  choiceMode = DeuModeChoice();
    ////////////////////////WHOLE TOPIC//////////////////////////
                  if (choiceMode=='1') language = "deu";
    ///////////////////////DIVIDED TOPIC/////////////////////////
                  else if (choiceMode=='2')
                  {
                    language = "deu_parts";
                    choicePart = DeuPartTopicChoice(choiceChapter, choiceTopic);
                  }
        break;
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////

        case '9':
        exitMenu();
        break;

        default:
        wrongChoice();
        break;
    }


    /////////////////////////////////////////////////////////////
    //////////////////OPEN FILE AND START QUIZ///////////////////
    /////////////////////////////////////////////////////////////


    questions_nr = openFile(language, choiceChapter, choiceTopic, choicePart);
    choiceQuizMode = QuizModeChoice();

    //practising(questions_nr);
     quiz (questions_nr, choiceQuizMode);

    return 0;
}
