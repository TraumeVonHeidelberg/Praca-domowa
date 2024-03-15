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
    int a;
    int wyjscie;
    do {
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cout << "2. Czy pierwsza" << endl;
        cin >> wyjscie;

         if(wyjscie==1)
        {
            cout<<"Wpisz liczbe z ktorej zostanie policzona silnia: ";
            cin>>a;

            cout<<"Wynik: "<<factiorial(a)<<endl;
        }

        if(wyjscie==2)
        {
            cout<<"Wpisz liczbe by sprawdzic czy jest pierwsza: ";
            cin>>a;

            isPrimary(a)?cout<<"Pierwsza"<<endl:cout<<"Zlozona"<<endl;
        }
       
    } while(wyjscie != 0);
    return 0;
}
