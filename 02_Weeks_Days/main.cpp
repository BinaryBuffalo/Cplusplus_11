#include <iostream>

	using namespace std;

const int FULLWEEK = 7;
int main(int argc, char* argv[]){
	int travdays;
	int weeks, days;

	cout<<"Days Traveled : ";
	cin>>travdays;
	weeks = travdays / FULLWEEK;
	days = travdays % FULLWEEK;

	cout <<"Weeks : "<<weeks<<endl;
	cout <<"Days  : "<<days<<endl; 
	return 0;
}