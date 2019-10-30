#include <iostream>

using namespace std;
int main(){
	long n1, n2;
	while(cin>>n1>>n2 && (n1!=0 || n2!=0)){
		int carry = 0, totalCarry = 0;
		while(n1>0||n2>0){
			carry = (carry + n1 % 10 + n2 % 10) / 10;
			totalCarry += carry;
			n1 /= 10;
			n2 /= 10;			
		}
		if(totalCarry==0){
			cout<<"No carry operation."<<endl;
		}
		else if(totalCarry==1){
			cout<<"1 carry operation."<<endl;
		}
		else{
			cout<<totalCarry<<" carry operations."<<endl;
		}
	}
}
