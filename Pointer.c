#include <stdio.h>
int func(int num,char value,int *);
int main()
{
	int a = 1,b;
    char value = 'A';
	int *p= &a;//pȡa�ĵ�ַ
    *p = 5;//p����a�ĵ�ַ���޸�a���ڴ�ռ�
    scanf("%c",&value);
    b = func(a,value,&a);
    //printf("���a�ĵ�ַΪ%p\n",&a);
    //printf("���p�ĵ�ַΪ%p\n",p);
    printf("���a��ֵΪ%d\n",a);
    printf("���p��ֵΪ%d\n",*p);
    printf("���ص�ֵΪ%d\n",b);

	return 0;
}
int func(int num,char z,int *p)
{
    num++;
    int boll = 101;
    if (z == 'A')
    {   
        *p += 1;
        printf("The value is %d\n",num);
        return boll;
    }
    else
    {
        printf("The checksum is not right!\n");
    }

}