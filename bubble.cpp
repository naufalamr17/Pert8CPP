#include <iostream>
#include <conio.h>

using namespace std;

int array[20], n, i, j;

void bubbleSort(int arr[], int n);

int main()
{
  cout << "Input banyak elemen : ";
  cin >> n;
  cout << endl;
  for (i = 0; i < n; i++)
  {
    cout << "Masukkan nilai ke-" << i + 1 << " : ";
    cin >> array[i];
  }
  bubbleSort(array, n);
  cout << endl
       << "Hasil BubbleSort = ";
  for (i = 0; i < n; i++)
  {
    cout << array[i] << " ";
  }
  getch();
}

void bubbleSort(int arr[], int n)
{
  int tmp;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

