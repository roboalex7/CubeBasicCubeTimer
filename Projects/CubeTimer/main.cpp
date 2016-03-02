#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

void scramble()
{
    srand(time(NULL));
    char oldch = 'A';

    for (int i = 1; i <= 25; i = i + 1)
    {
        label:

        char clut[] = { 'R','U','B','L','F','D'};
        char ch = clut[rand() % sizeof(clut)];

        if(ch == oldch)
        goto label;

        cout << ch;

        oldch = ch;

        char mlut[] = { '\'', ' ', '2' };
        char mod = mlut[rand() % sizeof(mlut)];

        cout << mod << " ";
    }

    cout << endl;
}

void timer()
{
    cin.ignore();
    double start = clock();
    cout << "TIMING" << endl;
    cin.ignore();
    cout << "Time = " << (clock() - start) / 1000 <<"seconds" << endl << endl;
    cin.ignore();
    cout << endl;
}

int main()
{
    cout << "Welcome to \"Cube Basic\" 3x3 Cube Scrambler and Timer By: roboalex7 \n";
    cin.ignore();

    beginning:

    scramble();
    timer();

    bool repeat = true;

    if(repeat == true)
    goto beginning;

    return 0;


}

