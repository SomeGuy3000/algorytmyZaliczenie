#include "generateVarables.h"

int randRange = 300;
int tabSize = 100;

int main()
{
    generateRandom(randRange, tabSize);
    generateSorted(randRange, tabSize);
    generateReverseSorted(randRange, tabSize);
}

