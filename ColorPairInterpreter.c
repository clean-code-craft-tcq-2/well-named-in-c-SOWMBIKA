#include <stdio.h>
#include <assert.h>
#include "ColorCodeManual.h"
#include "ColorPairInterpreter.h"

void ColorPairToString(const ColorPair_s* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames_str[colorPair->majorColor],
        MinorColorNames_str[colorPair->minorColor]);
}

ColorPair_s GetColorFromPairNumber(int pairNumber) {
    ColorPair_s colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair_s* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}
