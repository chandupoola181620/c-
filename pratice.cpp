#include<iostream>
using namespace std;

int main()
{
	int rows = 5;
	for(int i = 1;i<=rows;i++){
		cout<<string(rows-1,' ')<<string(2*i-1,'*')<<endl;
	}
	return 0;
	
}
