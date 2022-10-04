
int smallest();
int main()
{
    int a[10],i;
    printf("enter 10 number\n ");
    for(i=0;i<10;i++)
        { scanf("%d",&a[i]); }
        printf("smallest number is %d",smallest(a));

    return 0;
}
int smallest(int b[])
{ int i,m;
   m=b[0];
for(i=1;i<10;i++)
    { if(m>b[i])
       m=b[i];
    }

  return m;
}
