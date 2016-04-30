#include<stdio.h>
#include<stdlib.h>
#include"sorting.h"

int main()
{
    int i,n, *data;
    scanf("%d",&n);
    
    //To increase the efficiency of command execution dynamic memory is allocated
    data=(int*)malloc(sizeof(int)*n);

    for(i=0;i<n;i++)
    {
        //printf("data[%d]: ",i);
        //scanf("%d",&data[i]);
	data[i] = rand()%1000;
    }
    
    //Apply one sorting algorithm at a time
	
    //****************Bubble Sorting Function is used and result is displayed on the screen**************
    /*bubble_sort(data,n);*/ printf("%ld",bubble_sort(data,n));
		
    //****************Insertion Sorting Function is used and result is displayed on the screen***********
    /*insertion_sort(0,data,n);*/ //printf("%ld",insertion_sort(0,data,n));
       
    //****************Merge Sorting Function is used and result is displayed on the screen***************
    /*merge_sort(data,0,n-1);*/  //printf("%ld",merge_sort(data,0,n-1));
        
    //****************Quick Sorting Function is used and result is displayed on the screen***************
    /*quick_sort(data,0,n-1);*/ //printf("%ld",quick_sort(data,0,n-1));
    
    //****************Selection Sorting Function is used and result is displayed on the screen***********
    /*selection_sort(data,n);*/  //printf("%ld",selection_sort(data,n));
    
    /*for(i=0;i<n;i++)
    {
        printf("%d ",data[i]);
    }*/
    //printf("\n");
    return 0;
}
