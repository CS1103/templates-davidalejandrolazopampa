#include <stdlib.h>
#include <time.h>
#include<iostream>
#include "quickSort.h"
using namespace std;
/*
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
}*/
int main() {
    //Al utilizar el array aleatorio no me funciona porque aparece un numero en negativo


/*
    auto *array = new int[10];


    srand(time(NULL));
    for (int dav = 1; dav <= 10; dav++) {
        array[dav] = rand() % 10;
    }
    //Imprime en orden normal aleatorio
    print_arr(array,10);
    */
    cout << "Numeros del arreglo son: " << endl;
   int array[13] = {26, 1985, 222, 25, 89, 11, 89, 1993, 69, 29, 1, 13,33};
    Print_dav(array,13);
    //dentra al template quick
   quickSort(array,0, 13-1);
   //Imprime en orden - a +
    cout << "Array Ordenado con quickSort: " << endl;
    Print_dav(array,13);
   return 0;
}