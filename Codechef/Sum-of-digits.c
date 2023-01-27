#include <stdio.h>

int main(void) {
	int T,mod,sum=0;
	for(int i=0;i<3;i++)
	{
	 int N;
	 scanf("%d",&N);
	 while(N>0)
	 {
	   mod=N%10;
	   sum=sum+mod;
	   N=N/10;
	 }
	 printf("%d",sum);
	}
	return 0;
}

