#define _CRT_SECURE_NO_WARNINGS 1
//�˴�����ط��ڵ�һ�У����ڽ��scanf�ġ�����ȫ�����⣬�����ڼ���ʹ��scanf
//��Ѱ��newc++file.cpp���±�����ô�����ʵ�ֺ��������ٴ�����ͬʱʵ�ָú����Ĵ��ڼ�ʹ��

#include <stdio.h>
//int main()
//{
//	//������һ������
//	//����	���������� = 0;
//	//����	����������;//���Ƽ�
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n",age);
//	printf("%f\n",weight);
//
//	return 0;
//}

//%d - ����
//%f - float
//%if - double

//a - ȫ�ֱ��� - {}�ⲿ����ı���
//int a = 100;

//int main()
//{
//	//a - �ֲ����� - {}�ڲ�����ı���
//	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
//	//������ȫ�ֱ����;ֲ�������������ͬ
//	int a = 10;
//
//	printf("%d\n", a);
//
//	return 0
//}


//дһ�����������������ĺ�
//scanf���������뺯��
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);
	//����취��Դ�ļ��ĵ�һ�м��� #define _CRT_SECURE_NO_WARNINGS 1
	//����ʹ��VS�������ṩ��scanf_s���������ú�������C���Ա�׼�涨��

	sum = a + b;
	printf("sum = %d\n", sum);

	return 0;

}