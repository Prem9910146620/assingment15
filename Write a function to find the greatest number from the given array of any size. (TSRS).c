int greatest();
int main()
{
    int a[10],i;
    printf("enter 10 number\n ");
    for(i=0;i<10;i++)
        { scanf("%d",&a[i]); }
        printf("greatest number is %d",greatest(a));

    return 0;
}
int greatest(int b[])
{ int i,m=-1;
for(i=0;i<10;i++)
    { if(m<b[i])
       m=b[i];
    }

  return m;
}
