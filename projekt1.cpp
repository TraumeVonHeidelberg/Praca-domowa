#include <iostream>

using namespace std;

bool isPrimary(int a)
{
    // Liczby mniejsze niż 2 nie są pierwsze
    if(a < 2)
    {
        return false;
    }

    for(int i = a - 1; i > 1; i--)
    {
        // Jeśli znajdziemy dzielnik, liczba nie jest pierwsza
        if(a % i == 0)
        {
            return false;
        }
    }

    // Jeśli nie znaleziono żadnego dzielnika, liczba jest pierwsza
    return true;
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
