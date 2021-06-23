#include <iostream>
#include <unistd.h>

	using namespace std;
int main(int argc, char* argv[]){
	int input;
	int counter = 1;
	cout<<"Enter an intager to count too -> ";
	cin>>input;

	while(input >= counter){
		cout<<counter<<endl;
		counter++;
	}
	return 0;
}