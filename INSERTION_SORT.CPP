#include <iostream>
using namespace std;

void insertion_sort(int nums[], int num)
{
    int j;
    for(int i = 0; i < num; i++)
    {
        int store = nums[j];
        for(j = i - 1; j >= 0 && store < nums[j]; j--)
        {
            nums[j+1] = nums[j];
        }
        nums[j+1] = store;
    }
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

    insertion_sort(nums, num);
   

    cout << "The sorted elements is: " << endl;
    for(int i = 0 ; i < num; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
