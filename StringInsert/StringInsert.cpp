#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

class Replacement {
public:
	string replaceSpace(string iniString, int length) {
		// write code here
		string s = "%20";
		string result;
		int count = 0;
		for (int i = 0; i<length; i++) {
			if (iniString[i] != ' ') {
				result += iniString[i];
			}
			else {
				result += s;
				count = count + 3;
			}
		}
		return result;
	}
};

int main() {
	Replacement Pointer;
	string a = "a b dfoahdoi oifhoiqwho dafasoihp"; 
	string result;
	int len_a = a.length();
	printf("Original length is: %d\n", len_a);
	result = Pointer.replaceSpace(a, len_a);

	int len_result = result.length();
	printf("New Length is: %d\n", len_result);
	cout << result<<"\n";
}