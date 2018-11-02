#include<cstdio>
#include<cstring>
#include<algorithm>
#include<windows.h>
using namespace std;
void color(int a){
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void help();
int main(int argc,char**argv){
	if(argc==1){
		color(7);
		return 0;
	}
	if(argv[1][0]<'0'||argv[1][0]>'9'){
		help();
		return 0;
	}
	int n,len=strlen(argv[1]);
	n=0;
	for(register int i=0;i<len;i++)n=n*10+argv[1][i]-48;
	color(n);
	return 0;
}
void help(){
	printf("\nColor-Pro ��ɫ����С����\n\nֱ������������ָ�ԭɫ\n\n");
    printf("	��\n"); 
	printf("		1	����ɫ\n");
	printf("		2	����ɫ\n");
	printf("		3	����ɫ \n");
	printf("		4	���ɫ\n");
	printf("		5	���ɫ\n");
	printf("		6	��ɫ\n");
	printf("		7	���ɫ\n");
	printf("		8	��ɫ\n");
	printf("		9	ǳ��ɫ\n");
	printf("		10	ǳ��ɫ\n"); 
	printf("		11	ǳ��ɫ \n");
	printf("		12	ǳ��ɫ \n");
	printf("		13	ǳ��ɫ\n"); 
	printf("		14	ǳ��ɫ \n");
	printf("		15	ǳ��ɫ \n");
	printf("\n");
	printf("	����:(����20ָ����""����ɫ"",20����16����Ϊ4,������Ϊ""���ɫ"")\n");
	printf("		1~15		��ɫ \n");
	printf("		16~31		����ɫ \n");
	printf("		32~47		����ɫ\n");
	printf("		48~63		����ɫ\n");
	printf("		64~79		���ɫ\n");
	printf("		80~95		���ɫ\n");
	printf("		96~111		���ɫ\n");
	printf("		112~127 	���ɫ\n");
	printf("		128~143 	��ɫ\n");
	printf("		144~159 	ǳ��ɫ\n");
	printf("		160~175 	ǳ��ɫ\n");
	printf("		176~191 	ǳ��ɫ\n");
	printf("		192~207 	ǳ��ɫ\n");
	printf("		208~223 	ǳ��ɫ\n");
	printf("		224~239 	ǳ��ɫ\n");
	printf("		240~255 	ǳ��ɫ\n");
	printf("	Example: colorc 15\n");
	color(15);
	printf("	Colored Text");
	color(7);
	printf(":");
	color(6);
	printf("Hello World!\n"); 
	color(7);
	return;
}