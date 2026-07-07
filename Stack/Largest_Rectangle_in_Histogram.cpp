#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int Histogram(vector<int> ht){
    int n = ht.size();
    //Right Smaller Element
    vector<int> right(n, 0);
    stack<int> sr;
    for(int  i = n - 1 ; i >= 0 ; i--){
        while(sr.size() > 0 && ht[i] <= ht[sr.top()]){
            sr.pop();
        }
        if(sr.empty()){
            right[i] = n;
        }else{
            right[i] = sr.top();
        }
        sr.push(i);
    }

    //Left Smaller Element
    vector<int> Left(n, 0);

    for(int  i = 0 ; i < n ; i++){
        while(sr.size() > 0 && ht[i] <= ht[sr.top()]){
            sr.pop();
        }
        if(sr.empty()){
            Left[i] = -1;
        }else{
            Left[i] = sr.top();
        }
        sr.push(i);
    }

    while(!sr.empty()){
        sr.pop();
    }

    //Main
    int area = 0;
    for(int i = 0 ; i < n ; i++){
        int width = right[i] - Left[i] - 1;
        int currArea = ht[i] * width;
        area = max(area , currArea);
    }

    return area;

    
}
int main(){
    vector<int> ht = {2,1,5,6,2,3};
    int ans = Histogram(ht);
    cout<<ans<<endl;
    return 0;

}