#include <iostream>
#include <time.h>
#include <stdlib.h>

#include "scramble.h"

using namespace std;

Scrambler::Scrambler()
{
    srand(time(NULL));

}

    char OldFace;
    char NewFace;

char Scrambler::GetFace()
{
        label:
        char clut[] = { 'R','U','B','L','F','D'};
        char NewFace = clut[rand() % sizeof(clut)];

        if(NewFace == OldFace)
        goto label;
        OldFace = NewFace;
}


char Scrambler::GetDirection()
{
    char mlut[] = { '\'', ' ', '2' };
    char mod = mlut[rand() % sizeof(mlut)];
}


void Scrambler::Scramble2x2()
{
    for (int i = 1; i <= 9; i = i + 1)
    {
        char face = GetFace();

        char direction = GetDirection();

        cout << face << direction << " ";
    }
    cout << endl;
}



void Scrambler::Scramble3x3()
{
    for (int i = 1; i <= 25; i = i + 1)
    {
        char face = GetFace();

        char direction = GetDirection();

        cout << face << direction << " ";
    }
    cout << endl;
}



void Scrambler::Scramble4x4()
{
    for (int i = 1; i <= 40; i = i + 1)
    {
        char face = GetFace();
            cout << face;

        char llut[] = {' ', 'w'};
        char layer = llut[rand() % sizeof(llut)];

        if (layer == 'w')
           cout << layer;

        char direction = GetDirection();

        cout << direction << " ";
    }
    cout << endl;
}



void Scrambler::Scramble5x5()
{
    for (int i = 1; i <= 60; i = i + 1)
    {
        char face = GetFace();
            cout << face;

        char llut[] = {' ', 'w'};
        char layer = llut[rand() % sizeof(llut)];

        if (layer == 'w')
           cout << layer;

        char direction = GetDirection();

        cout << direction << " ";
    }
    cout << endl;
}



void Scrambler::Scramble6x6()
{
    for (int i = 1; i <= 80; i = i + 1)
    {
        char face = GetFace();

        char llut[] = {' ', 'w'};
        char layer = llut[rand() % sizeof(llut)];
        char mllut[] = {' ', '3'};
        char middleLayer = mllut[rand() % sizeof(mllut)];

        if (layer == 'w' && middleLayer == '3')
            cout << "3" << face << layer;
        else if (layer == 'w')
            cout << face << layer;
        else
            cout << face;

        char direction = GetDirection();

        cout << direction << " ";
    }
    cout << endl;
}



void Scrambler::Scramble7x7()
{
    for (int i = 1; i <= 80; i = i + 1)
    {
        char face = GetFace();

        char llut[] = {' ', 'w'};
        char layer = llut[rand() % sizeof(llut)];
        char mllut[] = {' ', '3'};
        char middleLayer = mllut[rand() % sizeof(mllut)];

        if (layer == 'w' && middleLayer == '3')
            cout << "3" << face << layer;
        else if (layer == 'w')
            cout << face << layer;
        else
            cout << face;

        char direction = GetDirection();

        cout << direction << " ";
    }
    cout << endl;
}



void Scrambler::ScramblePyraMinx()
{
    for (int i = 1; i <= 12; i = i + 1)
    {
        char oldch;

        label:

        char clut[] = { 'R','U','B','L'};
        char ch = clut[rand() % sizeof(clut)];

        if(ch == oldch)
        goto label;

        cout << ch;

        oldch = ch;

        char mlut[] = { '\'', ' '};
        char mod = mlut[rand() % sizeof(mlut)];

        cout << mod << " ";
    }

    int numlut[4] = {1,2,3,4};
    int numTip = numlut[rand() % (sizeof(numlut) / sizeof(int))];

    for (int i = 1; i <= numTip; i = i + 1)
    {
        char oldTip;

        tipLabel:

        char tlut[] = { 'r','u','b','l'};
        char tip = tlut[rand() % sizeof(tlut)];

        if(tip == oldTip)
        goto tipLabel;
        oldTip = tip;

        char mlut[] = { '\'', ' '};
        char mod = mlut[rand() % sizeof(mlut)];

        cout << tip << mod << " ";
    }
    cout << endl;
}
