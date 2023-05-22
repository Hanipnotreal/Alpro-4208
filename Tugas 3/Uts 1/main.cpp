#include <iostream>

using namespace std;

bool is_odd(int x)
{
    return x % 2 != 0 ? 1 : 0;
}

void min_even(int arr[], int n)
{
    int index = 0;
    int value = INT_MAX;

    // 1, 3, 5, 6 ,4, 2
    for (int i = 0; i < n; i++)
    {
        if (!is_odd(arr[i]))
        {
            if (arr[i] < value)
            {
                value = arr[i];
                index = i;
            }
        }
    }

    cout << "value : " << value << endl;
    cout << "index : " << index << endl;
}

void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort_decending(int arr[], int n)
{
    for (int step = 0; step < (n - 1); step++)
    {
        for (int i = 0; i < (n - step - 1); i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int n){
    for (int step = 1; step < n; step++){
        int key = arr[step];
        int j = step - 1;
        while (key > arr[j] && j >= 0)
        {
            // For ascending order, change key> arr[j] to key< arr[j].
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

    int main()
    {
        /*
            output :
            value : 4
            index : 4
        */
        int arr[] = {1, 3, 5, 6, 4, 8};
        int n = sizeof(arr) / sizeof(arr[0]);

        cout << "array elements : ";
        print_arr(arr, n);
        min_even(arr, n);

        cout << "\nbubble sort";
        cout << "\nunsorted : ";
        /*
            output : 1 3 5 6 4 2
        */
        print_arr(arr, n);

        cout << "sorted : ";
        bubble_sort_decending(arr, n);
        /*
            output : 6 5 4 3 2 1
        */
        print_arr(arr, n);

        int arr2[] = {1, 3, 5, 6, 4, 2};
        cout << "\ninsertion sort";
        cout << "\nunsorted : ";
        /*
            output : 1 3 5 6 4 2
        */
        print_arr(arr2, n);

        cout << "sorted : ";
        insertion_sort(arr2, n);
        /*
           output : 6 5 4 3 2 1
       */
        print_arr(arr2, n);

        return 0;
    }
