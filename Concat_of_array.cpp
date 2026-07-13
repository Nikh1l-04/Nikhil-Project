#include<iostream>
#include<vector>
using namespace std;
vector<int> Concat(vector<int> vec , int n , vector<int> ans){
    
    for(int  i = 0 ; i < 2 * n ; i++){
        if(i < n){
            ans.push_back(vec[i]);
        }else{
            ans.push_back(vec[i - n]);
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number of element : ";
    cin>>n;
    vector<int > vec;
    for(int  i = 0; i < n ; i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    vector<int > ans;
    cout<<"[";
    vector<int> arr = Concat(vec , n, ans);
    for(auto v : arr ){
        cout<< v <<" ";
    }
    cout<<"]";
}