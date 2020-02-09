#include <stdio.h>
#include <string.h>

int main() {
    char my_name[25];
    int my_wait;
    int num_agent;
    int wait=20;
    char queue[5][25],temp[25];

    //Scan My Name
    printf("Enter my name: ");
    scanf("%s",&my_name);

    //Insert to queue
    strcpy(queue[0],my_name);

    //Scan Number of Agent
    printf("Enter Number of Agent: ");
    scanf("%d",&num_agent);



    for(int i=1;i<5;i++){
        //Get Customer Name
        printf("Enter %d customer name: ",i);
        scanf("%s",&queue[i]);
    }

    //Sort_Name
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(strcmp(queue[i],queue[j])>0){
                strcpy(temp,queue[i]);
                strcpy(queue[i],queue[j]);
                strcpy(queue[j],temp);
            }
        }
    }

    //Print all customer name by sort and waiting time
    printf("NO\tName\tWaiting Time\n");

    for(int i=0;i<5;i++){
        printf("%d\t%s\t%d\n",i+1,queue[i],wait);
        if((i+1)%num_agent==0) wait+=20;
        if(strcmp(queue[i],my_name)==0) my_wait = wait;
    }

    printf("My waiting Time : %d",my_wait);

}
