#include <iostream>
#include <string>

using namespace std;

int main() {
	bool End = false;
	int numOfInput;
	int count = 0;
	string inputWord;


	cin >> numOfInput;

	while (count != numOfInput) {
		
		cin >> inputWord;

		int lastIndex = inputWord.size() - 1;

		if (inputWord[lastIndex] == 'a') {
			inputWord += "s";
		}
		else if (inputWord[lastIndex] == 'i' || inputWord[lastIndex] == 'y') {
			inputWord[lastIndex] = 'i';
			inputWord += "os";
		}
		else if (inputWord[lastIndex] == 'l') {
			inputWord += "es";
		}
		else if (inputWord[lastIndex] == 'n')
		{
			inputWord[lastIndex] = 'a';
			inputWord += "nes";
		}
		else if (inputWord[lastIndex] == 'e' && inputWord[lastIndex - 1] == 'n')
		{
			inputWord[lastIndex - 1] = 'a';
			inputWord[lastIndex] = 'n';
			inputWord += "es";

		}
		else if (inputWord[lastIndex] == 'o')
		{
			inputWord += "s";
		}
		else if (inputWord[lastIndex] == 'r')
		{
			inputWord += "es";
		}
		else if (inputWord[lastIndex] == 't')
		{
			inputWord += "as";
		}
		else if (inputWord[lastIndex] == 'u')
		{
			inputWord += "s";
		}
		else if (inputWord[lastIndex] == 'v')
		{
			inputWord += "es";
		}
		else if (inputWord[lastIndex] == 'w')
		{
			inputWord += "as";
		}
		else
			inputWord += "us";

		cout << inputWord << endl;
			
			
		count++;
	}


	return 0;
}