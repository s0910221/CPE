#include <iostream>
#include <set>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		bool isJolly = true;
		if(n != 1){
			set<int> differenceSet;
			int a, b;
			cin>>a;
			for(int i = 0;i < n-1;i++){
				cin>>b;
				int difference = abs(b-a);
				differenceSet.insert(difference);
				a = b;
			}
			if(differenceSet.size() < n - 1){
				isJolly = false;
			}
			else{
				for(int i = 1;i < n;i++){
					if(differenceSet.count(i)<1){
						isJolly = false;
						break;
					}
				}
			}
		}else{
			int unusedNum;
			cin>>unusedNum;
		}
		if(isJolly) cout<<"Jolly"<<endl;
		else cout<<"Not jolly"<<endl;
	}
}