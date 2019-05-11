#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int random = rand() % 100;
    int number;
    int counter = 0;

    cout << "Erraten Sie die Zahl: " << endl;

    while (random != number) {
        cin >> number;

        if (random < number) {
            cout << "Die Zahl ist zu gross" << endl;
        }
        if (random > number) {
            cout << "Die Zahl ist zu klein" << endl;
        }
        counter++;
    }

    cout << "Das ist die richtige Zahl" << endl;
    cout << "Versuchsanzahl: " << counter << endl;

    while (true)
        ;

    return 0;
}
