#include <iostream>


		using namespace std;
int main(int argc, char* argv[]){

		char input;
		int ascii;
		//
		cout << "Enter Charicter > ";
		cin>>input;
		//cast the charicter input with an intager
		ascii = (int)input;
		cout<< "The ASCII value of " << input <<" is "<<ascii<<endl;

	return 0;
}