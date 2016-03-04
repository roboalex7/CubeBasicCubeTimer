#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "scramble.h"

using namespace std;

Scrambler::Scrambler()
{
    srand(time(NULL));

}

void Scrambler::Scramble3x3()
{
    for (int i = 1; i <= 25; i = i + 1)
    {
        char oldch;

        label:

        char clut[] = { 'R','U','B','L','F','D'};
        char ch = clut[rand() % sizeof(clut)];

        if(ch == oldch)
        goto label;

        cout << ch;
        //out << ch << " , " << oldch << endl;

        oldch = ch;

        char mlut[] = { '\'', ' ', '2' };
        char mod = mlut[rand() % sizeof(mlut)];

        cout << mod << " ";
    }
    cout << endl;
}
