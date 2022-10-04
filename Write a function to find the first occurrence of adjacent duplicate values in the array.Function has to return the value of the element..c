int adjdupli();
int main()
{
    int a[10]={1,2,3,8,4,5,6,6,7,8};
 printf("%d",adjdupli(a));
 return 0;
}
int adjdupli(int b[])
{  int j;
    for(j=0;j<10;j++)
        { if(b[j]==b[j+1])
        return b[j]; }
}
