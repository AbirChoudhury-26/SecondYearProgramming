#include <stdio.h>

int main(void) {
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
	    int g;
	    scanf("%d",&g);
	    char a[g];
	    for(int j=0;j<g;j++)
	    {
	        scanf("%c",&a[j]);
	    }
	    
	    for(int j=0;j<g;j++)
	    {
	        if(a[j]=='Y')
	        {
	            printf("NOT INDIAN\n");
	        }
	        else if(a[j]=='I')
	        {
	            printf("INDIAN\n");
	        }
	        
	        else
	        {
	            printf("NOT SURE\n");
	        }
	    }
	}
	return 0;
}

