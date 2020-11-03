#including<stdio.h>
int main ()
{
	int day, month, year;
	printf("请输入日期（day month year)：");
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
		case 1:printf("一月");
		       break;
	    case 2:printf("二月");
		       break;
	    case 3:printf("三月");
		       break;
	    case 4:printf("四月");
		       break;
	    case 5:  printf("五月");       
		       break;
        case 6:  printf("六月");      
		       break;
        case 7:  printf("七月");   
		       break;
        case 8:  printf("八月");
		       break;
        case 9:  printf("九月");
		       break;
        case 10: printf("十月");  
		       break;
        case 11: printf("十一月");
		       break;
        case 12: printf("十二月");
		       break;
	}
	printf("%d",year);
	return 0; 
 } 
