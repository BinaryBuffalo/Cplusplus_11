#include <iostream>
/*
		for ( initialization ; condition ; increment)

*/
int main(int argc, char* argv[]){

	int input, counter;

	cout<<"Enter an Intager -> ";
	cin >> input;

	for(counter=1;input>=counter;counter++){
		cout<<counter<<endl;
	}

	return 0;
}