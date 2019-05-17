#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;

void quickSort(int *array, int low, int high)
{
    int i = low;
    int j = high;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > low)
        quickSort(array, low, j);
    if (i < high)
        quickSort(array, i, high);
}
void printArray(int *array, int n)
{
    for (int i = 0; i < n; ++i)
        std::cout << array[i] << " ";
}
int main()
{
    //Ingresar algunas cosas
    int tam;
    cout<<"Ingresar Cantidad de Lista: "<<endl;
    cin>>tam;
    auto* array=new double[tam];
    int c;
    //srand(time(NULL));
    cout<<"Numeros del arreglo son: "<<endl;
    for(c = 1; c <= tam; c++)
    {
        array[c] = 1 + rand()%100;

        cout <<  array[c]<< " ";
    }
    quickSort(array,0, tam);

    std::cout << "After Quick Sort :";
    printArray(array, tam);
    return 0;
}