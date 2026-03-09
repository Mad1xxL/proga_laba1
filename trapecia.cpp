#include <iostream>
using namespace std;

int main(){

    double nizOsn;
    cout << "Введите нижнее основание трапеции: ";
    cin >> nizOsn;

    double levStrn;
    cout << "Введите левую сторону трапеции: ";
    cin >> levStrn;

    double verhOsn;
    cout << "Введите верхнее основание трапеции: ";
    cin >> verhOsn;

    double pravStrn;
    cout << "Введите правую сторону трапеции: ";
    cin >> pravStrn;
    
    double visota;
    cout << "Введите высоту трапеции: ";
    cin >> visota;

    if (nizOsn <= 0 || levStrn <= 0 || verhOsn <= 0 || pravStrn <= 0 || visota <= 0){
        cout << "Некорректные переменные, введите новые!";
        return 0;
    }

    else{
        double perimetr = nizOsn + levStrn + verhOsn + pravStrn;
        double srLiniya = (nizOsn + verhOsn)/2;
        double ploshad = srLiniya * visota;

        cout << "Периметр равен: " << perimetr << endl;
        cout << "Средняя длина равна: " << srLiniya << endl;
        cout << "Площадь равна: " << ploshad << endl;
    }
    return 0;
}