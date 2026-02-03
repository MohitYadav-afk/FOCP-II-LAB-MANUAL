#include<iostream>
int main() {
    int n;
    std::cout<<"Enter the row of a Matrix : ";
    std::cin>>n;
    std::cout<<"Enter the Elements of  Matrix : "<<std::endl;
    int arr[n][n] = {0};
    for(int i = 0;i < n;i++) {
        for(int j = 0;j < n;j++) {
            std::cin>>arr[i][j];
        }
    }

    for(int i = 0;i < n;i++) {
        for(int j = i;j < n;j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    std::cout<<std::endl<<"The Transpose Of Two Matrix is : "<<std::endl;

        for(int i = 0;i < n;i++) {
            for(int j = 0;j < n;j++) {
                std::cout<<arr[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
        return 0;
}