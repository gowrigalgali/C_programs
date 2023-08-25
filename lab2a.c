//Linear Search
#include<stdio.h>
#include<time.h>
int search(int array[],int key,int size);
int main(){

int key,b,size;
printf("Enter the size of the array:");
scanf("%d",&size);
if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1; 
    }
int array[size];
for(int i=0;i<size;i++){
    array[i]=i*5;
}
printf("Enter the key:");
scanf("%d",&key);
clock_t t;
t=clock();
b=search(array,key,size);
printf("%d",b);
t=clock()-t;
    printf("\nThe execution time is %ld",((double)t)/CLOCKS_PER_SEC);
}
int search(int array[],int key,int size){
for(int i=0;i<size;i++){
    if(key==array[i])
    return 1;
}
return -1;
}
