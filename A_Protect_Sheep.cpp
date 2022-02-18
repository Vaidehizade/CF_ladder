#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c; cin>>r>>c;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0; i<r; i++){
          for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    bool z=true;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++)
        {
            if(arr[i][j]=='S'){
                if(i==0){
                    if(j==0){
                        if(arr[i+1][j]!='W' && arr[i][j+1]!='W')
                        {
                            if(arr[i+1][j]!='S'){
                                arr[i+1][j]='D';
                            }
                            if(arr[i][j+1]!='S'){
                                arr[i][j+1]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                    else if(j==c-1){
                        if(arr[i+1][j]!='W' && arr[i][j-1]!='W'){
                            if(arr[i+1][j]!='S'){
                                arr[i+1][j]='D';
                            }
                            if(arr[i][j-1]!='S'){
                                arr[i][j-1]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                    else{
                        if(arr[i+1][j]!='W' && arr[i][j-1]!='W' && arr[i][j+1]!='W'){
                            if(arr[i+1][j]!='S'){
                                arr[i+1][j]='D';
                            }
                            if(arr[i][j-1]!='S'){
                                arr[i][j-1]='D';
                            }
                            if(arr[i][j+1]!='S'){
                                arr[i][j+1]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                }
                else if(i==r-1){
                    if(j==0){
                        if(arr[i-1][j]!='W' && arr[i][j+1]!='W'){
                            if(arr[i-1][j]!='S'){
                                arr[i-1][j]='D';
                            }
                            if(arr[i][j+1]!='S'){
                                arr[i][j+1]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                    else if(j==c-1){
                        if(arr[i-1][j]!='W' && arr[i][j-1]!='W'){
                            if(arr[i-1][j]!='S'){
                                arr[i-1][j]='D';
                            }
                            if(arr[i][j-1]!='S'){
                                arr[i][j-1]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                    else{
                        if(arr[i-1][j]!='W' && arr[i][j-1]!='W' && arr[i][j+1]!='W'){
                            if(arr[i-1][j]!='S'){
                                arr[i-1][j]='D';
                            }
                            if(arr[i][j-1]!='S'){
                                arr[i][j-1]='D';
                            }
                            if(arr[i][j+1]!='S'){
                                arr[i][j+1]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                }
                else{
                    if(j==0){
                        if(arr[i+1][j]!='W' && arr[i-1][j]!='W' && arr[i][j+1]!='W'){
                            if(arr[i+1][j]!='S'){
                                arr[i+1][j]='D';
                            }
                            if(arr[i][j+1]!='S'){
                                arr[i][j+1]='D';
                            }
                            if(arr[i-1][j]!='S'){
                                arr[i-1][j]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                    else if(j==c-1){
                        if(arr[i+1][j]!='W' && arr[i-1][j]!='W' && arr[i][j-1]!='W'){
                            if(arr[i+1][j]!='S'){
                                arr[i+1][j]='D';
                            }
                            if(arr[i-1][j]!='S'){
                                arr[i-1][j]='D';
                            }
                            if(arr[i][j-1]!='S'){
                                arr[i][j-1]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                    else{
                        if(arr[i-1][j]!='W' && arr[i+1][j]!='W' && arr[i][j-1]!='W' && arr[i][j+1]!='W'){
                            if(arr[i+1][j]!='S'){
                                arr[i+1][j]='D';
                            }
                            if(arr[i-1][j]!='S'){
                                arr[i-1][j]='D';
                            }
                            if(arr[i][j+1]!='S'){
                                arr[i][j+1]='D';
                            }
                            if(arr[i][j-1]!='S'){
                                arr[i][j-1]='D';
                            }
                        }
                        else{
                            z=false;
                            break;
                        }
                    }
                }
            }
        }
    }
    if(z){
        cout<<"YES"<<endl;
        F(i,0,r){
            F(j,0,c){
                cout<<arr[i][j]<<"";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
}