#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare(pair<string,pair<int, int>> a,
			pair<string,pair<int, int>> b){
	if(a.second.first == b.second.first){
		return a.second.second > b.second.second;
	}	
	else{
		return a.second.first > b.second.first;
	}
}

int main(void){
	// 이중pair를 통해서 세 변수를 묶어줌
	vector<pair<string,pair<int, int>>> v;
	v.push_back(pair<string,pair<int, int>>("90 JSH", pair<int,int>(90, 19961222)));
	v.push_back(pair<string,pair<int, int>>("69 HMS", pair<int,int>(69, 19931222))); 
	v.push_back(pair<string,pair<int, int>>("85 SSH", pair<int,int>(85, 19971222))); 
	v.push_back(pair<string,pair<int, int>>("70 KMJ", pair<int,int>(70, 19981222))); 
	v.push_back(pair<string,pair<int, int>>("70 OHJ", pair<int,int>(70, 19991222))); 	
	
	sort(v.begin(), v.end(), compare);
	
	for(int i =0; i <v.size(); i++){
		cout << v[i].first << ' ' <<"\n";
	}
	
	return 0;
}