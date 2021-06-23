#include <iostream>

	using namespace std;
int main(int argc, char* argv[]){
	char input;

	cout<<"Enter a charecter : ";
	cin>>input;

	if(input >= 'a' && input <= 'z'){
		cout<<input<<" is lower case "<<endl;
	} 
	else if(input >= 'A' && input <= 'Z'){
		cout<<input<<" is upper case"<<endl; 
	}
	else if(input >= '0' && input <= '9'){
		cout<<input<<" is a digit"<<endl;
	}
	else{
		cout<<"Enter a valid numerical value"<<endl;
	}

	return 0;
}