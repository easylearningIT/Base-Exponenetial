#include<iostream>
using namespace std;
int main(){
	
	int base, power;
	int result = 1;
	
	cout<<"\nEnter Base: ";
	cin>>base;
	
	cout<<"\nENter Power: ";
	cin>>power;
	
	for(int i=0;i<power;i++){
		
		result = result * base;
		
	}
	
	cout<<"\nSum: "<<result;
	
	
}
