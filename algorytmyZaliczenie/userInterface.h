#include "monitor.h"

int inputFromOneToSix() {
    int z;
    do {
        cout << "Prosze podac mnoznik n od 1 do 6:\n";
        cin >> z;
    } while (z < 1 || z > 6);
    return z;
}

void userInterface()
{
    int n;
    char x;
    do
    {
        std::cout << "Prosze wybrac zadanie do wykonania (a. sortowanie, b. wyszukiwanie, c. grafy): \n";
        std::cin >> x;
    } while (x != 'a' && x != 'b' && x != 'c');

    switch (x)
    {
        case 'a':
            n = inputFromOneToSix();
            sortTimeMonitor(n);
            break;
        case 'b':
            n = inputFromOneToSix();
            searchTimeMonitor(n);
            break;
        case 'c':
            n = inputFromOneToSix();
            graphMonitor(n);
            break;
    }
}