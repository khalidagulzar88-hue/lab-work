#include <iostream>
using namespace std;

//void bubbleSort(int arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        bool swapped = false;
//
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//
//                swapped = true;
//            }
//        }
//
//        if (!swapped)
//            break;
//    }
//}
//
//void printArray(int arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//}
//
//int main()
//{
//    int arr[] = {64, 34, 25, 12, 22};
//
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Before Sorting: ";
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    cout << "After Sorting: ";
//    printArray(arr, n);
//
//    return 0;
//}
//
//

//task b:


//void bubbleSort(int arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        bool swapped = false;
//
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//
//                swapped = true;
//            }
//        }
//
//        if (!swapped)
//            break;
//    }
//}
//
//void printArray(int arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//}
//
//int main()
//{
//    int arr[] = {5, 1, 9, 3, 7, 2, 8};
//
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Before Sorting: ";
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    cout << "After Sorting: ";
//    printArray(arr, n);
//
//    return 0;
//}


//task c

//void bubbleSort(int arr[], int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        bool swapped = false;
//
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            // Changed > to <
//            if (arr[j] < arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//
//                swapped = true;
//            }
//        }
//
//        if (!swapped)
//            break;
//    }
//}
//
//void printArray(int arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//}
//
//int main()
//{
//    int arr[] = {5, 1, 9, 3, 7, 2, 8};
//
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Before Sorting: ";
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    cout << "After Sorting (Descending): ";
//    printArray(arr, n);
//
//    return 0;
//}
//


//task d:
//

//
//void bubbleSort(int arr[], int n)
//{
//    int comparisons = 0;
//
//    for (int i = 0; i < n - 1; i++)
//    {
//        bool swapped = false;
//
//        for (int j = 0; j < n - 1 - i; j++)
//        {
//            comparisons++;
//
//            if (arr[j] > arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//
//                swapped = true;
//            }
//        }
//
//        if (!swapped)
//            break;
//    }
//
//    cout << "Total Comparisons = " << comparisons << endl;
//}
//
//void printArray(int arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << arr[i] << " ";
//    }
//
//    cout << endl;
//}
//
//int main()
//{
//    int arr[] = {5, 1, 9, 3, 7, 2, 8}; 
//
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Before Sorting: ";
//    printArray(arr, n);
//
//    bubbleSort(arr, n);
//
//    cout << "After Sorting: ";
//    printArray(arr, n);
//
//    return 0;
//}

