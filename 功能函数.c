 //���ܺ�����������
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
	printf("�������û���:\n");
	scanf("%s",u); 
	printf("����������\n");	
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
    printf("|         1-->�ӷ�����             |\n");
    printf("|         2-->��������             |\n");
	printf("|         3-->�˷�����             |\n");
	printf("|         4-->��������             |\n");
	printf("|         0-->�˳�                 |\n");
    printf("------------------------------------\n");
	while(1)
	{
	printf("����������Ҫ��������ݣ�");
	scanf("%f%f",&a,&b);
	printf("����������ѡ��:");
	scanf("%d",&o);
	switch(o)
	{	
	case 1:
		c=sum(a,b);
		printf("���������Ĵ�");
        scanf("%f",&d);
	    if(d==c)
			printf("����ȷ\n");
		else
			printf("�𰸴���!\n");
printf("��ȷ��:%.2f\n",c);
		break;
	case 2:
		c=jianfa(a,b);
printf("���:%.2f\n",c);
		break;
	case 3:
		c=chengfa(a,b);
		printf("���������Ĵ�");
        scanf("%f",&d);
	    if(d==c)
			printf("����ȷ\n");
		else
			printf("�𰸴���!\n");
printf("��ȷ��:%.2f\n",c);
		break;
	case 4:
		c=chufa(a,b);
		printf("���������Ĵ�");
        scanf("%f",&d);
	    if(d==c)
			printf("����ȷ\n");
		else
			printf("�𰸴���!\n");
printf("��ȷ��:%.2f\n",c);
		break;
	case 0:return 0;
	default:printf("����������!\n");}
	}
}
	else
	{printf("\n");
	printf("��¼ʧ��!\n");}
}