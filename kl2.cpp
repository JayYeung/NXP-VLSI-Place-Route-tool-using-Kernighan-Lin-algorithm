#include <bits/stdc++.h>
using namespace std;
int n, c;
int bestGain=-1000000, bestA, bestB;

vector<int> graph[50000];
int arr1[25000];
int arr2[25000];
int D[50000];

void print(){
    sort(arr1, arr1+n/2);
    sort(arr2, arr2+n/2);
    for(int i=0;i<n/2;i++){
        cout<<arr1[i]+1<<" ";
    }
    cout<<endl;
    for(int i=0;i<n/2;i++){
        cout<<arr2[i]+1<<" ";
    }
    cout<<endl;
}
bool findBestGain(){
    bestGain=-1000000, bestA, bestB;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            int con=0;
            for (vector<int>::iterator ir = graph[arr1[i]].begin(); ir != graph[arr1[i]].end(); ++ir){
                if(*ir==arr2[j]){
                    con++;
                }
            }

            int gain=D[arr1[i]]+D[arr2[j]]-2*con;
            //cout<<gain<<" ";
            if(gain>bestGain){
                bestA=arr1[i];
                bestB=arr2[j];
                bestGain=gain;
            }
        }
    }
    //cout<<endl;

    //print();
    cout<<bestGain<<" "<<bestA<<" "<<bestB<<endl;
    if(bestGain>0){
        for(int i=0;i<n/2;i++){
            if(arr1[i]==bestA){
                arr1[i]=bestB;
            }
            else if(arr2[i]==bestB){
                arr2[i]=bestA;
            }
        }
        //print();
        return true;
    }

    return false;
}
void computeDvalues(){
    for(int i=0;i<n/2;i++){
        int value=arr1[i], external=0, internal=0;
        //<<value<<endl;
        for (vector<int>::iterator ir = graph[value].begin(); ir != graph[value].end(); ++ir){
            bool check=false;
            for(int j=0;j<n/2;j++){
                if(arr1[j]==*ir){
                    check=true;
                }
            }
            //cout<<internal<<" "<<external<<endl;
            if(check){
                internal++;
            }
            else{
                external++;
            }
        }
        D[value]=external-internal;
    }

    for(int i=0;i<n/2;i++){
        int value=arr2[i], external=0, internal=0;
        //<<value<<endl;
        for (vector<int>::iterator ir = graph[value].begin(); ir != graph[value].end(); ++ir){
            bool check=false;
            for(int j=0;j<n/2;j++){
                if(arr2[j]==*ir){
                    check=true;
                }
            }
            //cout<<internal<<" "<<external<<endl;
            if(check){
                internal++;
            }
            else{
                external++;
            }
        }
        D[value]=external-internal;
    }
}
int main(){
    ifstream fin;
    fin.open("b2");

    fin>>n>>c;
    for(int i=0;i<c;i++){    arr2[0]=2; arr2[1]=3; arr2[2]=4;

        int a, b;
        fin>>a>>b;
        graph[a-1].push_back(b-1);
        graph[b-1].push_back(a-1);
    }

    /*for(int i=0;i<n;i++){
        cout<<i+1<<" ";
        for (vector<int>::iterator ir = graph[i].begin(); ir != graph[i].end(); ++ir){
            cout << *ir+1 << " ";
        }
        cout<<endl;
    }*/

    for(int i=0;i<n/2;i++){
        arr1[i]=i;
        arr2[i]=i+n/2;
    }

    while(true){
        computeDvalues();
        /*(for(int i=0;i<n;i++){
            cout<<D[i]<<" ";
        }
        cout<<endl;*/
        if(!findBestGain()){
            print();
            return 0;
        }
    }


}
