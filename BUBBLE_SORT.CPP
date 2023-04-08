#include <iostream>
using namespace std;

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

    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num - i - 1; j++)
        {
            if(nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
            }
        }
    }

    cout << "The sorted elements is: " << endl;
    for(int i = 0 ; i < num; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}