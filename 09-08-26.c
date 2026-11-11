#include <stdio.h>
int main(){
	int arr[10];
	int i;
	for(i=0;i<10;i++)
	{printf("ENTER ELEMENT %d: \n",i+1);
	scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++){
	printf("%d\n",arr[i]);
	}
	return 0;
}
