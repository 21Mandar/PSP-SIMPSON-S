/*SIMPSON'S 1/3RD AND 3/8TH RULE*/
#include<stdio.h>
#include<math.h>

/* Define the function to be integrated here: */
double f(double x)
{
  return x*x;
}

/*Program begins*/
int main()
{
  int n,i;
  double a,b,h,x,sum=0,integral;
  /*Ask the user for necessary input */
    printf("\nEnter the no. of sub-intervals: ");
    scanf("%d",&n);
    printf("\nEnter the initial limit: ");
    scanf("%lf",&a);
    printf("\nEnter the final limit: ");
    scanf("%lf",&b);
    
    /*Begin Simpson's Procedure: */
    h=fabs(b-a)/n;
    for(i=1;i<n;i++)
    {
      x=a+i*h;
      if(i%2==0)
      {
      sum=sum+2*f(x);
      integral=(h/3)*(f(a)+f(b)+sum);
      }
      else if(i%2==1)
      {
        sum=sum+4*f(x);
        integral=(h/3)*(f(a)+f(b)+sum);
      }
      else if(i%3==0)
      {
        sum=sum+2*f(x);
        integral=(3*h/8)*(f(a)+f(b)+sum);
      }
      else if(i%3!=0)
      {
        sum=sum+3*f(x);
        integral=(3*h/8)*(f(a)+f(b)+sum);
      }
      else
      {

      }
    }
  /*Print the answer */
  printf("\nThe integral is: %lf\n",integral);

  return 0;
}