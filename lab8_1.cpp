#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	       double prev,inter,total,pay,last,cal;
		   int num = 1;
cout<< "Enter initial loan:" ;
cin>>prev;
cout<<"Enter interest rate per year (%):" ;
cin>>inter;
cout<<"Enter amount you can pay per year:";
cin>>pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	
	
	
for(;last !=0; num++){
		
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << num; 
	cout << setw(13) << left << prev;
	cal=prev*(inter/100);
	cout << setw(13) << left << cal;
	total = cal+prev;
	cout << setw(13) << left << total;
	if(total < pay) pay = total;
	cout << setw(13) << left << pay;
	last = total - pay;
	cout << setw(13) << left << last;
	prev = last;
	cout << "\n";

}	
	return 0;
}
