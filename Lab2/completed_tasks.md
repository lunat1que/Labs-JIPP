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
