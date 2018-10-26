#include<iostream>
using namespace std;
int main()
{
             int queue[100],n,head,i,j,k,seek=0,diff,abs;
             float avg;
             cout<<"*** fifo Disk Scheduling Algorithm ***\n";
             cout<<"Enter the size of Queue\t";
             cin>>n;
             printf("Enter the Queue\t");
             for(i=1;i<=n;i++)
             {
                          cin>>queue[i];
             }
             cout<<"Enter the initial head position\t";
             cin>>head;
             queue[0]=head;
             cout<<"\n";
             for(j=0;j<=n-1;j++)
             {
                          diff=abs(queue[j+1]-queue[j]);
                          seek+=diff;
                          cout<<"Move from %d to %d with Seek %d\n"<<queue[j]<<queue[j+1],diff);
             }
            cout"\nTotal Seek Time is %d\t"<<seek;
             avg=seek/(float)n;
             cout"\nAverage Seek Time is %f\t"<<avg;
             return 0;
}

