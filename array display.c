# include<stdio.h >
int   main( )
{
int   a[25], n, i  ;
printf(" Enter the Numbers of Array Element: ") ;
scanf("%d ", & n) ;
printf("\n Enter the Array Element : \n") ;
for (  i = 1 ; i<=n ; i++ )
{
scanf("%d ", & a[i]) ;
}
printf("\n Array Elements are : \n ") ;
for (  i = 1 ; i <=n ; i++ )
{
printf("\t %d ", a[i]) ;
}
return ( 0 ) ;
}