#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}	
}

int main(){
	int ans[6]={12,11,13,5,6,100};
	insertionSort(ans, 6);
	cout<<"Sorted array using Bubble Sort: "<<endl;
	for(int i=0;i<6;i++)
	{
		cout<<ans[i]<<" ";
	}
	
	return 0;
}