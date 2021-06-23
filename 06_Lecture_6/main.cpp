#include <iostream>

	using namespace std;
int main(int argc, char* argv[]){
	int input, a1;

	cout<<"Enter a Number -> "; 
	cin >>input;

	if(input < 0){
		a1 =  input * (-1);
	}
	cout <<"Original Value "<< input <<endl;
	cout <<"Absolute Value "<< a1 << endl;

	return 0;
}