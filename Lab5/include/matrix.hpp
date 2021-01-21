#ifndef MAT_HPP
#define MAT_HPP
#include <iostream>
#include <fstream>
#include <iomanip>
#include "wyjatki.hpp"

class Matrix
{
    private:
        double ** arr;
        int n_class {}, m_class {};
    public:
        
        int rows() const;
        int cols() const;
        Matrix(int n, int m);
        Matrix(int n);
        Matrix(string filename, string path);
        void set(int n, int m, double val);
        double get(int x, int y) const;
        Matrix operator +(const Matrix& m2);
        Matrix operator -(const Matrix& m2);
        Matrix operator *(const Matrix& m2);
        Matrix operator >>(int n);
        void operator +=(const Matrix& m2);
        void operator -=(const Matrix& m2);
        bool operator ==(const Matrix& m2);
        void operator ++(int inc);
        void operator [](int n);
        void store(string filename,string path);
        void print();
};

ostream& operator<<(ostream& os, const Matrix& m2);
#endif
