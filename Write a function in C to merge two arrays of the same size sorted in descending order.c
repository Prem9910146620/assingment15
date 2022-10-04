main()
{
    int a[5]={ 2,3,9,5,6};
    int b[5]={ 7,8,11,10,4};
    int c[10],e=0,n=0,k,i,j,temp;
    for(k=0;k<10;k++)
    {   if(k<5)
        { c[k]=a[e];
        e++; }
        if(k>=5)
        { c[k]=b[n];
        n++; }
    }
      for(i=0;i<9;i++)
       { for(j=i+1;j<10;j++)
          {
              if(c[i]<c[j])
              { temp=c[i];
                   c[i]=c[j];
                  c[j]=temp; }
          }
           }
    for(i=0;i<10;i++)
    {
        printf(" %d",c[i]);
    }
    return 0 ;
}
