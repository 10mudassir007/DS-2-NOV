#include<iostream>
using namespace std;
int main(){
	int arr1[2][2] = {{2,4},{3,6}};
	int arr2[2][2] {{1,3},{5,2}};
	
	int len = sizeof(arr2[0])/arr2[0][1];
	int sumarr[2][2];
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			sumarr[i][j] = arr1[i][j] + arr2[i][j];}};
			
	for(int i=0;i<len;i++){
		for(int j=0;j<len;j++){
			cout << sumarr[i][j] << endl;
			}}
return 0;}