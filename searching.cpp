#include"searching.h"
using namespace std;
bool search_custom(vector<int> v ,int num,int startidx,int endidx){
	// input guaranteed to be in sorted order
	if(num == v[(startidx+endidx)/2])return true;
	if(startidx==endidx)return false;
	if(num>v[(startidx+endidx)/2])return search_custom(v,num,((startidx+endidx)/2) + 1,endidx);
	return search_custom(v,num,startidx,(startidx+endidx)/2);
}
