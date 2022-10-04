void unique();
main()
{
    int b[10],k;
    printf("enter 10 number \n ");
    for(k=0;k<10;k++)
        { scanf("%d",&b[k]); }

         unique(b);
    return 0;
}
void unique(int a[])
{
   int i,j,c,e;
         for(i=0;i<10;i++)
         {     c=0;
        for(j=0;j<10;j++)
       { if(i!=j)
              { if(a[i]==a[j])
                  c++; }
   } if(c==0)
    printf("%d",a[i]);
  }

}
