#include "generateVariables.h"
#include "monitor.h"

const int constProgress = 1000;
int n, tabSize;
char x;

int main()
{
    cout << "Prosze wybrac zadanie do wykonania (a. sortowanie, b. wyszukiwanie, c. grafy):\n";
    cin >> x;
    switch (x)
    {
    case 'a':
        cout << "Prosze podac mnoznik n od 0 do 10:\n";
        cin >> n;

        tabSize = constProgress * n;
        sortTimeMonitor(tabSize);
        break;
    }
}