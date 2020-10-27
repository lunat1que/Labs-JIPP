# Lab1
Lab1 for JiPP
#### Zadanie 1
```cpp

```
#### Zadanie 2
```cpp

```
#### Zadanie 3
```cpp
#include <iostream>
using namespace std;

int main(){
    cout<<"Vadym Kochenko Lab 1 Zadanie 3"<<endl;
    double m, w, BMI;
    
    cout << "Podaj swoja mase ciala(kg):";
    cin >> m;
    cout << "Podaj swoj wzrost(m):";
    cin >> w;
    BMI = (m)/(w * w);
    cout << "Pana/Pani BMI wynosi " << BMI << endl;
    if (BMI < 16 && BMI > 0)
        cout << "Wyglodzenie" << endl;
    else if (BMI >= 16 && BMI < 17)
         cout << "Wychudzenie" << endl;
        else if (BMI >= 17 && BMI < 18.5)
             cout << "Niedowaga" << endl;
           else if (BMI >= 18.5 && BMI < 25)
                cout << "Wartosc prawidlowa" << endl;
              else if (BMI >= 25 && BMI < 30)
                   cout << "Nadwaga" << endl;
                 else if (BMI >= 30 && BMI < 35)
                      cout << "I stopien otylosci" << endl;
                    else if (BMI >= 35 && BMI < 40)
                         cout << "II stopien otylosci" << endl;
                       else if (BMI >= 40)
                            cout << "Otylosc skrajna" << endl;
                          else
                            cout << "Zle podane dane wejsciowe" << endl;
    return 0;
}
```
#### Zadanie 4
```cpp

```
#### Zadanie 5
```cpp
#include<iostream>
using namespace std;

int main(){
    cout<<"Vadym Kochenko Lab 1 Zadanie 5"<<endl;
	const int a = 2, b = 3;
	int A[a][b], B[a][b], AB[a][b];
	cout<<"Podaj pierwszą macierz"<<endl;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{ 
				cin>>A[i][j];
			}
		}
	cout<<"Podaj drugą macierz"<<endl;		
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
			    cin>>B[i][j];
				AB[i][j] = A[i][j] + B[i][j];
			}
		}
	cout<<"Wynik"<<endl;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
				cout<<AB[i][j]<<" ";
			cout<<endl;
		}
	
	return 0;
}
```
