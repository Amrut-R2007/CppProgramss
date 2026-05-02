#include<iostream>
using namespace std;

void arraySort(int array[], int size);

int main()
{
    int no[] = {1,5,3,4,8,2,7,10,6,9};

    int size = sizeof(no) / sizeof(int);  // FIX: initialize first

    arraySort(no, size);  // now correct

    for(int i = 0; i < size; i++)
    {
        cout << no[i] << endl;
    }

    return 0;
}

void arraySort(int array[], int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}