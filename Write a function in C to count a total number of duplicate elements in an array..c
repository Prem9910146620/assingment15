int duplicatenum();
main()
{
    int b[10],k;
    printf("enter 10 number \n ");
    for(k=0;k<10;k++)
        { scanf("%d",&b[k]); }

         printf(" duplicate number is =%d",duplicatenum(b));
    return 0;
}
int duplicatenum(int a[])
{
   int i,j,c=0;


        for(i=0;i<10;i++)
        { for(j=i+1;j<10;j++)
       { if(a[i]==a[j])
            c++;

    } } return c;
}
