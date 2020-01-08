#include "class.hpp"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

HANDLE colorMenu=GetStdHandle(STD_OUTPUT_HANDLE);
string ang[100], pol [100];

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int openFile(string language, char chapter, char topic, char part) // returns number of questions
{

    fstream plik;

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////ENGLISH ENGLISH ENGLISH////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    if (language=="ang")
    {
        if (chapter=='1')
        {
            if (topic=='1') plik.open("data/ang/chapter1/topic_a.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/ang/chapter1/topic_b.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/ang/chapter1/topic_c.txt",       std::ios::in | std::ios::out );
            if (topic=='4') plik.open("data/ang/chapter1/topic_d.txt",       std::ios::in | std::ios::out );
            if (topic=='5') plik.open("data/ang/chapter1/topic_e.txt",       std::ios::in | std::ios::out );
            if (topic=='6') plik.open("data/ang/chapter1/topic_f.txt",       std::ios::in | std::ios::out );
            if (topic=='7') plik.open("data/ang/chapter1/topic_g.txt",       std::ios::in | std::ios::out );
            if (topic=='8') plik.open("data/ang/chapter1/topic_h.txt",       std::ios::in | std::ios::out );
            if (topic=='9') plik.open("data/ang/chapter1/topic_i.txt",       std::ios::in | std::ios::out );
            if (topic=='s') plik.open("data/ang/chapter1/mature_skills.txt", std::ios::in | std::ios::out );
            if (topic=='m') plik.open("data/ang/chapter1/module.txt",        std::ios::in | std::ios::out );
        }
        if (chapter=='2')
        {
            if (topic=='1') plik.open("data/ang/chapter2/topic_a.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/ang/chapter2/topic_b.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/ang/chapter2/topic_c.txt",       std::ios::in | std::ios::out );
            if (topic=='4') plik.open("data/ang/chapter2/topic_d.txt",       std::ios::in | std::ios::out );
            if (topic=='5') plik.open("data/ang/chapter2/topic_e.txt",       std::ios::in | std::ios::out );
            if (topic=='6') plik.open("data/ang/chapter2/topic_f.txt",       std::ios::in | std::ios::out );
            if (topic=='7') plik.open("data/ang/chapter2/topic_g.txt",       std::ios::in | std::ios::out );
            if (topic=='8') plik.open("data/ang/chapter2/topic_h.txt",       std::ios::in | std::ios::out );
            if (topic=='9') plik.open("data/ang/chapter2/topic_i.txt",       std::ios::in | std::ios::out );
            if (topic=='s') plik.open("data/ang/chapter2/mature_skills.txt", std::ios::in | std::ios::out );
            if (topic=='m') plik.open("data/ang/chapter2/module.txt",        std::ios::in | std::ios::out );
        }
        if (chapter=='3')
        {
            if (topic=='1') plik.open("data/ang/chapter3/topic_a.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/ang/chapter3/topic_b.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/ang/chapter3/topic_c.txt",       std::ios::in | std::ios::out );
            if (topic=='4') plik.open("data/ang/chapter3/topic_d.txt",       std::ios::in | std::ios::out );
            if (topic=='5') plik.open("data/ang/chapter3/topic_e.txt",       std::ios::in | std::ios::out );
            if (topic=='6') plik.open("data/ang/chapter3/topic_f.txt",       std::ios::in | std::ios::out );
            if (topic=='7') plik.open("data/ang/chapter3/topic_g.txt",       std::ios::in | std::ios::out );
            if (topic=='8') plik.open("data/ang/chapter3/topic_h.txt",       std::ios::in | std::ios::out );
            if (topic=='9') plik.open("data/ang/chapter3/topic_i.txt",       std::ios::in | std::ios::out );
            if (topic=='s') plik.open("data/ang/chapter3/mature_skills.txt", std::ios::in | std::ios::out );
            if (topic=='m') plik.open("data/ang/chapter3/module.txt",        std::ios::in | std::ios::out );
        }
        if (chapter=='4')
        {
            if (topic=='1') plik.open("data/ang/chapter4/topic_a.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/ang/chapter4/topic_b.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/ang/chapter4/topic_c.txt",       std::ios::in | std::ios::out );
            if (topic=='4') plik.open("data/ang/chapter4/topic_d.txt",       std::ios::in | std::ios::out );
            if (topic=='5') plik.open("data/ang/chapter4/topic_e.txt",       std::ios::in | std::ios::out );
            if (topic=='6') plik.open("data/ang/chapter4/topic_f.txt",       std::ios::in | std::ios::out );
            if (topic=='7') plik.open("data/ang/chapter4/topic_g.txt",       std::ios::in | std::ios::out );
            if (topic=='8') plik.open("data/ang/chapter4/topic_h.txt",       std::ios::in | std::ios::out );
            if (topic=='9') plik.open("data/ang/chapter4/topic_i.txt",       std::ios::in | std::ios::out );
            if (topic=='s') plik.open("data/ang/chapter4/mature_skills.txt", std::ios::in | std::ios::out );
            if (topic=='m') plik.open("data/ang/chapter4/module.txt",        std::ios::in | std::ios::out );
        }
        if (chapter=='5')
        {
            if (topic=='1') plik.open("data/ang/chapter5/topic_a.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/ang/chapter5/topic_b.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/ang/chapter5/topic_c.txt",       std::ios::in | std::ios::out );
            if (topic=='4') plik.open("data/ang/chapter5/topic_d.txt",       std::ios::in | std::ios::out );
            if (topic=='5') plik.open("data/ang/chapter5/topic_e.txt",       std::ios::in | std::ios::out );
            if (topic=='6') plik.open("data/ang/chapter5/topic_f.txt",       std::ios::in | std::ios::out );
            if (topic=='7') plik.open("data/ang/chapter5/topic_g.txt",       std::ios::in | std::ios::out );
            if (topic=='8') plik.open("data/ang/chapter5/topic_h.txt",       std::ios::in | std::ios::out );
            if (topic=='9') plik.open("data/ang/chapter5/topic_i.txt",       std::ios::in | std::ios::out );
            if (topic=='s') plik.open("data/ang/chapter5/mature_skills.txt", std::ios::in | std::ios::out );
            if (topic=='m') plik.open("data/ang/chapter5/module.txt",        std::ios::in | std::ios::out );
        }
        if (chapter=='6')
        {
            if (topic=='1') plik.open("data/ang/chapter6/topic_a.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/ang/chapter6/topic_b.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/ang/chapter6/topic_c.txt",       std::ios::in | std::ios::out );
            if (topic=='4') plik.open("data/ang/chapter6/topic_d.txt",       std::ios::in | std::ios::out );
            if (topic=='5') plik.open("data/ang/chapter6/topic_e.txt",       std::ios::in | std::ios::out );
            if (topic=='6') plik.open("data/ang/chapter6/topic_f.txt",       std::ios::in | std::ios::out );
            if (topic=='7') plik.open("data/ang/chapter6/topic_g.txt",       std::ios::in | std::ios::out );
            if (topic=='8') plik.open("data/ang/chapter6/topic_h.txt",       std::ios::in | std::ios::out );
            if (topic=='9') plik.open("data/ang/chapter6/topic_i.txt",       std::ios::in | std::ios::out );
            if (topic=='s') plik.open("data/ang/chapter6/mature_skills.txt", std::ios::in | std::ios::out );
            if (topic=='m') plik.open("data/ang/chapter6/module.txt",        std::ios::in | std::ios::out );
        }

    }

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ////////////////////////////////////////DEUTSCH DEUTSCH DEUTSCH////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////

    else if (language=="deu"||language=="deu_parts")
    {
        if (chapter=='1')
        {
            if (topic=='1'&&language=="deu") plik.open("data/deu/chapter1/topic_1/whole.txt",       std::ios::in | std::ios::out );
            else if (language=="deu_parts")
            {
                if (part=='1') plik.open("data/deu/chapter1/topic_1/whole.txt",            std::ios::in | std::ios::out );
                else if (part=='1') plik.open("data/deu/chapter1/topic_1/whole.txt",       std::ios::in | std::ios::out );
                else if (part=='2') plik.open("data/deu/chapter1/topic_1/whole.txt",       std::ios::in | std::ios::out );
                else if (part=='3') plik.open("data/deu/chapter1/topic_1/whole.txt",       std::ios::in | std::ios::out );
                else if (part=='4') plik.open("data/deu/chapter1/topic_1/whole.txt",       std::ios::in | std::ios::out );
                else if (part=='5') plik.open("data/deu/chapter1/topic_1/whole.txt",       std::ios::in | std::ios::out );
            }

        }
        if (chapter=='2')
        {
            if (topic=='1') plik.open("data/deu/chapter2/topic_1.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/deu/chapter2/topic_2.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/deu/chapter2/topic_3.txt",       std::ios::in | std::ios::out );
        }
        if (chapter=='3')
        {
            if (topic=='1') plik.open("data/deu/chapter3/topic_1.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/deu/chapter3/topic_2.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/deu/chapter3/topic_3.txt",       std::ios::in | std::ios::out );
        }
        if (chapter=='4')
        {
            switch (topic)
            {

                 //////////////////////////////////////////TOPIC 1 TOPIC 1 TOPIC 1//////////////////////////////////////////
                 case '1':


                      if (language=="deu") plik.open("data/deu/chapter4/topic_1/whole.txt",       std::ios::in | std::ios::out );

                      else if (language =="deu_parts")
                      {
                               if (part=='1') plik.open("data/deu/chapter4/topic_1/czynnosci.txt",               std::ios::in | std::ios::out );
                          else if (part=='2') plik.open("data/deu/chapter4/topic_1/przymiotniki.txt",            std::ios::in | std::ios::out );
                          else if (part=='3') plik.open("data/deu/chapter4/topic_1/warunki_zatrudnienia.txt",    std::ios::in | std::ios::out );
                          else if (part=='4') plik.open("data/deu/chapter4/topic_1/wyrazenia__zwroty.txt",       std::ios::in | std::ios::out );
                          else if (part=='5') plik.open("data/deu/chapter4/topic_1/zawody.txt",                  std::ios::in | std::ios::out );
                      }

                      break;



                 case '2':
                 //////////////////////////////////////////TOPIC 2 TOPIC 2 TOPIC 2//////////////////////////////////////////

                      if (language=="deu") plik.open("data/deu/chapter4/topic_1/whole.txt",                      std::ios::in | std::ios::out );

                      else if (language =="deu_parts")
                      {
                               if (part=='1') plik.open("data/deu/chapter4/topic_2/czynnosci.txt",               std::ios::in | std::ios::out );
                          else if (part=='2') plik.open("data/deu/chapter4/topic_2/rzeczowniki.txt",             std::ios::in | std::ios::out );
                          else if (part=='3') plik.open("data/deu/chapter4/topic_2/wyrazenia_i_zwroty.txt",       std::ios::in | std::ios::out );
                          else if (part=='4') plik.open("data/deu/chapter4/topic_2/zawody_i_prace_dorywcze.txt", std::ios::in | std::ios::out );
                      }

                      break;



                 case '3':
                 //////////////////////////////////////////TOPIC 3 TOPIC 3 TOPIC 3//////////////////////////////////////////
                      if (language=="deu") plik.open("data/deu/chapter4/topic_1/whole.txt",                    std::ios::in | std::ios::out );

                      else if (language =="deu_parts")
                      {
                               if (part=='1') plik.open("data/deu/chapter4/topic_1/whole.txt",                 std::ios::in | std::ios::out );
                          else if (part=='1') plik.open("data/deu/chapter4/topic_1/czynnosci.txt",             std::ios::in | std::ios::out );
                          else if (part=='2') plik.open("data/deu/chapter4/topic_1/przymiotniki.txt",          std::ios::in | std::ios::out );
                          else if (part=='3') plik.open("data/deu/chapter4/topic_1/warunki_zatrudnienia.txt",  std::ios::in | std::ios::out );
                          else if (part=='4') plik.open("data/deu/chapter4/topic_1/wyrazenia__zwroty.txt",     std::ios::in | std::ios::out );
                          else if (part=='5') plik.open("data/deu/chapter4/topic_1/zawody.txt",                std::ios::in | std::ios::out );
                      }

                      break;

                 ///////////////////////////////////////////GRAMMATIK GRAMMATIK GRAMMATIK/////////////////////////////////////////////
                 case '4': plik.open("data/deu/chapter4/grammatik.txt",                std::ios::in | std::ios::out ); break;
            }
        }
        if (chapter=='5')
        {
            if (topic=='1') plik.open("data/deu/chapter5/topic_1.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/deu/chapter5/topic_2.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/deu/chapter5/topic_3.txt",       std::ios::in | std::ios::out );
        }
        if (chapter=='6')
        {
            if (topic=='1') plik.open("data/deu/chapter6/topic_1.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/deu/chapter6/topic_2.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/deu/chapter6/topic_3.txt",       std::ios::in | std::ios::out );
        }
        if (chapter=='7')
        {
            if (topic=='1') plik.open("data/deu/chapter7/topic_1.txt",       std::ios::in | std::ios::out );
            if (topic=='2') plik.open("data/deu/chapter7/topic_2.txt",       std::ios::in | std::ios::out );
            if (topic=='3') plik.open("data/deu/chapter7/topic_3.txt",       std::ios::in | std::ios::out );
        }
    }
    ///////////////////////CHECK FILE COMPATIBILITY////////////////////////
    if (plik.good()==false)
    {
        cout << "Blad z plikiem" << endl;
    }
    ///////////////////////////DATA DATA DATA /////////////////////////////
    int line_nr = 1;
    string line;
    int i = 0;
    ///////////////////////////////////////////////////////////////////////

    while (getline(plik,line))
    {
            switch (line_nr)
            {
                case 1: ang[i] = line;  break;
                case 2: pol[i] = line;  break;
                default: cout << "Co do cholery" << line_nr << endl; break;
            }
                if (line_nr==2)
                {
                    line_nr=0;
                    i++;
                }
                line_nr++;
    }

    plik.close();
    return i;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void quiz(int questions_nr, char mode)
{
    ////////////////////OTHERS OTHERS OTHERS///////////////////////*
    /*
           Modes of quiz:
           1 - Normal QUIZ, with all answers from file
           2 - QUIZ named "kartkowka", user chooses number of answers

                                                                  */
    //////////////////////DATA DATA DATA//////////////////////////*/


    string reply;
    string nevermind;
    int rate;
    int chosenNumberOfAnswers;
    int points = 0;
    int number;

    ////////////////////////////////////////////////////////////////

    if (mode=='1') chosenNumberOfAnswers = questions_nr;
    if (mode=='2') chosenNumberOfAnswers = tellMeQuestionsNumber();



    /////////////////////////
    if (mode=='2')  getline (cin, nevermind);
    srand( time( NULL ) );
    /////////////////////////

         for (int i=1; i<=chosenNumberOfAnswers; i++)

         {
             if (mode=='1') number = i-1;
             if (mode=='2') number = (rand()%questions_nr)+0;
                   /////////////////////////////////QUESTION INTERFACE///////////////////////////////
                   system ("cls");
                   SetConsoleTextAttribute(colorMenu, 14);

                   cout << "---------------------------------------------------"                << endl;
                   cout << "                 P Y T A N I E " << i                               << endl;
                   cout << "---------------------------------------------------"                << endl;

                   cout << pol[number] << " - ";
                   getline(cin, reply);

              if (reply==ang[number]||reply==pol[number])
              {
                   //////////////////////////////COORECT ANSWER INTERFACE////////////////////////////
                   system ("cls");
                   points++;                                                                                                       SetConsoleTextAttribute(colorMenu, 7);
                   cout << "---------------------------------------------------"                               << endl;            SetConsoleTextAttribute(colorMenu, 2);
                   cout << "        O D P O W I E D Z   P O P R A W N A   "                                    << endl;            SetConsoleTextAttribute(colorMenu, 7);
                   cout << "---------------------------------------------------"                       << endl << endl;            SetConsoleTextAttribute(colorMenu, 2);
                   cout << "                  P U N K T Y: " << points << "/" << chosenNumberOfAnswers << endl << endl << endl;    SetConsoleTextAttribute(colorMenu, 7);
                   system ("pause");
              }

              else if (reply!=ang[number]||reply!=pol[number])
              {
                   //////////////////////////////WRONG ANSWER INTERFACE////////////////////////////
                   system ("cls");
                   SetConsoleTextAttribute(colorMenu, 4);
                   cout << "---------------------------------------------------"                 << endl << endl;
                   cout << "     O D P O W I E D Z   N I E P O P R A W N A"                      << endl << endl;
                   cout << "---------------------------------------------------"                 << endl << endl;                  SetConsoleTextAttribute(colorMenu, 14);
                   cout <<pol[number] << " - " << ang[number]                                          << endl << endl;                  SetConsoleTextAttribute(colorMenu, 4);
                   cout << "---------------------------------------------------"                 << endl << endl;
                   cout << "               P U N K T Y: " << points <<  "/"      <<chosenNumberOfAnswers << endl << endl;
                   cout << "---------------------------------------------------"                 << endl;                          SetConsoleTextAttribute(colorMenu, 7);
                   system ("pause");
              }

         }
    ////////////////////////////ENDING INTERFACE/////////////////////////
    system ("cls");
    cout << "---------------------------------------------------"                 << endl << endl;           SetConsoleTextAttribute(colorMenu, 2);
    cout << "           T E M A T   U K O N C Z O N Y      "                      << endl << endl;           SetConsoleTextAttribute(colorMenu, 7);
    cout << "---------------------------------------------------"                 << endl << endl;           SetConsoleTextAttribute(colorMenu, 2);
    cout << "               P U N K T Y: " << points <<  "/"      <<chosenNumberOfAnswers << endl << endl;   SetConsoleTextAttribute(colorMenu, 7);
    cout << "---------------------------------------------------"                 << endl << endl;
    cout << "          Z D A L E S   N A   O C E N E       "      << endl;
    ////////////////////////////SHOW ME MY RATE/////////////////////////
    rate = myRate(chosenNumberOfAnswers, points);
    switch (rate)
    {
        case 1:SetConsoleTextAttribute(colorMenu,  4); cout << "                   niedostateczna "   << endl;SetConsoleTextAttribute(colorMenu,  7); break;
        case 2:SetConsoleTextAttribute(colorMenu, 12); cout << "                   dopuszczajaca "    << endl;SetConsoleTextAttribute(colorMenu,  7); break;
        case 3:SetConsoleTextAttribute(colorMenu, 13); cout << "                    dostateczna "     << endl;SetConsoleTextAttribute(colorMenu,  7); break;
        case 4:SetConsoleTextAttribute(colorMenu, 10); cout << "                       dobra "        << endl;SetConsoleTextAttribute(colorMenu,  7); break;
        case 5:SetConsoleTextAttribute(colorMenu, 11); cout << "                    bardzo dobra "    << endl;SetConsoleTextAttribute(colorMenu,  7); break;
        case 6:SetConsoleTextAttribute(colorMenu, 14); cout << "                      celujaca "      << endl;SetConsoleTextAttribute(colorMenu,  7); break;
    }
    cout << "                 1. P O W T O R Z                  " << endl;   SetConsoleTextAttribute(colorMenu, 14);
    cout << "                    9. M E N U                     " << endl;   SetConsoleTextAttribute(colorMenu, 7);
    cout << "---------------------------------------------------" << endl;

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    char choice;
    do
    {
        choice = getch();
        if (choice=='1')
            {
                quiz(questions_nr,mode);
            }
        else if (choice=='9')
            {
                main();
            }
    } while(choice!=1||choice!=9);

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int tellMeQuestionsNumber()
{
    system ("cls");
    SetConsoleTextAttribute(colorMenu, 7);

    cout << "---------------------------------------------------"                << endl;
    cout << "                I L E   P Y T A N ?                "                << endl;
    cout << "---------------------------------------------------"                << endl;

    int choice;
    cin >> choice;
    return choice;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void showMeTheList(int questions_nr)
{
    system ("cls");
    for (int i=1; i<=questions_nr; i++)
    {
        cout << i << ". ";        SetConsoleTextAttribute(colorMenu, 4);
        cout << pol[i-1];         SetConsoleTextAttribute(colorMenu, 7);
        cout <<  " - ";           SetConsoleTextAttribute(colorMenu, 11);
        cout << ang[i-1] << endl; SetConsoleTextAttribute(colorMenu, 7);
    }
}


void practising(int questions_nr)
{
    string reply;
    for (int i = 0; i<questions_nr; i++)
    {
        for (int j=0; j<5; j++)
        {
            system ("cls");
            cout << "          " << i+1 << ". " << pol[i] << endl;
            cout << "          " << ang[i] << endl;
            getline(cin, reply);
        }
    }
    system ("cls");
    cout << "1. P O W T O R Z" << endl;
    cout << "9. P O W R O T" << endl;
    char choice;
    choice = getch();
    switch (choice)
    {
        case '1': practising(questions_nr); break;
        case '2': main(); break;
        default:
            system ("cls");
            cout << "Z L Y   W Y B O R" << endl;
            system ("pause");
            main ();
        break;
    }
}

