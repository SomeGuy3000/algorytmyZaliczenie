#include "userInterface.h"

int main()
{
    while (true) {
        int a = userInterface();
        if (a == 0)
            break;
    }
}