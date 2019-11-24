#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct data{
   char ch;
   int count;
};

bool cmpFn(struct data a,struct data b){
    if(a.count==b.count){
    	return a.ch<b.ch;
    }
    else{
		return a.count>b.count;
    }
}

int main(){
	/*
	vector<struct data> v;
	for(int i = 0;i < 26;i++){
		struct data d = {'A' + i, 0};
		v.push_back(d);
	}
    char text;
    while(cin>>text){
    	if(isalpha(text)){
    		char uppercaseLetter = toupper(text);
    		v[uppercaseLetter - 'A'].count++;
    	}
    	
    }
    sort(v.begin(), v.end(), cmpFn);
    for(int i=0;i<26;i++){
    	if(v[i].count){
    		cout<<v[i].ch<<' '<<v[i].count<<endl;
    	}
	}
	*/
	struct data s[26];
	for(int i = 0;i < 26;i++){
		s[i].ch = 'A' + i;
		s[i].count = 0;
	}
    char text;
    while(cin>>text){
    	if(isalpha(text)){
    		char uppercaseLetter = toupper(text);
    		s[uppercaseLetter - 'A'].count++;
    	}
    	
    }
    sort(s,s+26,cmpFn);
    for(int i=0;i<26;i++){
    	if(s[i].count){
    		cout<<s[i].ch<<' '<<s[i].count<<endl;
    	}
	}
}
