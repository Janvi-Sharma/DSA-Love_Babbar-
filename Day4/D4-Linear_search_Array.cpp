#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " 5";
    }
}
bool linerSearch(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int ar[100];
    int size;
    cout << "enter the size of array:" << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    if (linerSearch(ar, size, 5))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    cout << "Array:" << endl;
    printArray(ar, size);
}
