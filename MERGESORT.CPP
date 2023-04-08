#include <iostream>
using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = (s+e)/2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first= new int[len1];
    int *second = new int[len2];

    int mainIndex = s;
    
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainIndex++];
    }

    int index1 = 0; 
    int index2 = 0; 

    mainIndex = s;

    while(index1 < len1 && index2 < len2)
    {
        if(first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }

    while(index1 < len1)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void mergeSort(int arr[], int s, int e)
{
    if(s >= e)
    {
        return;
    }

    int mid = (s+e)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int main()
{
    int num;
    int nums[20];

    cout << "Enter the number of element: ";
    cin >> num;

    cout << "Enter the elements: ";
    for(int i = 0; i < num; i++)
    {
        cin >> nums[i];
    }

    mergeSort(nums, 0, num-1);

    cout << "The sorted elements is: " << endl;
    for(int i = 0 ; i < num; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}