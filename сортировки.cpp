#include <iostream>
#include <ctime>
using namespace std;
#define N 8

int arr[N];

void Rand()
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 201 - 100;
    }
    cout << "BEFORE: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "\t"; 
    }
    cout << endl;
}

void Bubbles()
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    
}

void Inserts()
{
    for (int i = 1; i < N; i++)
        for (int j = i-1; (j>=0) && (arr[j]>arr[j+1]); j--)
             swap(arr[j], arr[j + 1]);
}

void Output()
{
    cout << "AFTER: " << endl;
    for (int i = 0; i < N; i++)
        cout << arr[i] << "\t";
 }

int main()
{
    setlocale(LC_ALL, "rus");
    Rand();

   // Bubbles();
     Inserts();

     Output();
}

