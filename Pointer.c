#include <stdio.h>
int func(int num,char value,int *);
int main()
{
	int a = 1,b;
    char value = 'A';
	int *p= &a;//p取a的地址
    *p = 5;//p调用a的地址来修改a的内存空间
    scanf("%c",&value);
    b = func(a,value,&a);
    //printf("输出a的地址为%p\n",&a);
    //printf("输出p的地址为%p\n",p);
    printf("输出a的值为%d\n",a);
    printf("输出p的值为%d\n",*p);
    printf("返回的值为%d\n",b);

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