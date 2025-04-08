#include<stdio.h>
#include<stdlib.h>

int ack(){
    int k=rand();
    if(k%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

void main(){
    int test,i,n;
    printf("Enter the number of packets: \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        x:test=ack();
        if(test==1){
            printf("Ack received, sending next packet");
        }
        else{
            printf("did not receive Ack, sending again");
            goto x;
        }
    }
}
