// *******************************
// * Assignment-2 Number 8.5
// *******************************


#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <bits/stdc++.h>
using namespace std;

// Function to return
// gcd of a and b
int Euc_gcd(int a, int b)
{
    if (a == 0)
        return b;
    return Euc_gcd(b % a, a);
}

// Main Program
int main()
{
    int total;

// ************************************************
// * Generate random numbers using rand() function
// ************************************************

    cout << "Enter number of random no for which pi should be estimated : ";
    cin >> total;
    int r_num[total];
    for(int i = 0; i<total; i++)
        r_num[i] = (rand()%total)+1;
    for(int i = 0; i<total; i++)
        cout << r_num[i] << '\t';
    cout << endl;

    int sum  = 0,temp = 0;
    for(int i = 0; i<total; i+= 2)
    {
        temp = Euc_gcd(r_num[i], r_num[i+1]);
        if (temp == 1)
            sum++;
    }

// ************************************************
// * Estimation of PI value from 6/(PI^2)
// ************************************************

    float prob_get = (6*(total/2))/sum;
    float PI =  sqrt(prob_get);
    cout<<"Estimation of PI vlaue is "
        << PI <<endl;
    system("pause");

    return 0;

}

