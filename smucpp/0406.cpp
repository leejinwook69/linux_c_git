#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() 
{
	string str;
	cout << "input a line, exit to quit" << endl;

	while (1) 
    {
		cout << ">>";
		getline(cin, str);

		if (str.compare("exit") == 0) break;

		for (int i = str.length() - 1; i >= 0; i--) 
        {
			cout << str[i];
		}

		cout << endl;
	}

	return 0;
}