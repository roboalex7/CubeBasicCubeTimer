#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "timer.h"

using namespace std;

Timer::Timer()
{
    _start = clock();
}

void Timer::RunTimer()
{
    cin.ignore();
    double start = clock();
    cout << "TIMING" << endl;
    cin.ignore();
    cout << "Time = " << (clock() - start) / 1000 <<"seconds" << endl << endl;
    cin.ignore();
    cout << endl;
}
