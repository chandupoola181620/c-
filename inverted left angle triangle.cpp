#include<iostream>
using namespace std;
int main(){
	int rows;
	cout<<"enter the rows = ";
	cin>>rows;
	for(int i=rows;i<=rows;i--){
		cout<<string(rows-i,' ')<<string(i,'*')<<endl;
	}
	return 0;
}
