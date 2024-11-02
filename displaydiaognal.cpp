#include<iostream>
using namespace std;
int main(){
	int arr1[3][3] = {{2,4},{3,6}};
	
	int len = sizeof(arr1[0])/arr1[0][1];
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(i == j){
				cout << arr1[i][j];}}}}
			