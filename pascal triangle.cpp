#include<iostream>
using namespace std;
int main(){
	int rows=5;
	for(int i=0;i<rows;i++){ 
		for(int j=0;j<rows-i-1;j++) cout<<" ";
		for(int j=0;j<=i;j++){
			cout<<((j==0 || j==i) ? 1 : (i-1)*(i-j)/j)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
