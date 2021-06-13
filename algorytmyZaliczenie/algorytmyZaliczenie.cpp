#include "generateVariables.h"

const int constProgress = 1000;
int n;

int main()
{
    cout << "Prosze podac mnoznik n od 0 do 10: \n";
    cin >> n;
    int tabSize = constProgress * n;

    int * random = generateRandom(tabSize);
    int * sorted = generateSorted(tabSize);
    int * reverseSorted = generateReverseSorted(tabSize);
}

