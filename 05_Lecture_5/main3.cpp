#include <iostream>
//kilogram to grams convertion calculator

	using namespace std;
int main(int argc, char* argv[]){
	double input, b1;
	double b2 = 2.204623; // 1 kilogram in pounds
	long double b3;

	cout<<"How many Kilograms > ";
	cin>>input;
	b1 = input * b2;
	b3 = (long double)b1;
	cout<<"You have "<< b3 << " Pounds\n";

	return 0;
}