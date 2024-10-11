#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> bubble;
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        int x;
        cin>>x;
        bubble.push_back(x);
    }

    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(bubble[j]>bubble[j+1]){
                temp=bubble[j];
                bubble[j]=bubble[j+1];
                bubble[j+1]=temp;
            }
            // bubble[j]=temp;
        }
    }

    for(int i=0;i<size;i++){
        cout<<bubble[i]<<"  ";
    }
    return 0;
}
