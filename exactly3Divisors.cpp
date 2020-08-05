//Given a positive integer value N. 
//The task is to find how many numbers less than or equal to N
// have numbers of divisors exactly equal to 3.
bool isPrime(int n)
{
    if(n<=1)
    return false;
    
    for(int i=2;i<=sqrt(n);i++){ //We check from 2 from sqrt(N) as divisors, if any, would exist till sqrt(N)
      if(n%i==0)
        return false;
    }
    return true ;
}
bool isPS(int N){
    int root=sqrt(N);
    return (root*root==N);
}
int exactly3Divisors(int N)
{
    int counter=0;
    for(int i=1;i<=N;i++){              // A number N only has 3 divisors if it is a perfect square and its square root is a prime number,
        if(isprime(sqrt(i)) && isPS(i)) //  and we know the number of perfect squares less than N which is sqrt(N),
            counter++;                  // so just checking if i is prime or not
    }
    return counter;  
}
