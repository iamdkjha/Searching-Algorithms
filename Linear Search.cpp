#include<iostream>
#include<conio.h>
using namespace std;

int linear_search(int arr[], int size, int key)
{
    int num;
    for ( int i = 0; i < size; i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[100],size,key,i;   // Variable decleration

    // Taking size of array as Input
    cout<<"Enter the size of array: ";
    cin>>size;

    // Taking elements of array as Input
    cout<<endl<<"Enter the elements of array: "<<endl;
    
    for (i = 0; i < size; i++)
    {
        cin>>arr[i];
    }


    cout<<endl<<"Elements are inserted into the array."<<endl<<endl;
    
    // Inserting the key to find in the array
    cout<<endl<<"Enter the element to find in array: ";
    cin>>key;

    
    int result = linear_search(arr,size,key);  // function
    
    
    if (result == -1)
    {
        cout<<"Element is not present in array.";
    }
    else
    {
        cout<<"Element is present in array at index "<<result<<".";
    }
    
    getch();
    return 0;
}
