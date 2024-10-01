#include<iostream>
using namespace std;

int main()
{
	char ch;
	cout<<"Enter the chracter: ";
	cin >> ch;
	if(isalpha(ch)){
	
	ch = tolower(ch);
	if( ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u')
	
	{
			cout<<ch<<"Enter the charachter is vowel: "<<endl;
}
	else
	{
		cout<<ch<<"Enter the charachyter is consonent: "<<endl;
	}
}
	return 0;
}


