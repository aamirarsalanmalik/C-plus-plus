// Write a C++ program to perform insertion sort using pointers. 
#include<iostream>
using namespace std;
void insertion_sort(int [],int);
int main()
{
    int array[7],size = 7;
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    insertion_sort(array,size);
    return 0;
}

void insertion_sort(int arr[], int size)
{   int j =1;
    int count = size-1;
    int marker = arr[j];
    while (count>0)
    {
        for(int k =j ; k>0; k--)
        {
            if(arr[k]<arr[k-1])
            {
                int temp =arr[k];
                arr[k] = arr[k-1];
                arr[k-1] =temp;
            }
        }
        if(j<=size-1)
        {
            j++;
            count--;
        }
    }
    cout<<"The sorted array is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}