#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void delete_ele(int arr[], int n, int k)
{
    for (int i = k - 1; i < n; i++)
    {
        arr[i] = arr[i + 1];
    }
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
    cout << "\n\nEnter the position from where the element is deleted: ";
    cin >> pos;
    delete_ele(a, n, pos);
    cout << "\nNew array after deletion: ";
    display(a, n - 1);
}