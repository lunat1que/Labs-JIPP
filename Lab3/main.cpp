#include "matrix.cpp"
#include <time.h>
using namespace std;

int main(){
    srand(time(NULL));
    cout << "Wszystkie metody\n\n";
    cout << "\n1.Stworzenie macierzy M1 o wymiarach 9x9, z zerami na początku:\nMacierz M1:\n";
    Matrix M1{9, 9};
    M1.print();
    
    for (int i = 1; i <= M1.rows(); i++)
        for (int j = 1; j <= M1.cols(); j++)
            M1.set(i, j, rand() % 10);
    M1.print();

    cout << "\nOdbieram parzystę liczbę\n";
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
    cout << "\nStworzenie macierzy M1_1 o wymiarach 9x9 zainicjalizowana losowymi liczbami:\n";
    cout << "Macierz M1_1:\n";
    Matrix M1_1{9, 9};

    for (int i = 1; i <= M1_1.rows(); i++)
        for (int j = 1; j <= M1_1.cols(); j++)
            M1_1.set(i, j, rand() % 10);
    M1_1.print();

    cout << "\n\nTworzenie macierzy kwadratowej M2 o rozmiarze 10x10 oraz zainicjalizowana zerami:\nMacierz M2:\n";
    Matrix M2{10};
    M2.print();

    cout << "\n\nProsze podac sciezke do pliku z ktorego powstanie macierz, w pliku w pierwszym wierszu musza byc zapisane takie dane jak liczba wierszy oraz liczba kolumn\n";
    cout << "Sciezka: ";
    cin >> path;
    
    Matrix M3{path};
    
    cout << "Nowa macierz M3 o wymiarach " << M3.rows() << "x" << M3.cols() << endl;
    cout << "Macierz M3:\n";
    M3.print();

    cout << "\n\nReprezentacja metod dodawania, odejmowania oraz mnozenia macierzy\n";
    
    cout << "\nDodawanie macierzy M1 oraz M1_1:\n";
    M1.add(M1_1).print();
    
    cout << "\nOdejmowanie macierzy M1 oraz M1_1:\n";
    M1.substract(M1_1).print();
    
    cout << "\nMnozenie macierzy M1 oraz M1_1:\n";
    M1.multiply(M1_1).print();

    return 0;
}
