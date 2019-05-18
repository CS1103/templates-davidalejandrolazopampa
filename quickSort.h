//
// Created by David Lazo on 17/05/2019.
//
#ifndef SEMANA8PARTE2QUICKSTEMPLATE_QUICKSORT_H
#define SEMANA8PARTE2QUICKSTEMPLATE_QUICKSORT_H
#include <iostream>
using namespace std;

template <typename T>
void swap(T* Aprim, T* Bsegu){
    T t = *Aprim;
    *Aprim = *Bsegu;
    *Bsegu = t;
}

template <typename T>
void quickSort(T [], int, int);

template <typename T>
T particion(T [], int , int);
//No cruce
template <typename T>
void quickSort(T arr[], int izquiera, int derecho){
    if (izquiera < derecho){
        int p = particion(arr, izquiera, derecho);
        quickSort(arr, izquiera, p - 1);
        quickSort(arr, p + 1, derecho);
    }
}



template <typename T>
T particion(T *arr, int izquiera, int derecho){
    T pivote = arr[izquiera];
    T pos_pivote = izquiera;

    for (int pos = izquiera + 1; pos <= derecho; pos++)
    {
        if (arr[pos] < pivote){
            swap(&arr[pos_pivote + 1], &arr[pos]);
            swap(&arr[pos_pivote], &arr[pos_pivote + 1]);
            pos_pivote ++;
        }
    }
    return pos_pivote;
}
template <typename T>
void Print_dav(T *array, int n){
    for (int k = 0; k < n; k++)
        cout << array[k] << " ";
    cout << endl;
}

#endif //SEMANA8PARTE2QUICKSTEMPLATE_QUICKSORT_H
