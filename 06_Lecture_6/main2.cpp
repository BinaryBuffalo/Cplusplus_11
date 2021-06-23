#include <iostream>


	using namespace std;
int main(int argc, char* argv[]){
	int input;

	cout<<"Enter A Number -> ";
	cin>>input;


	if(input == 0){
		cout<< input << " : Odd"<<endl; 
	}
	else if( (input % 2) == 0 ){
		cout<< input << " : Even"<<endl;
	}
	else{
		cout<< input << " : Odd"<<endl;
	}

	return 0;
}