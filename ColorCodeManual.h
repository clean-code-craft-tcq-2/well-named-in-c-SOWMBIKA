#define MAX_COLORPAIR_NAME_CHARS 16

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames_str[];
extern const char* MinorColorNames_str[];

extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair_s;

void PrintColorCodeManual();
