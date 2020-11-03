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
#### Zadanie 1
```cpp

```
