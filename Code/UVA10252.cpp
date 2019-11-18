#include <iostream>
#include <map>
#include <string>
using namespace std;

map<char, int> getCountMap(string word){
	map<char, int> countMap;
	for(int i = 0; i < word.length(); i++){
		countMap[word[i]]++;
	}
	return countMap;
}

int main(){
	string word1, word2;
	while(cin>>word1>>word2){
		map<char, int> countMap1 = getCountMap(word1);
		map<char, int> countMap2 = getCountMap(word2);
		for(char c = 'a'; c <= 'z'; c++){
			int commonCount = min(countMap1[c], countMap2[c]);
			for(int i = 0;i < commonCount; i++){
				cout<<c;
			}
		}
		cout<<endl;
	}
}