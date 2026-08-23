#include<iostream>
#include<vector>
using namespace std;
int CountK(vector<int> nums , int k){
    int count = 0;
    
    for(int i = 0; i < nums.size() ; i++){

        int n = k;
        for(int j = i ; j < nums.size() ; j++){
            n -= nums[j];
            
            if(n == 0){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    vector<int> vec = {1,1,1};
    int k = 2;
    cout<<CountK(vec, k)<<endl;
    return 0;
}