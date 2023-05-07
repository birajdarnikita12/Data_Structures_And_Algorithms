#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)//
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}	
	}	
}

int main(){
	int ans[5]={12,9,6,1,7};
	BubbleSort(ans, 5);
	cout<<"Sorted array: "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<ans[i]<<" ";
	}
	
	return 0;
}