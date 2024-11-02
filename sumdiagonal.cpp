#include<iostream>
using namespace std;
int main(){
	int arr1[3][3] = {{2,4,6},{3,6,7},{1,5,9}};
	
	int len = sizeof(arr1[0])/arr1[0][1];
	int sum =0;
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			if(i == j){
				sum += arr1[i][j];}}}
	cout << "Sum of diagonal elements:"<<sum;}
			