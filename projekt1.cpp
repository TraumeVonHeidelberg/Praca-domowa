#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

int factiorial(int a)
{
    if(a==0)
    {
        return 1;
    }

    return a* factiorial(a-1);
}

int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}


int main() {
    int a, b;
    cout << "Podaj liczbe calkowita ";
    cin >> a >> b;
    int wyjscie;
    do {
        cout << endl;
        cout << endl;
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cin >> wyjscie;
    } while(wyjscie != 0);
    return 0;
}
