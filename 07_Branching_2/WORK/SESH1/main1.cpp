#include <iostream>

#define grade1 'A'
#define grade2 'B'
#define grade3 'C'
#define grade4 'D'
#define grade5 'F'

		using namespace std;
int main(int argc, char* argv[]){

		char ar1, ar2;
		int res = 0;
		int res2 = 0;
		int i;

for(i=1;i<99;i++){

		cout<<"#1 | Enter Your grade -> ";
		cin >> ar1;
		//
		cout<<"#2 | Enter Your Grade -> ";
		cin >> ar2;
			if(grade1 == ar1){
				cout<<"Extremly good Grade\n";  
				res = 100;	
			}
				else if(grade2 == ar1){
					cout<<"Above Average\n";
					res = 80;        
				}
				else if(grade3 == ar1){
					cout<<"You are Average\n";      
					res = 70;
				}
				else if(grade4 == ar1){
					cout<<"You Failed \n";          
					res = 60;
				}
				else if(grade5 == ar1){  
					cout<<"KILL YOURSELF FAGGET\n"; 
					res = 0;
				}
				else{
					cout<<"Please Enter a valid Grade\n";
				} 

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


			if(res > 69 && res2 > 69){
				cout<<"\n\nLooks Like you passed\n\n";		
			return EXIT_SUCCESS;
			}
			else{
				cout<<"TRY BETTER NEXT TIME DEGENERATE"<<endl;
			}

} //end of for loop
	return 0;
}