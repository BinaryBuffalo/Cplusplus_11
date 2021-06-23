#include <iostream>

		using namespace std;
int main(int argc, char* argv[]){
		char lowercase, uppercase;
		int offset;

		cout <<"Enter Lowercase Letter > ";
		cin>>lowercase;

		offset = (int)(lowercase - 'a');
		uppercase = (char)('A' + offset);

		cout <<"The upper case of"<<
		lowercase<<" is "<< uppercase <<endl;
	return 0;
}