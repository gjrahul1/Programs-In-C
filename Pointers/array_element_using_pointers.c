#include <stdio.h>
int main()
{
    int arr[10],index,size;
    int *ptr=arr; //pointer points to the memory of array
    printf("Enter the size of array within 10 \t");
    scanf("%d",&size);
    for(index=0; index<size; index++)
    {
    printf("Enter the elements of array upto %d \t",size);
    scanf("%d",ptr);
    ptr++; //Incrementing the pointer to the next memory location
    }
    ptr=arr; //Pointer points to the first element
    printf("[");
    for(index=0; index<size; index++)
    {
        printf("%d, \t",*ptr);
        ptr++;
    }
    printf("]");
    
}
