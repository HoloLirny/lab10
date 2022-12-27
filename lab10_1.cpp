#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double l,p,o,nb,I;
	cout << "Enter initial loan: ";
	cin >>l;
	cout << "Enter interest rate per year (%): ";
	cin >>p;
	cout << "Enter amount you can pay per year: ";
	cin >>o;

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

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect	
	for(int i=1;l>0;i++){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i;
		cout << setw(13) << left << l;
		I=(l/100)*p;
		cout << setw(13) << left << I;
		cout << setw(13) << left << I+l;
		if(I+l<o){
			o=I+l;
			cout << setw(13) << left << I+l;
		}else{
			cout << setw(13) << left << o;
		}
		nb=I+l-o;
		cout << setw(13) << left << nb;
		cout<<endl;
		l=nb;
	}
	return 0;
}


