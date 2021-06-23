#include <iostream>

	using namespace std;
int main(int argc, char* argv[]){

	int input;
	int check1 = 4;
	int check2 = 100;
	int check3 = 400;
	int res = 0;

	cout<<"Please Enter a Year -> ";
	cin>>input;


	if( !(input % check2) == 0 ){
		if( (input % check1) == 0 ){
			cout<<"Yes a leap Year : "<<input<<endl;
				return 1;
		}
	}
	else if( (input % check3) == 0){
			cout<<"Yes a leap Year : "<<input<<endl;
				return 2;
	}
	else{
		cout<<"not a leap Year : "<<input<<endl;
				return 3;
	}
		cout<<"not a leap Year : "<<input<<endl;
	return 0;
}