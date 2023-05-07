#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int minIndex=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[minIndex])
			{
				minIndex=j;
			}
		}
		swap(arr[minIndex],arr[i]);
	}
	
}


int main(){
	int ans[5]={12,9,6,1,7};
	SelectionSort(ans, 5);
	cout<<"Sorted array: ";
	for(int i=0;i<5;i++)
	{
		cout<<ans[i]<<" ";
	}
	
	return 0;
}