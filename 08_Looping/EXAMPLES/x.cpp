#include <iostream>

	using namespace std;
int main(){

	int input, m1, AK, DIV, RES;

		cout<<"Enter # To Extract -> ";
		cin >> input;
		 AK = input;
		  //
		  DIV=0;
		  RES=0;

		while(AK > 0){
			m1 = AK % 10;
			RES++;
			DIV += m1;
			AK = AK/10;
		}
			cout<<AK<<" has "<<RES<<" Digits\n";
			cout<<"and their sum is "<<DIV<<endl;


	return 0;
}