//Factorial of 5 is 120.
//Number of digits in 120 is 3 (1, 2, and 0)
int digitsInFactorial(int N)
{
     double sum=0.0;
     for(int i=1;i<=N;i++){
         sum+=log10(i);
     }
     return (1+floor(sum));
}
