//maximum subarray print(brute force approach)
#include <iostream>
#include <vector>
using namespace std;
vector<int> vecmaker(int n){
    vector<int>vec(n);
    for(int &i:vec){
        cin>>i;
    }

    
    return vec;
}
void subarr(vector<int>vec){
    for(int st=0;st<vec.size();st++){
        for(int end=st;end<vec.size();end++){
            for(int i=st;i<=end;i++){
                cout<<vec[i];
            }cout<<" ";
        }cout<<endl;

    }
return;
}
int main(){
    int n;
    cout<<"enter the number of elements you wnt in it";
    cin>>n;
    cout<<"enter the elements you want to enter";
    vector<int>vecna=vecmaker(n);
    subarr(vecna);
}

