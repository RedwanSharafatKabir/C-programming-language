#include<stdio.h>
int main()
{
    int i,start,end,mid,key,A[5]={10,20,30,40,50};
    start=0; end=4; key=20;
    do{
        mid=(int)((start+end)/2);
        printf("start: %d\tEnd: %d\tMiddle Number index: %d\tkey:%d\tA[mid]: %d\n",start,end,mid,key,A[mid]);
        if(A[mid]==key){
            printf("\nFound at : %d\n",mid);
            break;
        }
        else if(A[mid]>key)
            {end=mid-1;}
        else
            {start=mid+1;}
    }
    while(start<=end);
        if(start>end) printf("Failed\n");
    return 0;
}
