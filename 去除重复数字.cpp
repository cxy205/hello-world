#include<stdio.h>
#include<stdbool.h>
int main()
{
	bool a[10]={false};
	long n;
	long b;
	
	printf("���������֣�");
	scanf("%ld",&n);
	
    
    for(n>=0;b=n%10;n/=10)
    {
    
    if(a[b])
    break;
    else{
    printf("%ld",b);
    a[b]=true;
	}
}
	
	return 0;
    
 } 
