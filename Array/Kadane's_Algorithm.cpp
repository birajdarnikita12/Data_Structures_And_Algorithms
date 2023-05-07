#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxSum=0;
	int curSum=0;
	for(int i=0;i<n;i++){
		curSum=curSum+arr[i]; 
		maxSum = max(maxSum,curSum);
		if(curSum<0){
			curSum=0;
		}
	}
	cout<<maxSum<<endl;
	return 0;
}