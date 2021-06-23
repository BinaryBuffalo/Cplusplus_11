#include <iostream>


	using namespace std;
int main(int argc, char* argv[]){

	char Sov, Hit;
	Sov = 'a';
	Hit = 'a' + 1;

	cout <<"Sov : " << Sov <<endl;
	//out is 'a'
	cout <<"Hit : " << Hit <<endl;
	// out is 'b' the next letter on the ascii table
	cout <<"a+1 : " << 'a' + 1<<endl;
	// out is '98' the ascii value of 'b'
	cout <<"Cast: " << (char)('a' + 1) <<endl;
	// out is 'b' the casted balue of ascii 'b'


	return 0;
}