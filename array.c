#include<stdio.h>
void arrayfunction(int arr[]);
int main(){
    int arr[5]={};
    arrayfunction(arr);

   
return 0;
}

void arrayfunction(int arr[]){
     for(int i=0;i<5;i++){
        printf("Enter the number: ");
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }

}