#include <iostream>
using namespace std;

//LESS OPTIMISED
void sort01(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] == 0)
        {
            i++;
        }
        else if (arr[j] == 1)
        {
            j--;
        }
        else
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}


// MORE OPTIMISED
void sort01(int arr[], int n)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}
