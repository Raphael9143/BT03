#include <iostream>
#include <iomanip>

int main()
{
    int n;
    std::cin >> n;
    int pascal[n][n];
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=n; j++)
        {
            pascal[i][j] = 0;
        }
    }
    for (int i=1; i<=n+1; i++)
    {
        for (int j=1; j<=i; j++)
        {
            if (j==1 || j==i)
                pascal[i-1][j-1] = 1;
            else
                pascal[i-1][j-1] = pascal[i-2][j-1] + pascal[i-2][j-2];
        }
    }
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=i; j++)
        {
            std::cout << pascal[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
