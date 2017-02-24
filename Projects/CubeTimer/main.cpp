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

    scrambler->Scramble3x3();
    timer->RunTimer();

    bool repeat = true;

    if(repeat == true)
    goto beginning;

    return 0;


}

