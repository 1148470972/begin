#include <stdio.h>
int isprime(int i){
	int k,c;
	int a=1;
	for(k=2;k<i;k++){
		if(i%k==0){
			a=0;
			break;
		}
	}
	if (a==1){
		printf("%d ",i);
		c=i;
	}
	return c;
}
int main()
{
	int i;
	int n;
	int c;
	scanf("%d %d",&i,&n);
	int sum=0;
	for(;i<n;i++){
		isprime(i);
		sum+=c;
	}
	printf("%d",sum);
	return 0;
}
