//Car Lot C++ Demo for Arrays and Pointers
//Just a quick demo I leanred in my C++ Class
//https://www.youtube.com/watch?v=uhFpPlMsLzY&t=12660s

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int number;

	cout << "How many cars do you have? ";
	cin >> number;
	cin.ignore();

	string* pCars = new string[number];

	for (int i = 0;i < number;i++) {
		cout << "Enter car #" << i + 1 << " ";
		getline(cin, pCars[i]);
	}
	cout << "Here is your garage!" << endl;
	cout << endl;

	for (int i = 0;i < number;i++) {
		cout << "Parking spot#" << i + 1 << " " << pCars[i] << endl;
	
	}
}

