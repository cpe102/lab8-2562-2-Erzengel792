#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N , int M){
	int countM = M;
if(N <= 0) cout<<"Invalid input";
else if (M <=0) cout<< "Invalid input";
else {
	for(int countN = N; countN > 0 ;countN--){
		for(int countM = M; countM > 0 ;countM--){
			cout<<"O";
		}
	
	cout<< "\n";
	}

	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
