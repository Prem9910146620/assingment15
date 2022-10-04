void s();
main()
{
    int a[5]={32,29,40,12,70};
    s(a);
    return 0;

}
void s(int b[])
{ int j,d;
     d=2;
    int temp;
     while(d>0)
     {     temp=b[4];
         for( j=4;j>0;j--)
        { b[j]=b[j-1]; }
         b[0]=temp;
        d--; }

        for(j=0;j<5;j++)
        {
            printf(" \n %d",b[j]);
        }
}
