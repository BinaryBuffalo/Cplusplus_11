#include <iostream>
#include <string>

	using namespace std;
int main(int argc, char* argv[]){

		int h24, m24; 
		int h12, m12;
		char tmp; // am || pm
		string period;

		cout<< "Please enter a time in a 24-hour format: ";
		cin>>h24>>tmp>>m24;

		
		m12 = m24;

		if(h24 >= 0 && h24 <= 11){

			period = "AM";

			if(h24 == 0){
				h12 = 12;
			}
			else
				h12 = h24;
		}

		else{

			period = "PM";

			if(h24 == 12){
				h12 = 12;
			}
			else{
				h12 = h24 - 12;
			}
		}
		cout<<h24<<":"<<m24<<" is "<<h12<<":"<<m12<<endl;


	return 0;
}