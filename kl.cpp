#include <iostream>
#include <fstream>
using namespace std;
int n, c;
int mark[1000][1000];

int score(int arr1[], int arr2[]){
    int res=0;
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            res+=mark[arr1[i]][arr2[j]];
        }
    }
    return res;
}

pair<int, int> findBestPair(int arr1[], int arr2[]){
    int best=score(arr1, arr2);
    pair<int, int> res;
    res.first=-1;

    for(int i=0;i<n/2;i++){
        for(int j=0;j<n/2;j++){
            pair<int, int> curr;
            curr.first=arr1[i]; curr.second=arr2[j];

            arr1[i]=curr.second;
            arr2[j]=curr.first;

            if(score(arr1, arr2) < best){
                best=score(arr1, arr2);
                res.first=i;
                res.second=j;
            }

            arr1[i]=curr.first;
            arr2[j]=curr.second;
        }
    }
    return res;
}

int main(){
    ifstream fin;
    fin.open("b1");

    fin>>n>>c;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){
            mark[i][j]=0;
        }
    }

    int arr[c][2];
    for(int i=0;i<c;i++){
        fin>>arr[i][0]>>arr[i][1];
        mark[arr[i][0]][arr[i][1]]++;
        mark[arr[i][1]][arr[i][0]]++;
    }

    int arr1[n/2], arr2[n/2];
    for(int i=0;i<n/2;i++){
        arr1[i]=i+1;
        arr2[i]=i+1+n/2;
    }


    while(findBestPair(arr1, arr2).first != -1){
        pair<int, int> flip=findBestPair(arr1, arr2);
        int temp=arr1[flip.first];
        arr1[flip.first]=arr2[flip.second];
        arr2[flip.second]=temp;
    }

    cout<<score(arr1, arr2)<<endl;
    for(int i=0;i<n/2;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n/2;i++){
        cout<<arr2[i]<<" ";
    }
}
