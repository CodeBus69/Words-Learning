#include "class.hpp"
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

char mainMenu()
{
    system ("cls");

    SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;          SetConsoleTextAttribute(color, 14);
    cout << "           N A U K A   S L O W N I C T W A         " << endl;          SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "         1. J E Z Y K   A N G I E L S K I          " << endl;
    cout << "         2. J E Z Y K   N I E M I E C K I          " << endl;          SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;          SetConsoleTextAttribute(color, 7);

    char choice;
    choice = getch();
    if (choice=='9') exitMenu();
    return choice;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

char EngChapterChoice()
{
    system ("cls");

                                                                                  SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;        SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   A N G I E L S K I     "      << endl;        SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;        SetConsoleTextAttribute(color, 14);
    cout << "            W Y B O R   R O Z D Z I A L U     "      << endl;        SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                1. R O Z D Z I A L   1             " << endl;
    cout << "                2. R O Z D Z I A L   2             " << endl;
    cout << "                3. R O Z D Z I A L   3             " << endl;
    cout << "                4. R O Z D Z I A L   4             " << endl;
    cout << "                5. R O Z D Z I A L   5             " << endl;
    cout << "                6. R O Z D Z I A L   6             " << endl;        SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;        SetConsoleTextAttribute(color, 7);

    char choice;
    choice = getch();
    if (choice=='9') main();
    return choice;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

char EngTopicChoice()
{
     system ("cls");

                                                                                    SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;          SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   A N G I E L S K I          " << endl;          SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;          SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U             " << endl;          SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;
    cout << "                   1. T E M A T   a                " << endl;
    cout << "                   2. T E M A T   b                " << endl;
    cout << "                   3. T E M A T   c                " << endl;
    cout << "                   4. T E M A T   d                " << endl;
    cout << "                   5. T E M A T   e                " << endl;
    cout << "                   6. T E M A T   f                " << endl;
    cout << "                   7. T E M A T   g                " << endl;
    cout << "                   8. T E M A T   h                " << endl;
    cout << "             s. M A T U R E   S K I L L S          " << endl;
    cout << "                    m. M O D U L E                 " << endl;          SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;          SetConsoleTextAttribute(color, 7);

    char choice;
    choice = getch();
    if (choice=='9') main();
    return choice;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

char DeuChapterChoice()
{

    system ("cls");
    SetConsoleTextAttribute(color, 7);


    cout << "---------------------------------------------------" << endl;     SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;     SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;     SetConsoleTextAttribute(color, 14);
    cout << "            W Y B O R   R O Z D Z I A L U          " << endl;     SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;
    cout << "                1. R O Z D Z I A L   1             " << endl;
    cout << "                2. R O Z D Z I A L   2             " << endl;
    cout << "                3. R O Z D Z I A L   3             " << endl;
    cout << "                4. R O Z D Z I A L   4             " << endl;
    cout << "                5. R O Z D Z I A L   5             " << endl;
    cout << "                6. R O Z D Z I A L   6             " << endl;
    cout << "                7. R O Z D Z I A L   7             " << endl;     SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;     SetConsoleTextAttribute(color, 7);

    char choice;
    choice = getch();
    if (choice=='9') main();
    return choice;

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

char DeuTopicChoice()
{
     system ("cls");

    cout << "---------------------------------------------------" << endl;     SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;     SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;     SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U             " << endl;     SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;
    cout << "                   1. T E M A T   1                " << endl;
    cout << "                   2. T E M A T   2                " << endl;
    cout << "                   3. T E M A T   3                " << endl;
    cout << "                4. G R A M M A T I K               " << endl;     SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;     SetConsoleTextAttribute(color, 7);

    char choice;
    choice = getch();

    if (choice=='9') main();
    return choice;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

char DeuModeChoice()
{
    system ("cls");
    cout << "---------------------------------------------------" << endl;     SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;     SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;     SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T R Y B U               " << endl;     SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;
    cout << "                    1. C A L O S C                 " << endl;
    cout << "                  2. D Z I A L A M I               " << endl;     SetConsoleTextAttribute(color, 14);
    cout << "                     9. M E N U                    " << endl;     SetConsoleTextAttribute(color, 7);

    char choice;
    choice = getch();

    if (choice=='9') main();
    return choice;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

void exitMenu()
{
    cout << "---------------------------------------------------" << endl;     SetConsoleTextAttribute(color, 14);
    cout << "D Z I E K U J E M Y   Z A   S K O R Z Y S T A N I E" << endl;     SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;
    exit (1);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////

char DeuPartTopicChoice(char chapter, char topic)
{

    system ("cls");
    switch (chapter)
    {



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////CHAPTER 1 CHAPTER 1 CHAPTER 1///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    case '1':
    switch (topic){
    //////////////////////////////////////////TOPIC 1 TOPIC 1 TOPIC 1//////////////////////////////////////////
    case '1':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 2 TOPIC 2 TOPIC 2//////////////////////////////////////////
    case '2':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 3 TOPIC 3 TOPIC 3//////////////////////////////////////////
    case '3':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    }
    break;



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////CHAPTER 2 CHAPTER 2 CHAPTER 2///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    case '2':
    switch (topic){
    //////////////////////////////////////////TOPIC 1 TOPIC 1 TOPIC 1//////////////////////////////////////////
    case '1':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    ///////////////////////////////////////////TOPIC 2 TOPIC 2 TOPIC 2//////////////////////////////////////////
    case '2':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 3 TOPIC 3TOPIC 3//////////////////////////////////////////
    case '3':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    }
    break;



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////CHAPTER 3 CHAPTER 3 CHAPTER 3///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    case '3':
    switch (topic){
    //////////////////////////////////////////TOPIC 1 TOPIC 1 TOPIC 1//////////////////////////////////////////
    case '1':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 2TOPIC 2TOPIC 2//////////////////////////////////////////
    case '2':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 3 TOPIC 3 TOPIC 3//////////////////////////////////////////
    case '3':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    }
    break;



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////CHAPTER 4 CHAPTER 4 CHAPTER 4///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    case '4':
    switch (topic){
    //////////////////////////////////////////TOPIC 1 TOPIC 1 TOPIC 1//////////////////////////////////////////
    case '1':
    cout << "---------------------------------------------------"   << endl;   SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          "   << endl;   SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------"   << endl;   SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U             "   << endl;   SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------"   << endl   << endl;
    cout << "                 1. C Z Y N N O S C I              "   << endl;
    cout << "              2. P R Z Y M I O T N I K I           "   << endl;
    cout << "       3. W A R U N K I  Z A T R U D N I E N I A   "   << endl;
    cout << "         4. W Y R A Z E N I A   I   Z W R O T Y    "   << endl;
    cout << "                    5. Z A W O D Y                 "   << endl;   SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 2 TOPIC 2 TOPIC 2//////////////////////////////////////////
    case '2':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U             " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                 1. C Z Y N N O S C I              " << endl;
    cout << "              2. R Z E C Z O W N I K I             " << endl;
    cout << "         3. W Y R A Z E N I A   I   Z W R O T Y    " << endl;
    cout << "  4. Z A W O D Y   I   P R A C E   D O R Y W C Z E " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 3 TOPIC 3 TOPIC 3//////////////////////////////////////////
    case '3':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    ///////////////////////////////////////GRAMMATIK GRAMMATIK GRAMMATIK////////////////////////////////////////
    case '4':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               1. G R A M M A T I K                " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;

    break;


    }
    break;



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////CHAPTER 5 CHAPTER 5 CHAPTER 5///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    case '5':
    switch (topic){
    //////////////////////////////////////////TOPIC 1 TOPIC 1 TOPIC 1//////////////////////////////////////////
    case '1':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 2 TOPIC 2 TOPIC 2//////////////////////////////////////////
    case '2':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 3 TOPIC 3 TOPIC 3//////////////////////////////////////////
    case '3':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    }
    break;



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////CHAPTER 6 CHAPTER 6 CHAPTER 6///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    case '6':
    switch (topic){
    //////////////////////////////////////////TOPIC 1 TOPIC 1 TOPIC 1//////////////////////////////////////////
    case '1':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 2 TOPIC 2 TOPIC 2//////////////////////////////////////////
    case '2':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 3 TOPIC 3 TOPIC 3//////////////////////////////////////////
    case '3':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    }
    break;



    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////CHAPTER 7 CHAPTER 7 CHAPTER 7///////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    case '7':
    switch (topic){
    //////////////////////////////////////////TOPIC 1 TOPIC 1 TOPIC 1//////////////////////////////////////////
    case '1':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 2 TOPIC 2 TOPIC 2//////////////////////////////////////////
    case '2':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;
    //////////////////////////////////////////TOPIC 3 TOPIC 3 TOPIC 3//////////////////////////////////////////
    case '3':
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "            J E Z Y K   N I E M I E C K I          " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B O R   T E M A T U               " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl << endl;
    cout << "                    1.                   " << endl;
    cout << "                    2.                   " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);
    break;}break;
    default: cout << "Default" << endl;
    system ("pause");
    break;
    }
    char choice;
    choice = getch();
    if (choice=='9') main();
    return choice;
}
void wrongChoice()
{
    system ("cls");
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "                 Z L Y   W Y B O R                 " << endl;SetConsoleTextAttribute(color, 7);
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    system ("pause");
    main();
}
char QuizModeChoice()
{
    system ("cls");
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "               W Y B I E R Z   T R Y B             " << endl;
    cout << "---------------------------------------------------" << endl;
    cout << "                1. N O R M A L N Y                 " << endl;
    cout << "               2. K A R T K O W K A                " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);

    char choice;
    choice = getch();
    if (choice=='9') main();
    return choice;

}

char SequenceModeChoice()
{

    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 14);
    cout << "W  J A K I M  J E Z Y K U  C H C E S Z  P I S A C ?" << endl;
    cout << "---------------------------------------------------" << endl;SetConsoleTextAttribute(color, 12);
    cout << "                    1. O B C Y                     " << endl;SetConsoleTextAttribute(color, 9);
    cout << "                  2. P O L S K I                   " << endl;SetConsoleTextAttribute(color, 13);
    cout << "           3. P O K A Z   M I   L I S T E          " << endl;SetConsoleTextAttribute(color, 14);
    cout << "                    9. M E N U                     " << endl;SetConsoleTextAttribute(color, 7);

    char choice;
    choice = getch();
    if (choice=='9') main();
    return choice;
}


