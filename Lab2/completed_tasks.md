# Lab2
Lab2 for JiPP
#### Zadanie 1
```cpp
#include <iostream>
using namespace std;

void zmiana (int *x, int *y);
int main()
{
  cout<<"Vadym Kochenko Lab 2 Zadanie 1"<<endl;
	int x, y;
	cout<<"Podaj dwie liczby typu int:";
	cin>>x>>y;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	zmiana(&x,&y);
	cout<<"Wynik"<<endl;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
}

void zmiana (int *x, int *y)
{
	if(*x > *y)
    swap(*x,*y);
}
```
#### Zadanie 2
```cpp
#include <iostream>
using namespace std;

void Swap(int &a_ref, int &b_ref)
{
    int temp = a_ref;
    a_ref = b_ref;
    b_ref = temp;
}

int main()
{
    cout<<"Vadym Kochenko Lab 2 Zadanie 2"<<endl;
    int a, b;
    cout<<"Prosze podac dwie liczby do zamiany:";
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"Swap"<<endl;
    Swap(a, b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
```
#### Zadanie 3
```cpp
#include <iostream>
using namespace std;

void Swap(int &a_ref, int *b)
{
    int temp = a_ref;
    a_ref = *b;
    *b = temp;
}

int main()
{
    cout<<"Vadym Kochenko Lab 2 Zadanie 3"<<endl;
    int a, b;
    cout<<"Prosze podac dwie liczby do zamiany:";
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"Swap"<<endl;
    Swap(a, &b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
```
#### Zadanie 4
```cpp
#include <iostream>
using namespace std;

void foo(int &a, int &b)
{
    a = a*b;
    b = a/b+b;
}

int main()
{
    cout<<"Vadym Kochenko Lab 2 Zadanie 4"<<endl;
    int a, b;
    cout<<"Prosze podac dwie liczby do obliczenia:";
    cin>>a>>b;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    foo(a, b);
    cout<<"Wyniky:"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
```
#### Zadanie 5
```cpp
#include <iostream>
using namespace std;
template < typename T > void swap(T* px, T* py){
    T temp = *px;
    *px = *py;
    *py = temp;
}

void zamiana_int(){
    int x, y;
    cout << "Podaj dwie liczby typu int:";
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    swap(&x, &y);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl; 
}

void zamiana_double(){
    double d, f;
    cout << "Podaj dwie liczby typu double:";
    cout << "x = ";
    cin >> d;
    cout << "y = ";
    cin >> f;

    swap(&d, &f);

    cout << "x = " << d << endl;
    cout << "y = " << f << endl;
}   

void zamiana_char(){
    char c1, c2;
    cout << "Podaj dwa argumenty typu char:";
    cout << "x = ";
    cin >> c1;
    cout << "y = ";
    cin >> c2;

    swap(&c1, &c2);

    cout << "x = " << c1 << endl;
    cout << "y = " << c2 << endl;
}

int main(){
    cout<<"Vadym Kochenko Lab 2 Zadanie 5"<<endl;
    int z;
    cout<<"Podaj jaki typ potrzebujesz(int(pisz 1), double(pisz 2), char(pisz 3):";
    cin>>z;
    if(z==1){
    zamiana_int();
    } else if(z==2){
       zamiana_double(); 
    }else zamiana_char();
}
```
### Zadanie 6
```cpp
#include <iostream>
 
using namespace std;
 
int main()
{
    int x, y;
    cout<<"Vadym Kochenko Lab 2 Zadanie 6"<<endl;
    cout<<"Prosze podac dwie liczby do zamiany"<<endl;
    cin>>x>>y;
    x = x ^ y; 
    y = x ^ y; 
    x = x ^ y;
    cout << "Po zamianie:" << endl <<" x =" << x << endl << " y =" << y;
    return 0;
}
```
