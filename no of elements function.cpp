#include<iostream>
using namespace std;

float celisustofahrenheit(float number)
{
	return  celisustofahrenheit (0.9/0.5)-32;
}

float fahrenheittocelisus(float number)
{
	return fahrenheittocelisus(0.5-0.9)/32;
}

int main()
{
	int number;
	cout << "Enter the celisus number: ";
	cin >> number;
	cout <<"celisus number: "<<celisustofahrenheit(number)<<endl;
	
	cout <<"Enter the fahrenheit number: ";
	cin >>number;
	cout <<"fahrenheit: "<<fahrenheittocelisus(number)<<endl;
	return 0;
}
