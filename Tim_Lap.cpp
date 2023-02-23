#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int arr[n];
    for (int i=0; i<n; i++){
        std::cin >> arr[i];
    }
    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i] == arr[j])
            {
                std::cout << "yes\n";
                return 0;
            }
        }
    }
    std::cout << "no\n";
    return 0;
}
