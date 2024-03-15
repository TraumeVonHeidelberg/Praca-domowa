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
    int a;
    int wyjscie;
    do {
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cin >> wyjscie;

        if(wyjscie==1)
        {
            cout<<"Wpisz liczbe z ktorej zostanie policzona silnia: ";
            cin>>a;

            cout<<"Wynik: "<<factiorial(a)<<endl;
        }
    } while(wyjscie != 0);
    return 0;
}
