void sort();
int main()
{  int a[10],i;
printf("enter 10 number\n ");
 for(i=0;i<10;i++)
    { scanf("%d",&a[i]); }

    sort(a);

    return 0;
}
void sort(int b[])
{
    int i,j,m;
    for(i=0;i<9;i++)
        { for(j=i+1;j<10;j++)
        {  if(b[i]>b[j])
             { m=b[i];
              b[i]=b[j];
              b[j]=m;
        }
        }
         }

   for(i=0;i<10;i++)
     { printf(" %d",b[i]); }


}
