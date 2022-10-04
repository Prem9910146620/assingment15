void frequency();
main()
{
    int a[12]={5,1,2,3,4,5,8,8,6,6,7,7 };
    frequency(a);


    return 0;
}
void frequency(int b[])
{
    int c[100]={ 0 },i;
    for(i=0;i<10;i++)
        { c[b[i]]++; }
    for(i=0;i<100;i++)
    { if( c[i]!=0)
         printf("%d-%d \n",i,c[b[i]]);
    }

    }
