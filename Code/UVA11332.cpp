#include <iostream>
using namespace std;
int main(){
	long long n;
	while(cin>>n && n > 0){
		while(n>=10){
			long long a = n;
			int count = 0;
			while(a>0){
				count += a % 10;
				a /= 10;
			}
			n = count;
		}
		cout<<n<<endl;
	}
}
