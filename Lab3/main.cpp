#include "matrix.cpp"
#include <time.h>
using namespace std;


int main(){
    srand(time(NULL));
    cout << "Prezentacja wszystkich metod opisanych w \'matrix.hpp\' oraz w \'matrix.cpp\'\n";
    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
    cout << "\nStworzenie macierzy M1 o wymiarach 9x9, ktora na poczatek bedzie zainicjalizowana zerami:\nMacierz M1:\n";
    Matrix M1{9, 9};
    M1.print();

    cout << "\nZainicjalizujemy ta macierz losowymi liczbami przy pomocy metody \'set\':\nMacierz M1:\n";
    for (int i = 1; i <= M1.rows(); i++)
        for (int j = 1; j <= M1.cols(); j++)
            M1.set(i, j, rand() % 10);
    M1.print();

    cout << "\nPobieram parzyste wiersze macierzy M1 przy pomocy metody \'get\':\n";
    for (int i = 2; i < M1.rows(); i += 2){
        for (int j = 1; j <= M1.cols(); j++){
            cout << setw(4) << M1.get(i, j);
        }
        cout << endl;
    }

    cout << "\nProsze podac nazwe oraz sciezke do pliku do ktorego beda zapisane wymiary macierzy M1 oraz jej zawartosc:\n";
    string name, path;
    cout << "Prosze podac nazwe pliku: ";
    cin >> name;
    cout << "Prosze podac sciezke: ";
    cin >> path;

    M1.store(name, path);
    cout << "Macierz M1 zostala zapisana w \'" << name << "\' o sciezce \'" << path << "\'\n"; 

    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";


    cout << "\nStworzenie macierzy M1_1 o wymiarach 9x9 zainicjalizowana losowymi liczbami:\n";
    cout << "Macierz M1_1:\n";
    Matrix M1_1{9, 9};

    for (int i = 1; i <= M1_1.rows(); i++)
        for (int j = 1; j <= M1_1.cols(); j++)
            M1_1.set(i, j, rand() % 10);
    M1_1.print();

    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";


    cout << "\nStworzenie macierzy kwadratowej M2 o rozmiarze 10x10 oraz zainicjalizowana zerami:\nMacierz M2:\n";
    Matrix M2{10};
    M2.print();

    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";

    cout << "\nProsze podac sciezke do pliku z ktorego powstanie macierz.\n";
    cout << "W pliku w pierwszym wierszu musza byc zapisane takie dane jak liczba wierszy oraz liczba kolumn.\n";
    cout << "W pozostalych wierszach znajduja sie elementy macierzy.\n";
    cout << "Sciezka: ";
    cin >> path;
    
    Matrix M3{path};
    
    cout << "Zostala stworzona macierz M3 na podstawie przekazanego pliku o wymiarach " << M3.rows() << "x" << M3.cols() << endl;
    cout << "Macierz M3:\n";
    M3.print();

    cout << "\n+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+";
    cout << "\nReprezentacja metod dodawania, odejmowania oraz mnozenia macierz\n";
    cout << "\nDodawanie macierz M1 oraz M1_1:\n";
    M1.add(M1_1).print();
    cout << "\nOdejmowanie macierz M1 oraz M1_1:\n";
    M1.substract(M1_1).print();
    cout << "\nMnozenie macierz M1 oraz M1_1:\n";
    M1.multiply(M1_1).print();

    return 0;
}
