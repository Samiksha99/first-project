#include<stdio.h>
void func(int num,int base);
void main()
{
    int opt,num,base,rem;
    printf("enter a number:");
    scanf("%d",&num);
    printf("1.binary\n");
    printf("2.octal\n");
    printf("3.hexadecimal\n");
    printf("enter your option: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
          printf("binary equivalent is:\n");
          base=2;
        break;
        case 2:
          printf("octal equivalent is:\n");
          base=8;
        break;
        case 3:
          printf("hexadecimal equivalent is: ");
          base=16;
        break;
    }
    func(num,base);
}

void func(int num,int base)
{
    char a[10];
    int i=0,j=0,rem=0;
    while(num>0){
      rem=num%base;
      num=num/base;
      if(rem>9 && rem<16)
      {
      	 a[i++]=rem-10+'A';
      }
      else
      {
         a[i++]=rem+'0';
      }
    }
    for(j=i-1;j>=0;j--)
    {
      printf("%c",a[j]);
    }
    printf("\n");

}


