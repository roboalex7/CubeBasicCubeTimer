#ifndef SCRAMBLE_H_INCLUDED
#define SCRAMBLE_H_INCLUDED

class Scrambler
{
private:
   //private vars go here
public:
    Scrambler();
    //public methods go here
    void Scramble2x2();
    void Scramble3x3();
    void Scramble4x4();
    void Scramble5x5();
    void Scramble6x6();
    void Scramble7x7();
    void ScrambleMegaMinx();
    void ScramblePyraMinx();
    void ScrambleSkewb();
private:
    //private methods go here
};

#endif // SCRAMBLE_H_INCLUDED
