#include <stdio.h>
int main(){
	int i,j,k;
	int arr[3][3];
	int brr[3][3];
	int multiply[3][3]={0};
	for (i=0;i<3;i++)
	{ for (j=0;j<3;j++){
	
	printf("select the element %d %d of array a: \n \t",i,j);
	scanf("%d",&arr[i][j]);}
	}
	for (i=0;i<3;i++)
	{ 
	for (j=0;j<3;j++){
		
	printf("select the element %d %d of array b: \n \t",i,j);
	scanf("%d",&brr[i][j]);}
	}
	for (i=0;i<3;i++)
	{ 
	for (j=0;j<3;j++)
	{ 
	for (k=0;k<3;k++){
	multiply[i][j]+=arr[i][k]*brr[k][j];
	}
}
}
	printf( "The multiplied array is:");
	for (i=0;i<3;i++){
	printf("\n");
	 for (j=0;j<3;j++){
	printf("%d \t",multiply[i][j]);
}
}

	return 0;
}
	
