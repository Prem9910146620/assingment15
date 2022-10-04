void reverse();
main()
{
    int a[10],i;
    printf("enter 10 number \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a);
    return 0;
}
void reverse(int b[])
{
    int j;
    for(j=9;j>=0;j--)
        { printf(" %d",b[j]);  }
}
