// When we want to find min or max than always use 
// ********* INT_MIN and INT_MAX ******** function also include header file -> climits



// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={6,5,3,-89,55,66,88};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     // find minimum no. of the given array
//     int min=INT_MAX;
//     for(int i=0; i<n; i++)
//     {
//        if(arr[i]<min)
//        min=arr[i];
//     }
//     cout<<min;
//     cout<<endl;

//     // find maximum no. of the given array
//     int max=INT_MIN;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]>max)
//         max=arr[i];
//     }
//     cout<<max;
//     cout<<endl;

//     // find second minimum no. of the given array
//     int smin=INT_MAX;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]<smin && arr[i]!=min)
//         smin=arr[i];
//     }
//     cout<<smin;
//     cout<<endl;

//      // find second maximum no. of the given array
//      int smax=INT_MIN;
//      for(int i=0; i<n; i++)
//      {
//         if(arr[i]>smax && arr[i]!=max)
//         smax=arr[i];
//      }
//      cout<<smax;
//      cout<<endl;


//      // third minimun and maximum no. of the given array
//      int tmin=INT_MAX;
//      int tmax=INT_MIN;
//      for(int i=0; i<n; i++)
//      {
//         //tmin
//         if(arr[i]<tmin && arr[i]!=smin && arr[i]!=min)
//         tmin=arr[i];
//         //tmax
//         if(arr[i]>tmax && arr[i]!=smax && arr[i]!=max)
//         tmax=arr[i];
//      }
//      cout<<tmin;
//      cout<<endl;
//      cout<<tmax;
// }



// 6 5 3 -89 55 66 88 
// -89
// 88
// 3
// 66
// 5
// 55


// find the sum of the even no from/in the given array.
// #include<iostream>
// #include<climits>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
//     // sum of the even no.
//     int sum=0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]%2==0)
//         sum+=arr[i];
//     }
//     cout<<sum;
//     cout<<endl;

//     // sum of the odd no.
//     int sum2=0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]%2!=0) 
//         sum2+=arr[i];
//     }
//     cout<<sum2;
//     cout<<endl;
  

//     // check even and odd also check modulus operator
//     bool a=(4%2)==0;
//     cout<<a;
//     cout<<endl;
//     bool b=(5%2)==0;
//     cout<<b;

// }

// // 1 2 3 4 5 6 
// // 12
// // 9
// // 1
// // 0




// find minimum no. from the even no. of the given array.
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[]={1,3,5,8,5,-59,60,4,-65};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    int min=INT_MAX;
    for(int i=0; i<n; i++)
    {
       if(arr[i]%2==0)
       if(arr[i]<min)
       min=arr[i];
    }
    cout<<min;
    cout<<endl;

}

