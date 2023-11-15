#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){
	// pair를 통해서 int 와 string 을 묶어줌
	vector<pair<int, string>> v;
	v.push_back(pair<int, string>(90, "90 JSH"));
	v.push_back(pair<int, string>(69, "69 HMS")); 
	v.push_back(pair<int, string>(85, "85 SSH")); 
	v.push_back(pair<int, string>(70, "70 KMJ")); 
	v.push_back(pair<int, string>(75, "75 OHJ")); 	
	
	sort(v.begin(), v.end());
	
	for(int i =0; i <v.size(); i++){
		cout << v[i].second << ' ' <<"\n";
	}
	
	return 0;
}