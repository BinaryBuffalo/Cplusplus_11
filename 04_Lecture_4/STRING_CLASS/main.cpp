#include <iostream>
#include <string.h>

	using namespace std;
int main(int argc, char* argv[]){
	int x;
	double y;
	string s;
	x = 5;
	y = 10.10;
	s = "String";

	cout<<"x :"<< x <<endl;
	cout<<"y :"<< y <<endl;
	cout<<"s :"<< s <<endl;
	
	s = s + s;
	cout<< s << endl;

	return 0;
}