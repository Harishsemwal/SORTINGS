#include <iostream>
using namespace std;

void SortArray(int arr[], int n)
{
    if(n == 0 || n == 1)
    {
        return;
    }

    for(int i = 0; i < n-1; i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i], arr[i+1]);
        }
    }

    SortArray(arr, n-1);
    
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

    SortArray(nums, num);

    cout << "The sorted elements is: " << endl;
    for(int i = 0 ; i < num; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}