#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char str[20];	 
	int lenStr;

	cout << "Input String\t: ";
	cin >> str; 
	lenStr = strlen(str);		     
	cout << "Reverse String\t: ";       
	for (int i = lenStr-1; i >= 0; i--) {
		cout << (char)toupper(str[i]);
	}

	cout << endl;
	system("pause");
	return 0;
}