#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start <= end)
    {
        if(key == arr[mid])
        {
            return mid;
        }
        if(key >= arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int even[6] = {2,3,4,5,6,7};
    int odd[5] = {2,3,4,5,6};

    int evenIndex = BinarySearch(even, 6, 5);
    cout<<"Index of 5 is "<<evenIndex<<endl;

    int oddIndex = BinarySearch(odd, 5, 3);
    cout<<"Index of 3 is "<<oddIndex<<endl;

    return 0;
}