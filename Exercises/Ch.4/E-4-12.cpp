
//12. Modify the program described in the previous exercise to take an input
//    value max and then find all prime numbers from 1 to max.

//    I'm gonna start from 2 and make a list of prime numbers and use it to 
//    find the others.

#include<vector>
#include<iostream>

int main()
{
    std::vector<int>primes = {};

    std::cout << "printing prime numbers less than : ";

    int n = 2;
    if (!(std::cin >> n))
    {
        std::cout << "input should be an integer number. exit..."<< std::endl;
        return 0;
    }

    bool isPrime = true;
    for(int i=2; i<n; i++)
    {
        for(int p:primes)
            if(i%p == 0)
            {
                isPrime = false;
                break;
            }
        if(isPrime)
        {
            primes.push_back(i);
            std::cout << i << ' ';
        }

        isPrime = true;
    }

    std::cout << std::endl;
}
// Note: this algorithm is slow
