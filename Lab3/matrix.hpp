#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;
class Matrix{
private:
    double** matrix;
    int m_N;
    int m_M;

public:
   
    //Konstruktor tworzacy macierz o podanych wymiarach
    Matrix(int N, int M);

    //Konstruktor tworzacy macierz kwadratowa o podanym rozmiarze
    Matrix(int N);
  
    //Konstruktor przyjmujacy sciezke do pliku oraz tworzacy nowa macierz na podstawie przekazanego pliku 
    Matrix(string path);
     
    //Metoda ustawiajaca wartosc elementu (N, M) macierzy na Val
    void set(int N, int M, double Val);
    
    //Metoda pobierajaca element (N, M) macierzy
    double get(int N, int M);
    
    //Metoda ktora dodaje dwie macierzy (macierz biezaca dodaje sie do macierzy przekazywanej)
    Matrix add(Matrix& m2);

    //Metoda ktora odejmuje dwie macierzy (od macierzy biezacej odejmuje sie macierz przekazywana)
    Matrix substract(Matrix& m2);
 
    //Metoda ktora mnozy dwie macierzy (macierz biezaca mnozy przez macierz przekazywana)
    Matrix multiply(Matrix& m2);

    //Metoda zwracajaca liczbe kolumn macierzy
    int cols();

    //Metoda zwracajaca liczbe wierszy macierzy
    int rows();
    
    //Metoda wyswietlajaca macierz na ekranie
    void print();
  
    //Metoda zapisujaca macierz w pliku; w pliku powinny byc zapisane wymiary macierzy oraz jej zawartosc
    void store(string filename, std::string path);
};
