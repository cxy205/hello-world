//�ֽ�������
//ʹ�õݹ�ķ����������������ȥ������������������������ٽ�������õ������ظ������������� 
//���ڳ�����2��ʼ�����ӣ��ɷ���������������ܹ���һ��������������һ���бȸ÷�������С������ʹ��������������˲����жϳ����Ƿ�Ϊ���� 
#include<stdio.h> 
#include<string.h>
void BREAK(int m);
int main()
{
	int n,i,j,m;

	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m>=2&&m<=10000)
		{
		
		BREAK(m);
		printf("\n");
		
		}
		
	}
	return 0;
 } 
 
void BREAK(int m)
{
	int i;
	for(i=2;i<m;i++)
	{
		if(m%i==0)
		{
		m=m/i;
		break;
		}
		
	}
	if(i==m)
	{
		printf("%d",m);
		return ;
	}
	else
	{
	printf("%d*",i);	
	BREAK(m);
	return ;
	}
	
	
	
}
