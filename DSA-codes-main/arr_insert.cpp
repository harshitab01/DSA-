#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insert(int arr[], int n, int k, int ele)
{
    for (int i = n + 1; i >= k - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[k - 1] = ele;
}

int main()
{
    int a[50], n, pos, element;
    cout << "\nEnter the size of array: ";
    cin >> n;
    cout << "\nEnter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nThe array is: ";
    display(a, n);
    cout << "\n\nEnter the position to insert a new element: ";
    cin >> pos;
    cout << "Enter the element to be inserted: ";
    cin >> element;
    insert(a, n, pos, element);
    cout << "\nNew array after insertion: ";
    display(a, n + 1);
}