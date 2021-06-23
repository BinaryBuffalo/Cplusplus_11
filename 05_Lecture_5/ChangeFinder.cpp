#include <iostream>

#define pennies  1
#define nickels  5
#define dimes    10
#define quarters 25
#define dollars  100
	using namespace std;
int main(int argc, char* argv[]){
	int b1, b2, b3, b4, b5, b6;
	int input1, input2;

	cout<<"Total Dollars > ";
	cin>>input1;
	cout<<"Total Coins   > ";
	cin>>input2;

	b1 = (input1 * dollars) / quarters; //quarters
	b2 = input2 / dimes;	//dimes
	b3 = input2 % dimes;
	b4 = b3 / nickels;	//nickels
	b5 = b3 % nickels;
	b6 = b5 / pennies;  //pennies
	
	cout<<"Quarters : "<< b1 <<endl;
	cout<<"Dimes    : "<< b2 <<endl;
	cout<<"nickels  : "<< b4 <<endl;
	cout<<"pennies  : "<< b6 <<endl;

	return 0;
}