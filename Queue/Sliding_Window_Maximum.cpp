#include<iostream>
#include<vector>
#include<deque>
using namespace std;
vector<int> SlideWindow(vector<int> nums, int k){
    deque<int> dq;
    vector<int> res;
    if (nums.size() == 0 || k <= 0) return res;
    for(int i = 0;i < k ; i++){
        while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for(int i = k ; i < nums.size() ; i++){

        res.push_back(nums[dq.front()]);
        //Check whether Subset or not  
        while(dq.size() > 0 && dq.front() <= i - k){
            dq.pop_front();
        }
        //Viable or not
        while(dq.size() > 0 && nums[dq.back()] <= nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(nums[dq.front()]);

    return res;
} 
int main(){
    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> ans = SlideWindow(nums , k);
    cout<<"[";
    for(int x : ans){
        cout<<x <<" ";
    }
    cout<<"]"<<endl;
    
    return 0;
}