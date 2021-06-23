#include <iostream>


	using namespace std;
int main(int argc, char* argv[]){

	int b1, b2, b3, b4;
	
	int pennie = 1;
	int nickel = 5;
	int dime = 10;
	int quarter = 25;

	int total;
	int input;

	cout<<"How many pennies do you have  > ";
	cin>>input;
	b1 = input / pennie;
	//
	cout<<"How many nickels do you have  > ";
	cin>>input;
	b2 = input * nickel;
	//
	cout<<"  How many dimes do you have  > ";
	cin>>input;
	b3 = input * dime;
	//
	cout<<"How many quarters do you have > ";
	cin>>input;
	b4 = input * quarter;
	//
	total = b1 + b2 + b3 + b4;
	cout<<"Dollars : "<< total / 100 <<endl;
	cout<<"change  : "<< total % 100 <<endl;

	return 0;
}