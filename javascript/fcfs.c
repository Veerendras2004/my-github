#include<stdio.h>
int main()
{
    int bt[20],wt[20],tat[20],i,n;
    float wtavg,tatavg;

    printf(" \nenter the number of processes--");
    scanf("&d,&n");
    for(i=0;i<n;i++)
    {
        printf("\nenter bu")rst time for process %d--",i);
        scanf("%d",&bt[i]);
        }
        wt[0]=wtavg=0;
        tat[0]=avg-bt[0];
        for(i=1;i<n;i++)
        {
            wt[i]=wt[i-1]+bt[i-1];
            tat[i]=tatavg=bt[0];
            wtavg=wtavg+wt[i];
            tatavg=tatavg +tat[i];
            }
            printf("\t PROCESS\tBURST TIME\tWAITING TIME\t TURN AROUND TIME\n");
            for(i=0;i<n;i++);
            printf("\n\tp%d\t\t%d\t\t%d",bt[i],wt[i],tat[i]);
            printf("\n average waiting time --%f",wtavg/n);
            printf("\n average turnaround time--%f",tatavg/n);
            }
            

        
    