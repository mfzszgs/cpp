/*
 * intset.cpp
 *
 *  Created on: Jan 16, 2015
 *      Author: swy
 */
#include<iostream>
#include<set>
#include<cassert>
#include<list>
using namespace std;

int main(){
	set<int> intset;
	for(int i=0; i<25;i++)
		for(int j=0;j<10;j++)
			intset.insert(j);
	assert(intset.size()==10);
	cout<<intset.size()<<endl;
}



