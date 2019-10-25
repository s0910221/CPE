#include <iostream>
#include <map>
#include <string>

using namespace std;
int main(){
	int n;
	map<string, int> m;
	cin>>n;
	for(int i = 0;i < n;i++){
		string country;
		cin>>country;
		string notImportant;
		getline(cin, notImportant);
		if(m.count(country)>0){
			m[country]++;
		}else{
			m[country] = 1;
		}
	}
	for(map<string, int>::iterator it = m.begin();it != m.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
/*
	map<int, string> m;
	map<string, int> m2;
	m[6] = "m6";
	m[3] = "m3";
	m[8] = "m8";
	m[9] = "m9";
	m[1] = "m1";
	m2["h"] = 1;
	m2["A"] = 2;
	m2["j"] = 3;
	m2["q"] = 4;
	m2["z"] = 5;
	m2["a"] = 6;
	for(map<int, string>::iterator it = m.begin();it != m.end(); it++){
		cout<<it->first<<":"<<it->second<<endl;
	}
	for(map<string, int>::iterator it = m2.begin();it != m2.end(); it++){
		cout<<it->first<<":"<<it->second<<endl;
	}
*/
}