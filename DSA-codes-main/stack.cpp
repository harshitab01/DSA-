#include <iostream>
using namespace std;
#define MAXSIZE 5
int a[10], top = -1;

void push();
void display();
void pop();
void peek();
void reverse();

int main()
{
    int ch;
    while (1)
    {
        cout << "1.PUSH\n"
             << "2.POP\n"
             << "3.DISPLAY\n"
             << "4.PEEK\n"
             << "5.REVERSE\n"
             << "6.EXIT\n";
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;
        case 5:
            reverse();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "\nInvalid choice";
        }
    }
    return 0;
}
void push()
{
    int n;
    if (top == MAXSIZE - 1)
        cout << "\n.....STACK OVERFLOW.....\n";
    else
    {
        cout << "\nEnter the element to insert: ";
        cin >> n;
        a[++top] = n;
        cout << n << " pushed in the stack\n\n";
    }
}

void pop()
{
    if (top == -1)
        cout << "\n......STACK UNDERFLOW......\n";
    else
    {
        cout << a[top] << " popped from stack" << endl;
        top--;
    }
}

void display()
{

    if (top == -1)
        cout << ".....STACK IS EMPTY.....\n";
    else
    {
        cout << "\nStack: ";
        for (int i = 0; i <= top; i++)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}
void peek()
{
    if (top == -1)
        cout << "\n.......STACK IS EMPTY........\n";
    else
        cout << "\nTopmost element is: " << a[top] << endl;
}

void reverse()
{
    if (top == -1)
        cout << "\n.......STACK IS EMPTY........\n";
    else
    {
        while (top != -1)
        {
            cout << a[top--] << " ";
        }
    }
    cout << endl;
}
