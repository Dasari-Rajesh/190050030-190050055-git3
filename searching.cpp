#include"searching.h"
using namespace std;
bool search_custom(vector<int> v ,int num){
	for( size_t i =0 ; i<v.size() ; i++ ){
		if( num==v[i]){
			return true;

		}
	}
	return false;

}