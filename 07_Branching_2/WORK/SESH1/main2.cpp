#include <iostream>

		using namespace std;
int main(int argc, char* argv[]){

	char ar2;
	int res2 = 0;
	cout<<"Enter Your Grade -> ";
	cin >> ar2;

	switch(ar2){
			case 'A':
				cout<<"Very Good!\n";
				res2 = 100;
				break;
			case 'B':
				cout<<"Above Average\n";
				res2 = 80;
				break;
			case 'C':
				cout<<"You're Average\n";
				res2 = 70;
				break;
			case 'D':
				cout<<"YOU FAILED RETARD\n";
				res2 = 60;
				break;
			case 'F':
				cout<<"KILL YOURSELF FAGGGGG\n";
				break;

			default:
			cout<<"Enter a Valid Grade\n";
	}
			if(res2 > 69){
				cout<<"Looks Like you passed\n";
			}
			else{
				cout<<"You Failed Might as well kill yourself\n";
			}



	return 0;
}