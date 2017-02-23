#include <iostream>
//#include <time.h>
#include <stdlib.h>
#include "timer.h"
#include "scramble.h"

using namespace std;



int main()
{
    Timer *timer = new Timer();
    Scrambler *scrambler = new Scrambler();
    cout << "Welcome to \"Cube Basic\" 3x3 Cube Scrambler and Timer By: roboalex7 \n";
    cin.ignore();

    beginning:

//    scrambler->Scramble2x2();
//    scrambler->Scramble3x3();
//    scrambler->Scramble4x4();
//    scrambler->Scramble5x5();
        scrambler->Scramble6x6();
        scrambler->Scramble7x7();

    timer->RunTimer();

    bool repeat = true;

    if(repeat == true)
    goto beginning;

    return 0;


}

