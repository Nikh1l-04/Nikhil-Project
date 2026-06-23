#include<iostream>
#include<vector>
using namespace std;
int Rotated(vector<int> vec, int tar , int n){
    int st = 0;
    int end = n - 1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(tar == vec[mid]){//Target is found
            return mid;
          if(vec[st] <= tar && vec[mid] >= tar){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{//Right Sorted
            if(vec[mid] <= tar && vec[end] >= tar){
                st = mid + 1;
            }else{
                end = mid - 1;

            }
        }
    }
    return -1;
}
int main(){
    vector<int> vec;
    int tar , n;
    
    cout<<"Enter the number of element: ";
    cin>>n;
    for(int  i = 0; i < n ; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<"Enter the target : ";
    cin>>tar;


    int ans = Rotated(vec , tar , n);
    cout<<"Your target is exist in this index: "<<ans<<endl;
    return 0;
}