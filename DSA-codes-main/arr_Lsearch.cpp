#include <iostream>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int Lsearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
            return i + 1;
    }
    return -1;
}

int main()
{
    int a[50], n, element;
    cout << "\nEnter the size of array: ";
    cin >> n;
    cout << "\nEnter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nThe array is: ";
    display(a, n);
    cout << "\nEnter the element to be searched: ";
    cin >> element;
    cout << "Position of the element is: " << Lsearch(a, n, element) << endl;
}