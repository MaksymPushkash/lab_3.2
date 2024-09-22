// Lab_03_2.cpp
// < Пушкаш Максим >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 11

#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    
    double a, b, c, x, F;
    
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "x: ";
    cin >> x;

    
    if (x < 1 && c != 0) {
        F = a * x * x + b / c;
    } else if (x > 1.5 && c == 0) {
        F = (x - a) / pow((x - c), 2);
    } else {
        F = (x * x) / (c * c);
    }

    cout << "F (скорочена форма): " << F << endl;

    
    if (x < 1 && c != 0) {
        F = a * x * x + b / c;
    } else {
        if (x > 1.5 && c == 0) {
            F = (x - a) / pow((x - c), 2);
        } else {
            F = (x * x) / (c * c);
        }
    }

    cout << "F (повна форма): " << F << endl;

    return 0;
}



