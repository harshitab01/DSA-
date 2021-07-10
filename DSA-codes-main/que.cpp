#include <iostream>
using namespace std;
#define MAXSIZE 5
int a[10], front = -1, rear = -1;

void enqueue();
void display();
void dequeue();
void peek();

int main()
{
    int ch;
    while (1)
    {
        cout << "1.ENQUEUE\n"
             << "2.DEQUEUE\n"
             << "3.DISPLAY\n"
             << "4.PEEK\n"
             << "5.EXIT\n";
        cout << "\nEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            peek();
            break;

        case 5:
            exit(0);
            break;
        default:
            cout << "\nInvalid choice";
        }
    }
    return 0;
}
void enqueue()
{
    int n;
    if (rear == MAXSIZE - 1)
    {
        cout << "\n........QUEUE IS FULL......\n";
        return;
    }
    else if (front == -1)
        front = 0;

    cout << "\nEnter the element to insert: ";
    cin >> n;
    a[++rear] = n;
    cout << n << " inserted in the queue\n\n";
}

void dequeue()
{
    if (front == -1)
        cout << "\n......QUEUE IS EMPTY......\n";
    else
    {
        cout << a[front] << " dequeued\n"
             << endl;
        front++;
    }
}

void display()
{
    if (rear == -1)
        cout << "\n......QUEUE IS EMPTY......\n";
    else
    {
        cout << "\nElements of queue are: ";
        for (int i = front; i <= rear; i++)
            cout << a[i] << " ";
    }
    cout << endl;
}

void peek()
{
    if (rear == -1)
        cout << "\n......QUEUE IS EMPTY......\n";
    else
        cout << a[rear] << endl;
}