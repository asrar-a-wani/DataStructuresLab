#include <stdio.h>
int main(){
	int i,j,k,r;
	int arr[10];
	int brr[10];
	int sum[10]={0};
	for(i=0;i<10;i++)
	{printf("ENTER ELEMENT for array a %d: \n",i+1);
	scanf("%d",&arr[i]);
	}
	for(j=0;j<10;j++)
	{printf("ENTER ELEMENT for array b %d: \n",j+1);
	scanf("%d",&brr[j]);
	}
	for(k=0;k<10;k++){
		sum[k]=arr[k]+brr[k];
	}
	for(r=0;r<10;r++){
	printf("ELEMENT %d of the SUM array is:%d \t \n",r+1,sum[r]);
	}
	return 0;
}
	
	
