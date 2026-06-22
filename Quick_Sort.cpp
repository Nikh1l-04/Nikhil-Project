// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int partition( vector<int>& vec , int  st ,int end ){
//     int idx = st - 1;
//     int pivot = vec[ end ];
//     for(int  i = st ; i < end ; i++ ){

//         if(vec[ i ] <= pivot){
//             idx++;
//             swap( vec[ idx ] , vec[ i ]);
            
//         }
//     }

//     idx++;
//     swap(vec[ idx ] , vec[ end ]);
//     return idx;
// }


// void QuickSort(    vector<int>& vec , int st , int end ){
//     if(st < end ){
//         int piv = partition( vec , st , end);

//         QuickSort( vec , st , piv - 1 );//-->Left
//         QuickSort( vec ,  piv + 1 , end );//-->Right

//     }
// }


// int main(){
//     vector<int> vec ;
//     int n;
//     cout<<"Enter the Number of Elements : ";
//     cin>>n;
//     for(int i = 0; i < n; i++ ){
//         int x;
//         cin>>x;
//         vec.push_back(x);
//     }
//     cout<<"[";
//     QuickSort( vec , 0 , n - 1 );
//     for( auto v : vec ){
//         cout<<v<<" ";
//     }
//     cout<<"]";

//     return 0;
// }