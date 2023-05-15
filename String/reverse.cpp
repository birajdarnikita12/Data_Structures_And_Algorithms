#include<bits/stdc++.h>
using namespace std;

void reverse(char str[], int n)
{
	int s=0;
	int e=n-1;
	while(s<e)
	{
		swap(str[s++],str[e--]);
		// s++;
		// e--;
	}
}

int getLength(char str[])
{
	int count=0;
	for(int i=0; str[i]!='\0';i++)
	{
		count++;
	}
	return count;
}
int main()
{
	char str[20];
	cout<<"Enter a string "<<endl;
	cin>>str;
	
	int len=getLength(str);
	cout<<"Length: "<<len<<endl;
	
	reverse(str, len);
	cout<<"Reversed string is: "<<str;
	
		
	return 0;
}