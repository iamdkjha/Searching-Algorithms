#include<iostream>
using namespace std;

// Condition for binary search: 
// 1. Elements should be in monotonic function (increasing or decreasing order)

// Steps: 
// 1. Find mid
// 2. compare mid/key
// 3. (=), then return
//    (!=),then part decided and repeat the steps again

int binary_search(int arr[],int size, int key){
    int start = 0;
    int end = size-1;

    // mid= (start+end)/2 -> Also acceptable but limitatons

    // What if start is 2^31 and end is also 2^31 then addition of start and end
    // will surely greater than 2^31 which exceedes the range of int.

    // That's why we are using a clever way to skip this situation.

    int mid = start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        if(arr[mid]<key){
            start=mid+1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int main()
{
    int arr[5]={12,13,14,15,16};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    int index = binary_search(arr,size,key);
    cout<<"Index of "<<key<<" is: "<<index;
    return 0;
}
