#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int Bsearch(int arr[], int low, int high, int element)
{
    while (high >= low)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
            return mid + 1;
        if (arr[mid] < element)
            low = mid + 1;
        if (arr[mid] > element)
            high = mid - 1;
    }
    return -1;
}

int main()
{
    int a[50], n, element;
    cout << "\nEnter the size of array: ";
    cin >> n;
    cout << "\nEnter the elements in sorted order:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nThe array is: ";
    display(a, n);
    cout << "\nEnter the element to be searched: ";
    cin >> element;
    cout << "Position of the element is: " << Bsearch(a, 0, n - 1, element) << endl;
}