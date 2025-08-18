//brute force approch for target sum indices printing.
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> vecmaker(int n){
    vector<int>vec(n);
    for(int &i:vec){
        cin>>i;
    }
    return vec;
}

vector<int> majoelement(vector<int> &vec,int target){
    vector<int> vecans;
    for(int i=0;i<vec.size();i++){
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]+vec[j]==target){
                vecans.push_back(i);
                vecans.push_back(j);
            }

        }

        }

        return vecans;
}
int main(){
    int n;
    cout<<"enter the number of elements you wnt in it";
    cin>>n;
    cout<<"enter the elements you want to enter";
    vector<int>vecna=vecmaker(n);
    int m;
    cout<<"enter the target";
    cin>>m;
    vector<int>vecans=majoelement(vecna,m);
    cout<<vecans[0]<<" "<<vecans[1];

}    
