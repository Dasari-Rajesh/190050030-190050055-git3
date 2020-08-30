#include"searching.h"
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	
	for(int i =0 ; i<n ; i++){
		cin>>v[i];
	}
	int num;
	cin>>num;
	if(search_custom(v,num))
		cout<<"Found"<<endl;
	else
		cout<<"Not Found";
}