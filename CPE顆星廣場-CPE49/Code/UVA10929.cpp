#include <iostream>
#include <string>
using namespace std;

bool isMultipleBy11(string bigNumStr){
	//123456321
	//ababababa
	int sum1=0, sum2=0;
	bool isAddToSum1 = true;
	for(int i = bigNumStr.length() - 1;i >= 0;i--){
		if(isAddToSum1){
			sum1 += bigNumStr[i] - '0';
			//sum1 += stoi(bigNumStr[i]);
		}
		else{
			sum2 += bigNumStr[i] - '0';
			//sum2 += stoi(bigNumStr[i]);
		}
		isAddToSum1 = !isAddToSum1;
	}
	return abs(sum1 - sum2) % 11 == 0;
}

int main(){
    string n;
    while(cin>>n && n != "0"){
    	if(isMultipleBy11(n)){
	    	cout<<n<<" is a multiple of 11."<<endl;
    	}
    	else{
    		cout<<n<<" is not a multiple of 11."<<endl;
    	}
    }
}

