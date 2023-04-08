#include <iostream>
using namespace std;

int findSmallIndex(int nums[], int index, int size)
{
    int SmallIndex = index;
    int min = nums[index];
    for(int i = index + 1; i < size; i++)
    {
        if(nums[i] < min)
        {
            SmallIndex = i;
        }
    }
    return SmallIndex;
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

    for(int c = 0; c < num; c++)
    {
        int smallIndex = findSmallIndex(nums, c, num);
        int temp = nums[c];
        nums[c] = nums[smallIndex];
        nums[smallIndex] = temp;
    }

    cout << "The sorted elements is: " << endl;
    for(int i = 0 ; i < num; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}
