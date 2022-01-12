#include <stdio.h>
#include <assert.h>
#include "ColorCodeManual.h"
#include "TestColorPair.h"


int main() {
    testNumberToColorPairMapping(4, WHITE, BROWN);
    testNumberToColorPairMapping(5, WHITE, SLATE);

    testColorPairToNumberMapping(BLACK, ORANGE, 12);
    testColorPairToNumberMapping(VIOLET, SLATE, 25);

    PrintColorCodeManual();
    
    return 0;
}
