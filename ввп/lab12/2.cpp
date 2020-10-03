#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    string c;
    cout << "Введите символ направления(большими буквами): ";
    cin >> c;
    cout << "Введите команду: ";
    cin >> n;
    cout << n << ' ' << c << '\n';
    cout << "Направление: ";
    if (n == 1) {
     		if (c == "С") cout << "З";
     		 else if (c == "Ю") cout << "В"; 
     		 else if (c == "З") cout << "Ю"; 
     		 else if (c == "В") cout << "С"; 
      }
    else if (n == -1) {
     		 if (c == "С") cout << "В"; 
     		 else if (c == "Ю") cout << "З"; 
     		 else if (c == "З") cout << "С"; 
     	   else if (c == "В") cout << "Ю"; 
  	  }
      
  	else if (n ==  0) {
     		if (c ==  "С") cout << "С"; 
     		else if (c == "Ю") cout << "Ю"; 
     		else if (c == "З") cout << "З"; 
     		else if (c == "В") cout << "В"; 
    	}
}
