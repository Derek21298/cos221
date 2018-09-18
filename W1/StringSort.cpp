#ifndef STRINGSORT_CPP
#define STRINGSORT_CPP

/*
	Work shop 1
	Author: Derek Haas

*/


#include <string>
#include "StringSort.h"

using namespace std;

string StringSort::sort(string& s){

	for(int i = 0; i < s.size(); ++i){
		for(int j = i+1; j < s.size(); ++j){

			if(s[j] < s[i]){

				char tmp;
				tmp = s[i];
				s[i] = s[j];
				s[j] = tmp;
			}
		}
	}
	return(s);
}


#endif
