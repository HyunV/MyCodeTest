#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	
	while(true)
	{
		cin >> s;		

		if(s == "0")
			break;
		
		int size = s.size();
		
		if(size == 1)
		{
			cout << "yes\n";
			continue;		
		}

		int size2 = size / 2;
		size--;
		bool check = false;
		for(int i = 0; i< size; i++)
		{
			if(!(s[i] == s[size-i]))
			{	
				check = true;
				break;
			} 	
		}

		cout << (check ? "no" : "yes") << '\n';
	}	
}
