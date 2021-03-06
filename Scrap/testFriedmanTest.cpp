#include "FriedmanTest.h"
#include "../Utils/Debug.h"
using namespace igmdk;

void testFriedman()
{
    Vector<Vector<double> > responses;
    Vector<double> r1;
    r1.append(14);
    r1.append(23);
    r1.append(26);
    r1.append(30);
    responses.append(r1);
    Vector<double> r2;
    r2.append(19);
    r2.append(25);
    r2.append(25);
    r2.append(33);
    responses.append(r2);
    Vector<double> r3;
    r3.append(17);
    r3.append(22);
    r3.append(29);
    r3.append(28);
    responses.append(r3);
    Vector<double> r4;
    r4.append(17);
    r4.append(21);
    r4.append(28);
    r4.append(27);
    responses.append(r4);
    Vector<double> r5;
    r5.append(16);
    r5.append(24);
    r5.append(28);
    r5.append(32);
    responses.append(r5);
    Vector<double> r6;
    r6.append(15);
    r6.append(23);
    r6.append(27);
    r6.append(36);
    responses.append(r6);
    Vector<double> r7;
    r7.append(18);
    r7.append(26);
    r7.append(27);
    r7.append(26);
    responses.append(r7);
    Vector<double> r8;
    r8.append(16);
    r8.append(22);
    r8.append(30);
    r8.append(32);
    responses.append(r8);
    pair<double,Vector<double> > result = FriedmanPValue(responses);
    DEBUG(result.first);
}

int main(int argc, char *argv[])
{
    testFriedman();
    return 0;
}
