#include<iostream>

using namespace std;
int main()
{
    int a[100], n, position, value;
    cout << "Enter the no of element you want to enter: ";
    cin >> n;
    cout << "Enter the Element of the array: ";
    for(int i= 0; i <= n - 1; i++)
    {
        cin >> a[i];
    }
    cout << "Element of the array: ";
    for(int i = 0; i <= n - 1; i++)
    {
        cout << a[i];
    }

    cout << "Enter a position where you want to insert: ";
    cin >> position;
    cout << "Enter the value you want to insert: ";
    cin >> value;

    for(int i = n - 1; i >= position - 1; i--)
    {
        a[i + 1] = a[i];

    }

    a[position - 1] = value;

    cout << "Element of the array: ";
    for(int i= 0; i <= n ; i++)
    {
        cout << a[i];
    }

    return 0;
}
