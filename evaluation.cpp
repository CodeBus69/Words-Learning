#include "class.hpp"

int myRate(float allPoints, float myPoints)
{
    ///////////////////////DATA DATA DATA////////////////////////
    float percentRate;
    int rate;

    percentRate = myPoints/allPoints*100;

    /////////////////////////////////////////////////////////////
    //////////////////CONVERTING TO 1-6 SCALE////////////////////
    /////////////////////////////////////////////////////////////
           if (percentRate>=0 &&percentRate<41)   rate = 1;    // NIEDOSTATECZNY
      else if (percentRate>=41&&percentRate<51)   rate = 2;    // DOPUSZCZAJACY
      else if (percentRate>=51&&percentRate<71)   rate = 3;    // DOSTATECZNY
      else if (percentRate>=71&&percentRate<86)   rate = 4;    // DOBRY
      else if (percentRate>=86&&percentRate<98)   rate = 5;    // BARDZO DOBRY
      else if (percentRate>=98&&percentRate<=100) rate = 6;    // CELUJACY
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    /////////////////////////////////////////////////////////////
    return rate;
}



