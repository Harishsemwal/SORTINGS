#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0; 

    for(int i = s+1; i <= e; i++)
    {
        if(arr[i] <= pivot)
        {
            count++;
        }
    }

    int pivotIndex = count + s;
    swap(arr[pivotIndex], arr[s]);

    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex)
    {
        while(arr[i] < pivotIndex)
        {
            i++;
        }

        while(arr[i] > pivotIndex)
        {
            j--;
        }

        if(i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void QuickSort(int arr[], int s, int e)
{
    if(s >= e)
    {
        return;
    }
    int P = partition(arr, s, e);
    QuickSort(arr, s, P-1);
    QuickSort(arr, P+1, e);
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

    QuickSort(nums, 0, num-1);

    cout << "The sorted elements is: " << endl;
    for(int i = 0 ; i < num; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}