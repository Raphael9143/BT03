#include <iostream>
#include <iomanip>

int main()
{
    int n;
    std::cin >> n;
    int matrix[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            matrix[i][j] = 0;
        }
    }
    int coor[2] = {0, n/2};
    matrix[coor[0]][coor[1]] = 1;

    for (int i=2; i<=n*n; i++){
        coor[0]--;
        coor[1]++;
        if (coor[0] == -1 && coor[1] == n)
        {
            if (matrix[n-1][0] != 0)
            {
                coor[0] += 2;
                coor[1] --;
                matrix[coor[0]][coor[1]] = i;
            }
            else
            {
                coor[0] = n-1;
                coor[1] = 0;
                matrix[coor[0]][coor[1]] = i;
            }
        }
        else if(coor[0] < 0)
        {
            if (matrix[n-1][coor[1]] != 0)
            {
                coor[0] += 2;
                coor[1] -= 1;
                matrix[coor[0]][coor[1]] = i;
            }
            else
            {
                coor[0]=n-1;
                matrix[coor[0]][coor[1]] = i;
            }
        }
        else if (coor[1] == n)
        {
            if (matrix[coor[0]][0] != 0)
            {
                coor[0] += 2;
                coor[1] = n-1;
                matrix[coor[0]][coor[1]] = i;
            }
            else
            {
                coor[1] = 0;
                matrix[coor[0]][0] = i;
            }
        }

        else if (matrix[coor[0]][coor[1]] != 0)
        {
            coor[0] += 2;
            coor[1] -= 1;
            matrix[coor[0]][coor[1]] = i;
        }
        else if (matrix[coor[0]][coor[1]] == 0)
        {
            matrix[coor[0]][coor[1]] = i;
        }


    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            std::cout << std::setw(2) << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;

}
