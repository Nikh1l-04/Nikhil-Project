#include<iostream>
#include<vector>
using namespace std;
int Rotated(vector<int> vec, int n){
    int st = 0;
    int end = n - 1;
    
    while(st < end){
        int mid = st + (end - st)/2;

        if(vec[mid] > vec[st]){
            st = mid + 1;
        }else{
            end = mid;
        }
    } 
    return vec[st];   
}
int main(){
    vector<int> vec;
    int n;
    
    cout<<"Enter the number of element: ";
    cin>>n;
    for(int  i = 0; i < n ; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    


    int ans = Rotated(vec  , n);
    cout<<"~~~~~ "<<ans<<" ~~~~~";
    return 0;
}