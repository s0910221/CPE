#include <iostream>
using namespace std;
int main(){
	int num1, num2;
	while(cin>>num1>>num2){
		int from = min(num1,num2);
		int to = max(num1,num2);
		int result = 0;
		for(int i = from; i <= to; i++){
			int n = i;
			int count = 1;
            while(n != 1){
                bool isOdd = n % 2 == 1;
                if(isOdd){
                    n = 3*n + 1;
                }else{
                    n /= 2;
                }
                count++;
            }
			result = max(count, result);
		}
		cout<<num1<<" "<<num2<<" "<<result<<endl;
	}
}

// 使用map記憶之前的結果
/*
#include <iostream>
#include <map>
using namespace std;
int main(){
	int num1, num2;
	map<int,int> query;
	while(cin>>num1>>num2){
		int from = min(num1,num2);
		int to = max(num1,num2);
		int result = 0;
		for(int i = from; i <= to; i++){
			int n = i;
			int count = 1;
			if(query[n]){
				count = query[n];
			}
			else{
                while(n != 1){
                    bool isOdd = n % 2 == 1;
                    if(isOdd){
                        n = 3*n + 1;
                    }else{
                        n /= 2;
                    }
                    count++;
                }
				query[i] = count;
			}
			result = max(count, result);
		}
		cout<<num1<<" "<<num2<<" "<<result<<endl;
	}
}
*/
