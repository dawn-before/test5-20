#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int x, int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int Mul(int x, int y){
//	return x*y;
//}
//int Div(int x, int y){
//	return x / y;
//}
//int main(){
//	//指针数组
//	int* arr[5];
//	//需要一个数组，这个数组可以存放4个函数的地址 - 函数指针的数组
//	int(*pa)(int, int) = Add;
//	int(*par[4])(int, int) = { Add, Sub, Mul, Div };//函数指针的数组
//
//	int i = 0;
//	for (i = 0; i < 4; i++){
//		printf("%d\n", par[i](2, 3));
//	}
//	return 0;
//}

void menu(){
	printf("****	1.Add	2.Sub	****\n");
	printf("****	3.Mul	4.Div	****\n");
	printf("****		0.exit		****\n");
	printf("****************************\n");
}
int Add(int x, int y){
	return x + y;
}
int Sub(int x, int y){
	return x - y;
}
int Mul(int x, int y){
	return x*y;
}
int Div(int x, int y){
	return x / y;
}
//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4){
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0){
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//		
//	} while (input);
//}
//void Calc(int(*pf)(int, int)){
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main(){
//	int input = 0;
//	
//	do{
//		menu();
//		printf("请选择：>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}

//int main(){
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppArr是一个数组指针，指针指向的数组有四个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int);
//	return 0;
//}
void print(char *str){
	printf("hehe:%s", str);
}
void test(void(*p)(char*)){
	printf("test\n");
	p("bit\n");
}
int main(){
	test(print);
	return 0;
}