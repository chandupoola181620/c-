#include<iostream>
using namespace std;
int main(){
	int rows=5;
	for(int i=rows;i<=rows;i--){
		cout<<string(rows-i,' ')<<string(2*i-1,'*')<<endl;
	}
	return 0;
}
