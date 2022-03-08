// first come first serve
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int bt[n];
    for(int i=0;i<n;i++)
    {
        cin >> bt[i];
    }
    int wt[n]={0};
    wt[0]=0;
    int s=0;
    for(int i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        s+=wt[i];
    }
    for(int i=0;i<n;i++)
    {
        cout << "waiting time of process-" << i << " : " << wt[i] << endl;
    }

    cout << "average waiting time : " << s/n << endl;
}
