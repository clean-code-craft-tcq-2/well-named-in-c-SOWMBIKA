#include <stdio.h>
#include <assert.h>
#include "ColorCodeManual.h"
#include "TestColorPair.h"


int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    PrintColorCodeManual();
    
    return 0;
}
