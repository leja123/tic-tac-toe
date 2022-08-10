#include <iostream>

using namespace std;

void show_grid(char grid[][3], int n);

int main()
{
    char grid[3][3];
    show_grid(grid, 3);
    return 0;
}

void show_grid(char grid[][3], int n){
    cout<<grid[0][0]<<" "<<grid[1][0]<<" "<<grid[2][0]<<endl;
    cout<<grid[0][1]<<" "<<grid[1][1]<<" "<<grid[2][1]<<endl;
    cout<<grid[0][2]<<" "<<grid[1][2]<<" "<<grid[2][2]<<endl;
}
