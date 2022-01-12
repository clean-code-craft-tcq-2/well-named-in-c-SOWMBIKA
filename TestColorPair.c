#include <stdio.h>
#include <assert.h>
#include "ColorCodeManual.h"
#include "TestColorPair.h"
#include "ColorPairInterpreter.h"

void testNumberToColorPairMapping(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor)
{
    ColorPair_s colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void testColorPairToNumberMapping(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)
{
    ColorPair_s colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
