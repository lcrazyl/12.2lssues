 //功能函数四则运算
#include<stdio.h>
#include <stdlib.h>
 float sum(float a,float b){
	float h;
	h=a+b;
	return h;
}
 float jianfa(float a,float b){
	float h;
	h=a-b;
	return h;
}
  float chengfa(float a,float b){
	float h;
	h=a*b;
	return h;
}
   float chufa(float a,float b){
	float h;
	h=a/b;
	return h;
}
main(){
    char u[20];
	char p[50]; 
	char u_name[20]="0102033"; 
	char password[50]="ljq!"; 
	int i=0; 
	int o;
	float a,b,c,d;
	float sum(float a,float b);
    float jianfa(float a,float b);
	float chengfa(float a,float b);
	float chufa(float a,float b);
	printf("请输入用户名:\n");
	scanf("%s",u); 
	printf("请输入密码\n");	
	while ( i < 50 )
	{ p[i] = getch();
	if (p[i] == '\r')
		break;
	if (p[i] == '\b')
	{ i=i-1;
	printf("\b \b"); }
	else 
	{i=i+1;
	printf("*");} 
}
	p[i]='\0';
	system("cls");
	if (strcmp(password,p)==0&&strcmp(u_name,u)==0)
	{ 
	printf("------------------------------------\n");
    printf("|         1-->加法运算             |\n");
    printf("|         2-->减法运算             |\n");
	printf("|         3-->乘法运算             |\n");
	printf("|         4-->除法运算             |\n");
	printf("|         0-->退出                 |\n");
    printf("------------------------------------\n");
	while(1)
	{
	printf("请输入您将要计算的内容：");
	scanf("%f%f",&a,&b);
	printf("请输入您的选择:");
	scanf("%d",&o);
	switch(o)
	{	
	case 1:
		c=sum(a,b);
		printf("请输入您的答案");
        scanf("%f",&d);
	    if(d==c)
			printf("答案正确\n");
		else
			printf("答案错误!\n");
printf("正确答案:%.2f\n",c);
		break;
	case 2:
		c=jianfa(a,b);
printf("结果:%.2f\n",c);
		break;
	case 3:
		c=chengfa(a,b);
		printf("请输入您的答案");
        scanf("%f",&d);
	    if(d==c)
			printf("答案正确\n");
		else
			printf("答案错误!\n");
printf("正确答案:%.2f\n",c);
		break;
	case 4:
		c=chufa(a,b);
		printf("请输入您的答案");
        scanf("%f",&d);
	    if(d==c)
			printf("答案正确\n");
		else
			printf("答案错误!\n");
printf("正确答案:%.2f\n",c);
		break;
	case 0:return 0;
	default:printf("您输入有误!\n");}
	}
}
	else
	{printf("\n");
	printf("登录失败!\n");}
}