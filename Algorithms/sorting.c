#include<stdio.h>
#include<stdlib.h>
#include"sorting.h"

long int count_bubble=0;
long int count_insertion=0;
long int count_merge=0;
long int count_quick=0;
long int count_selection=0;

//******************Bubble Sorting Function is defined******************
long int bubble_sort(int *data,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
    	for(j=n-1;j>i;j--)
	{
		count_bubble++;
		if(data[j]<data[j-1])
		{
			temp=data[j];
	                data[j]=data[j-1];
	                data[j-1]=temp;
		}
	}
    }
    return count_bubble;
}

//******************Insertion Sorting Function is defined******************
long int insertion_sort(int i,int *data,int n)
{
	int j,key;
	for(j=0;j<n;j++)
	{
		key=data[j];
		i=j-1;
		while(i>=0 && data[i]>key)
		{
			count_insertion++;
			data[i+1]=data[i];
			i = i-1;
		}
		data[i+1]=key;
	}
return count_insertion;
}

//******************Merge Sorting Function is defined in which another function "merge" is used******************
long int merge_sort(int *data,int low,int high)
{
  int mid;
  if(low<high) {
    mid = low + (high-low)/2;                   //To avoid stack overflow
    // Divide and Conquer
    merge_sort(data,low,mid);
    merge_sort(data,mid+1,high);
    // Combine
    merge(data,low,mid,high);
  }
  return count_merge;
}

//Under Merge Sorting,function "merge" is defined 
void merge(int *data,int l,int m,int h)
{
  int n1,n2,i,j,k;
  n1=m-l+1;
  n2=h-m;
  int arr1[n1+1],arr2[n2+1];               // Two temporary arrays to hold the two arrays to be merged

  for(i=0; i<n1; i++)
    arr1[i]=data[l+i];
  for(j=0; j<n2; j++)
    arr2[j]=data[m+j+1];

  arr1[i]=9999;                         // To mark the end of each temporary array
  arr2[j]=9999;

  i=0;
  j=0;
  for(k=l; k<=h; k++) {                //process of combining two sorted arrays
    count_merge++;
    if(arr1[i]<=arr2[j])
      data[k]=arr1[i++];
    else
      data[k]=arr2[j++];
  }

  //return count_merge;
}

//******************Quick Sorting Function is defined******************
long int quick_sort (int *data, int p, int r) 
{
	int q;
	if(p < r)
	{
		q = partition(data,p,r);
		quick_sort(data, p, q-1);
		quick_sort(data, q + 1, r);
	}
	return count_quick;
}

int partition(int data[], int p, int r)
{
	int x,i,j,temp;
	x = data[r];
	i = p - 1;

	for(j=p; j < r; j++)
	{
		count_quick++;
		if(data[j]<=x)
		{
			i = i+1;
        		temp=data[i];
        	        data[i]=data[j];
       	 	        data[j]=temp;
		}
	}
	temp=data[i+1];
	data[i+1]=data[r];
	data[r]=temp;
return i+1;
}
//******************Selection Sorting Function is defined******************
long int selection_sort(int *data,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
        	for(j=i+1;j<n;j++)
        	{
		      count_selection++;
        	      if(data[i]>data[j])
        	      {
        	          temp=data[i];
        	          data[i]=data[j];
       	 	          data[j]=temp;
        	      }
        	}
  	}
  	return count_selection;
}
