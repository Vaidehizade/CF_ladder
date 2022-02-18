#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    string temp;
    int l=0,r=0,k=0;
    bool z=true;
    //char arr[n][m];
    for(int i=0;i<n;i++){
        cin>>temp;
        for(int j=0;j<m;j++){
            //arr[i][j]=temp[j];
            if(temp[j]=='B'){
                if(z){
                    l=j;
                    k=i;
                    z=false;
                }
                else{
                    r=j;
                }
            }
        }
    }
    //cout<<l<<" "<<r<<" "<<k<<endl;
    int sze=0;
    if(r!=0){
        sze=abs(r-l+1);
    }
    cout<<k+1+floor(sze/double(2))<<" "<<l+1+floor(sze/double(2))<<endl;
}


// #include<bits/stdc++.h>
// using namespace std;
// int n,m,j=-1,i=-1,k;
// string s;
// int main()
// {
// cin>>n>>m;
// while(j<0)
// {
//     cin>>s;
//     j=s.find('B');
//     i++;
// }
//    k=(s.rfind('B')-s.find('B'))/2+1;
//    cout<<i+k<<" "<<j+k;
// }