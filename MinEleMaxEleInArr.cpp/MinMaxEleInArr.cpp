// find maximum ele.


// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n = 6;
//     int arr[] = {1, 3, 5,  4, 3, 1};
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if ( max<arr[i] )
//         {
//             max = arr[i];
//     }
//     }
//     cout << max;
// }


// 1 3 5 4 3 1 
// 5


//  find minimum ele. 


#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n = 5;

    int arr[] = {67, 44, 7,  42, 67};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if ( min>arr[i] )
        {
            min = arr[i];
    }
    }
    cout << min;
}

// 67 44 7 42 67 
// 7


