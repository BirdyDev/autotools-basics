#include <iostream>

#include "Field.h"
#include "Volume.h"

using namespace std;

double validateValue(double value) {
    while (value <= 0) {
        cout << "Podana wartosc nie moze byc mniejsza od 0! Wprowadz ponownie: " << endl;
        cin >> value;
    }
    return value;
}

int main() {
    cout << "Witaj, powiedz jakiej figury pole oraz objetosc chcesz obliczyc? (Podaj numer) \n 0. Prostokat \n 1. Prostopadloscian" << endl;
    int object;
    cin >> object;

    while (object != 0 && object != 1) {
        cout << "Nie mam takiej opcji do rozwazenia!" << endl;
        cin >> object;
    }

    Field field;

    if (object == 0) {
        double length;
        double height;

        cout << "Podaj dlugosc prostokata:" << endl;
        cin >> length;

        length = validateValue(length);

        cout << "Podaj szerokosc prostokata:" << endl;
        cin >> height;

        height = validateValue(height);

        cout << "Pole prostokata wynosi: " << field.countRectangleField(length, height) << endl;
        cout << "Prostokat nie ma swojej objetosci!" << endl;

    } else if (object == 1) {
        double length;
        double width;
        double height;

        cout << "Podaj dlugosc podstawy prostopadloscianu:" << endl;
        cin >> length;

        length = validateValue(length);


        cout << "Podaj wysokosc prostopadloscianu:" << endl;
        cin >> width;

        width = validateValue(width);

        cout << "Podaj szerokosc podstawy prostopadloscianu:" << endl;
        cin >> height;

        height = validateValue(height);

        Volume volume;

        cout << "Pole prostopadloscianu wynosi: " << field.countCuboidField(length, width, height) << endl;
        cout << "Objetosc prostopadloscianu wynosi: " << volume.countCuboidVolume(length, width, height) << endl;
    }
    return 0;
}
