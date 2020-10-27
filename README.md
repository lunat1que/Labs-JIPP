# Lab1
Lab1 for JiPP
#### Zadanie 1
```cpp

```
#### Zadanie 2
```cpp
#include <iostream>
#include <cstring>
using namespace std;
 
bool polindrom(string arg)
{
	int len = arg.length();
	for(int i = 0; i < len/2; ++i)
	{
	    if(tolower(arg[i]) != tolower(arg[len-i-1]))
		{
			return false;
		}
	}
	return true;
}
 
int main()
{
	string str;
	cout<<"Vadym Kochenko Lab 1 Zadanie 2"<<endl;
	cout << "Wpisz jeden argument(slowo wielkimi/malymi albo cyfra): ";
	cin >> str;
	if(polindrom(str))
	{
		cout << "Argument jest polindromem.";
	}
	else
	{
		cout << "Argument nie jest polindromem";
	}
	return 0;
}
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
#include <iostream>
using namespace std;
int main()
{
    cout<<"Vadym Kochenko Lab 1 Zadanie 4"<<endl;
    int a = 0,b = 0, sumaA = 0, sumaB = 0;
    cout << "Prosze podac a, b jaki sa > 1: ";
    while(a <= 1 && b <= 1)
    {
        cin >> a >> b;
        if(a <= 1 || b <= 1)
        {
            cout << "a lub b jest <= 1, prosze sprobowac jeszcze raz" << endl;
        }
    }
        
    for(int i = 1;i < a;i++)
    {
        if(a%i == 0)
            sumaA += i;
    }
        
    for(int i = 1; i < b; i++)
    {
        if(b%i == 0)
            sumaB += i;
        
    }
    cout << "Suma a = " << sumaA << endl << "Suma b = " << sumaB << endl;
    if (sumaA==b+1 && sumaB==a+1)
    {
        cout << "Liczby sa skojarzonymi" << endl;
    }else{
        cout << "Liczby sa nieskojarzonymi" << endl;
    }
    
}
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
