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
	printf("\nColor-Pro 颜色处理小工具\n\n直接输入程序名恢复原色\n\n");
    printf("	字\n"); 
	printf("		1	深蓝色\n");
	printf("		2	深绿色\n");
	printf("		3	深青色 \n");
	printf("		4	深红色\n");
	printf("		5	深粉色\n");
	printf("		6	黄色\n");
	printf("		7	深白色\n");
	printf("		8	灰色\n");
	printf("		9	浅蓝色\n");
	printf("		10	浅绿色\n"); 
	printf("		11	浅青色 \n");
	printf("		12	浅红色 \n");
	printf("		13	浅粉色\n"); 
	printf("		14	浅黄色 \n");
	printf("		15	浅白色 \n");
	printf("\n");
	printf("	背景:(例如20指背景""深蓝色"",20除以16余数为4,即文字为""深红色"")\n");
	printf("		1~15		黑色 \n");
	printf("		16~31		深蓝色 \n");
	printf("		32~47		深绿色\n");
	printf("		48~63		深青色\n");
	printf("		64~79		深红色\n");
	printf("		80~95		深粉色\n");
	printf("		96~111		深黄色\n");
	printf("		112~127 	深白色\n");
	printf("		128~143 	灰色\n");
	printf("		144~159 	浅蓝色\n");
	printf("		160~175 	浅绿色\n");
	printf("		176~191 	浅青色\n");
	printf("		192~207 	浅红色\n");
	printf("		208~223 	浅粉色\n");
	printf("		224~239 	浅黄色\n");
	printf("		240~255 	浅白色\n");
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