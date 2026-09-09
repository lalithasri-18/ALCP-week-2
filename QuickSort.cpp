#include <iostream>
using namespace std;
int partition(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb + 1;
    int end = ub;
    while(start <= end)
    {
        while(start <= ub && a[start] <= pivot)
            start++;
        while(end >= lb && a[end] > pivot)
            end--;
        if(start < end)
            swap(a[start], a[end]);
    }
    swap(a[lb], a[end]);
    return end;
}
void quickSort(int a[], int lb, int ub)
{
    if(lb < ub)
    {
        int loc = partition(a, lb, ub);
        quickSort(a, lb, loc - 1);
        quickSort(a, loc + 1, ub);
    }
}
int main()
{
    int n, a[100];
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> a[i];
    quickSort(a, 0, n - 1);
    cout << "Sorted Array: ";
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
