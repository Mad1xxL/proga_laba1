#include <iostream>
using namespace std;

int main(){

    double nOsn;
    cout << "Введите нижнее основание трапеции: ";
    cin >> nOsn;

    double lStrn;
    cout << "Введите левую сторону трапеции: ";
    cin >> lStrn;

    double vOsn;
    cout << "Введите верхнее основание трапеции: ";
    cin >> vOsn;

    double pStrn;
    cout << "Введите правую сторону трапеции: ";
    cin >> pStrn;
    
    double visota;
    cout << "Введите высоту трапеции: ";
    cin >> visota;

    if (nOsn <= 0 || lStrn <= 0 || vOsn <= 0 || pStrn <= 0 || visota <= 0){
        cout << "Некорректные переменные, введите новые!" << endl;
        return 0;
    }

    if (nOsn >= lStrn + vOsn + pStrn ||
    lStrn >= nOsn + vOsn + pStrn ||
    vOsn >= nOsn + lStrn + pStrn ||
    pStrn >= nOsn + lStrn + vOsn) {
    cout << "Некорректные переменные, введите новые!" << endl;
    return 0;
    }

    if (visota >= lStrn || visota >= pStrn) {
    cout << "Некорректные переменные, введите новые!" << endl;
    return 0;  
    }

    else{
        double perimetr = nOsn + lStrn + vOsn + pStrn;
        double srLiniya = (nOsn + vOsn)/2;
        double ploshad = srLiniya * visota;

        cout << "Периметр равен: " << perimetr << endl;
        cout << "Средняя длина равна: " << srLiniya << endl;
        cout << "Площадь равна: " << ploshad << endl;
    }
    return 0;
}