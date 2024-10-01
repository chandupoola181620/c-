#include<iostream>
#include<cmath>
using namespace std;

int absoluteValue(int number)
{
	return (number < 0) ? - number : number;
 } 
 
double absoluteValue(double number)
{
	return (number < 0.0) ? - number : number;
}

int main()
{
	int intnum = -10;
	int floatnum = -10.5;
	
	cout << "Absolute value of " << intnum << " is " << absoluteValue(intnum) << endl;
    cout << "Absolute value of " << floatnum << " is " << absoluteValue(floatnum) << endl;

    return 0;
}
