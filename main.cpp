#include <iostream>

using namespace std;

int main()
{
    // Wyswietlenie menu i wprowadzenie danych.
    int menu;
    int wielkosc;

    cout << "Jaki kwadrat narysowac? wybor: 1, 2" << endl;
    cin >> menu;

    cout << "Jaka ma byc dlugosc boku?" << endl;
    cin >> wielkosc;

    // Rysowanie kwardratow.
    switch (menu) {
    case 1:
        for (int i = 0; i < wielkosc; i++) {
            for (int j = 0; j < wielkosc; j++) {
                if ((i == 0) || (i == wielkosc - 1) || (j == 0) || (j == wielkosc - 1)) {
                    cout << "X";
                } else {
                    if((j == i) || (wielkosc - j - 1 == i)) {
                        cout << "X";
                    } else {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }
        break;
    case 2:
        for (int i = 0; i < wielkosc; i++) {
            for (int j = 0; j < wielkosc; j++) {
                if ((i == 0) || (i == wielkosc - 1) || (j == 0) || (j == wielkosc - 1)) {
                    cout << "X";
                } else {
                    if (wielkosc % 2 == 0) {
                        if((wielkosc / 2 == i) || ((wielkosc - 1) / 2 == i) || (wielkosc / 2 == j) || ((wielkosc - 1) / 2 == j)) {
                            cout << "X";
                        } else {
                            cout << " ";
                        }
                    } else {
                        if((wielkosc / 2 == i) || (wielkosc / 2 == j)) {
                            cout << "X";
                        } else {
                            cout << " ";
                        }
                    }
                }
            }
            cout << endl;
        }
        break;
    default:
        cout << "Zostala wybrana nie poprawna pozycja w menu.";
    }

    return 0;
}
