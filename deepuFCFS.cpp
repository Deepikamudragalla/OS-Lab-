#include<bits/stdc++.h>
using namespace std;
struct time
{
    int at;
    int bt;
    int ct;
    int tat;
    int proid;
}; 
int main()
{
    int n;
    cin >> n;
    struct time jobs[n];
    for(int i=0;i<n;i++)
    {
        cin >> jobs[i].at;
        cin >> jobs[i].bt;
        jobs[i].proid=i+1;
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<i;j++)
    {
        if(jobs[i].at<jobs[j].at)
        swap(jobs[i],jobs[j]);
    }

    jobs[0].ct=jobs[0].at+jobs[0].bt;

    for(int i=1;i<n;i++)
    {
        if(jobs[i-1].ct >= jobs[i].at)
        {
            jobs[i].ct = jobs[i-1].ct+jobs[i].bt;
        }
        else
        {
            jobs[i].ct = jobs[i-1].ct+(jobs[i].at-jobs[i-1].ct)+jobs[i].bt;
        }
    }
     
     for(int i=0;i<n;i++)
     {
         cout << jobs[i].proid << "--ct--" << jobs[i].ct << endl;
     }

}
