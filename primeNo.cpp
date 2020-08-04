//checks whether a given number is prime or not
bool isPrime(int N)
{
    if(N==1) //1 is not prime so return false
    return false;
    
    for(int i=2;i<=sqrt(N);i++) //We check from 2 from sqrt(N) as divisors, if any, would exist till sqrt(N)
    {
        if(N%i==0) //If any i divides the number this means the nubmer is not prime
            return false;
    }
    return true; //return true in other cases
}
