#include <stdio.h>
int traverse(int n, int*arr){
	int i;
	for (i=0; i<n;i++){
		printf("%d",arr[i]);
	}
}
int search (int n,int* arr){
	int i,key;
	printf("enter the number you wish to search:\n");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(arr[i]==key)
		{  return n+1;
		}
		else{ printf("Not found");
		}
	}
}
int add (int n,int* arr){
	int a;
	printf("Enter the element you wish to add at the end:\n");
	scanf("%d",&a);
	n=n+1;
	arr[n-1]=a;
	}
int main(){
	int n,t,i,s,a;
	int c;
	printf("Enter the number of elements in the one-dimensional array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the operation of your choice:\n 1 to traverse \n 2 to search \n 3 to add element at the end \n");
	scanf("%d", &c);
	switch(c){
	case 1: t=traverse(n,arr);
	break;
	case 2: s=search(n,arr);
	printf("%d",n);
	break;
	case 3:a=add(n,arr);
		for (i=0; i<n+1;i++){
		printf("%d \t",arr[i]);}
		break;
	}
return 0;
}

