#include <iostream>

using namespace std;

int main(){
    int n,m;

    cin >> n >> m;

    int arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Here is your 2D Array";
    for (int i = 0; i<n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j]<< " ";
        }
        cout<<"\n";
    }

    int Target;
    bool flag = false;
    cout<<"Put the element that you want to find: ";
    cin >> Target;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == Target){
                cout<<i << " " << j << endl;
                flag = true;
            }
        }
    }
    if(flag){
        cout << "element is found";
    }
    else{
        cout<<"element is not found";
    }
}
