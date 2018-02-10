#include <stdio.h>
#include<math.h>

static char c=4;
int i,k;



void makediamond2(int n)
{
  if(k==1&&n==i)
  {
    k=0;
    return;
  }
  int j;
  makespace3(n/2);
  for(j=i-2*n/2;j>0;j--)
  {
    printf("%c",c);
  }
  makespace3(n/2);
  printf("\n");
  if(n==0||k==1)
  {
    k=1;
    makediamond2(n+2);
  }
  else
    makediamond2(n-2);

}


int main() {
    int i,x;
	printf("\nEnter a number\n");
	scanf("%d",&n);
  if(n%2==0)
    n--;
  i=n*n;
  k=0;
  makediamond3(i);
	return 0;
}
