#include <iostream>
using namespace std;

//void merge(int arr[], int left, int mid, int right)
//{
//    int n1 = mid - left + 1;
//    int n2 = right - mid;
//
//    int L[n1], R[n2];
//
//    for(int i=0; i<n1; i++)
//        L[i]=arr[left+i];
//
//    for(int j=0; j<n2; j++)
//        R[j]=arr[mid+1+j];
//
//    int i=0, j=0, k=left;
//
//    while(i<n1 && j<n2)
//    {
//        if(L[i] <= R[j])
//        {
//            arr[k]=L[i];
//            i++;
//        }
//        else
//        {
//            arr[k]=R[j];
//            j++;
//        }
//        k++;
//    }
//
//    while(i<n1)
//    {
//        arr[k]=L[i];
//        i++;
//        k++;
//    }
//
//    while(j<n2)
//    {
//        arr[k]=R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int arr[], int left, int right)
//{
//    if(left>=right)
//        return;
//
//    int mid=left+(right-left)/2;
//
//    mergeSort(arr,left,mid);
//    mergeSort(arr,mid+1,right);
//
//    merge(arr,left,mid,right);
//}
//
//void printArray(int arr[],int n)
//{
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<" ";
//
//    cout

//}
//
//int main()
//{
//    int arr[]={38,27,43,3,9,82,10};
//
//    int n=sizeof(arr)/sizeof(arr[0]);
//
//    cout<<"Before: ";
//    printArray(arr,n);
//
//    mergeSort(arr,0,n-1);
//
//    cout<<"After: ";
//    printArray(arr,n);
//
//    return 0;
//}


//task c
//
//
//void printArray(int arr[], int left, int right){
//    for(int i=left;i<=right;i++)
//        cout<<arr[i]<<" ";
//    cout<<endl;
//}
//
//void merge(int arr[], int left, int mid, int right){
//
//    int n1=mid-left+1;
//    int n2=right-mid;
//
//    int L[n1],R[n2];
//
//    for(int i=0;i<n1;i++)
//        L[i]=arr[left+i];
//
//    for(int j=0;j<n2;j++)
//        R[j]=arr[mid+1+j];
//
//    int i=0,j=0,k=left;
//
//    while(i<n1 && j<n2){
//
//        if(L[i]<=R[j]){
//            arr[k]=L[i];
//            i++;
//        }
//        else{
//            arr[k]=R[j];
//            j++;
//        }
//        k++;
//    }
//
//    while(i<n1){
//        arr[k]=L[i];
//        i++;
//        k++;
//    }
//
//    while(j<n2){
//        arr[k]=R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int arr[],int left,int right){
//
//    if(left>=right)
//        return;
//
//    int mid=left+(right-left)/2;
//
//    mergeSort(arr,left,mid);
//    mergeSort(arr,mid+1,right);
//
//    merge(arr,left,mid,right);
//
//    printArray(arr,left,right);
//}
//
//int main(){
//
//    int arr[]={38,27,43,3,9,82,10};
//
//    int n=sizeof(arr)/sizeof(arr[0]);
//
//    mergeSort(arr,0,n-1);
//
//    return 0;
//}<<endl;



//task d

//
//
//int comparisons=0;
//
//void merge(int arr[],int left,int mid,int right){
//
//    int n1=mid-left+1;
//    int n2=right-mid;
//
//    int L[n1],R[n2];
//
//    for(int i=0;i<n1;i++)
//        L[i]=arr[left+i];
//
//    for(int j=0;j<n2;j++)
//        R[j]=arr[mid+1+j];
//
//    int i=0,j=0,k=left;
//
//    while(i<n1 && j<n2){
//
//        comparisons++;
//
//        if(L[i]<=R[j]){
//            arr[k]=L[i];
//            i++;
//        }
//
//        else{
//            arr[k]=R[j];
//            j++;
//        }
//
//        k++;
//    }
//
//    while(i<n1){
//        arr[k]=L[i];
//        i++;
//        k++;
//    }
//
//    while(j<n2){
//        arr[k]=R[j];
//        j++;
//        k++;
//    }
//}
//
//void mergeSort(int arr[],int left,int right){
//
//    if(left>=right)
//        return;
//
//    int mid=(left+right)/2;
//
//    mergeSort(arr,left,mid);
//    mergeSort(arr,mid+1,right);
//
//    merge(arr,left,mid,right);
//}
//
//int main(){
//
//    int arr[]={38,27,43,3,9,82,10};
//
//    int n=sizeof(arr)/sizeof(arr[0]);
//
//    mergeSort(arr,0,n-1);
//
//    cout<<"Sorted Array: ";
//
//    for(int i=0;i<n;i++)
//        cout<<arr[i]<<" ";
//
//    cout<<endl;
//
//    cout<<"Total Comparisons: "<<comparisons;
//
//    return 0;
//}


//task e


void merge(int arr[],int left,int mid,int right){

    int n1=mid-left+1;
    int n2=right-mid;

    int L[n1],R[n2];

    for(int i=0;i<n1;i++)
        L[i]=arr[left+i];

    for(int j=0;j<n2;j++)
        R[j]=arr[mid+1+j];

    int i=0,j=0,k=left;

    while(i<n1 && j<n2){

        if(L[i]>=R[j]){
            arr[k]=L[i];
            i++;
        }

        else{
            arr[k]=R[j];
            j++;
        }

        k++;
    }

    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[],int left,int right){

    if(left>=right)
        return;

    int mid=(left+right)/2;

    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);

    merge(arr,left,mid,right);
}

int main(){

    int arr[]={38,27,43,3,9,82,10};

    int n=sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
