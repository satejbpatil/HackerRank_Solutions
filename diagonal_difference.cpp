#include<iostream>
using namespace std;


int main()
{
    int n ;
    int sum1=0;
    int sum2=0;
    cin>>n;
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                sum1=sum1+a[i][j];
            }
            if ((i + j) == (n - 1)){
                sum2=sum2+a[i][j];
            }
        }
    }
    int ans=sum1-sum2;
    ans = abs(ans);
    cout<<ans;
    return 0;
    
}
