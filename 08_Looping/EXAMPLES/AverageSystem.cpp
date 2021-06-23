#include <iostream>

	using namespace std;
int main(int argc, char* argv[]){

	int numStudents;
	int input;
	int a1, CUR, SUM;
	double average;


	cout<<"Enter # Of Students -> ";
	cin >> input;

	cout<<"Enter the students grades \n";

	SUM = 0;
	for(a1 = 1; a1 <= input ; a1++){
		cout<<"$ - > ";
		cin>>CUR;
		SUM += CUR;
	}

	average = (double)SUM / (double)input;

	cout <<"The Average is "<< average << endl;

	return 0;
}