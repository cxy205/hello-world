#including<stdio.h>
int main ()
{
	int day, month, year;
	printf("���������ڣ�day month year)��");
	scanf("%d %d %d",&day ,&month ,&year);
	switch(day)
	{
		case 1:
		case 11:
		case 21:
		case 31: printf("%dst",day);
		         break;
		case 2:
		case 12:
		case 22:printf("%dnd",day);
		        break;
		case 3:
		case 13:
		case 23:printf("%drd",day);
		        break;
		default:printf("%dth",day);
		        break;	 
	}
	switch(month)
	{
		case 1:printf("һ��");
		       break;
	    case 2:printf("����");
		       break;
	    case 3:printf("����");
		       break;
	    case 4:printf("����");
		       break;
	    case 5:  printf("����");       
		       break;
        case 6:  printf("����");      
		       break;
        case 7:  printf("����");   
		       break;
        case 8:  printf("����");
		       break;
        case 9:  printf("����");
		       break;
        case 10: printf("ʮ��");  
		       break;
        case 11: printf("ʮһ��");
		       break;
        case 12: printf("ʮ����");
		       break;
	}
	printf("%d",year);
	return 0; 
 } 
