#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
	string s;	
	getline(cin, s);

	istringstream iss(s);
	string word;
	vector<string> words;
		
	while (getline(iss, word, ' '))
	{
		words.push_back(word);
	}

	int left = stoi(words[0]);
	int right = stoi(words[2]);
	int sum = stoi(words[4]);
	
	cout << ((left + right == sum) ? "YES" : "NO");
	
}