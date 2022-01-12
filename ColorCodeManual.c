#include <stdio.h>
#include "ColorCodeManual.h"

const char* MajorColorNames_str[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* MinorColorNames_str[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

int numberOfMajorColors = sizeof(MajorColorNames_str) / sizeof(MajorColorNames_str[0]);
int numberOfMinorColors = sizeof(MinorColorNames_str) / sizeof(MinorColorNames_str[0]);

void PrintColorCodeManual(void)
{
	int MajorColorIndex = 0, MinorColorIndex = 0, PairNumber = 0;
	printf("\n---------------------------------------------\n");
	printf("\tCOLOR CODING MANAUAL");
	printf("\n---------------------------------------------\n");
	printf("PAIR NO.\t MAJOR COLOR\t MINOR COLOR\n");
	printf("\n---------------------------------------------\n");
	for (MajorColorIndex = 0; MajorColorIndex < numberOfMajorColors; MajorColorIndex++)
	{
		for (MinorColorIndex = 0; MinorColorIndex < numberOfMinorColors; MinorColorIndex++)
		{
			printf("%d\t\t%s\t\t%s\n", ++PairNumber, MajorColorNames_str[MajorColorIndex], MinorColorNames_str[MinorColorIndex]);
		}
	}
	printf("---------------------------------------------\n");
}
