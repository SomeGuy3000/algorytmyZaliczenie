#include "monitor.h"

const int constProgress = 5000;
int n, tabSize;
char x;

int main()
{
    cout << "Prosze wybrac zadanie do wykonania (a. sortowanie, b. wyszukiwanie, c. grafy):\n";
    cin >> x;
    switch (x)
    {
    case 'a':
        cout << "Prosze podac mnoznik n od 0 do 6:\n";
        cin >> n;
        sortTimeMonitor(n);
        break;
    case 'b':
        cout << "Prosze podac mnoznik n od 0 do 6:\n";
        cin >> n;
        searchTimeMonitor(n);
        break;
    case 'c':
        cout << "Prosze podac mnoznik n od 0 do 6:\n";
        cin >> n;
        graphMonitor(n);
        break;
    }
}