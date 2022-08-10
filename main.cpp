#include <iostream>

using namespace std;

void grid_numbers(int grid[][3], int n);
void show_grid(char grid[][3], int n);
void instructions();

int main()
{
    char grid[3][3];
    instructions();
    show_grid(grid, 3);
    return 0;
}

void instructions(){
    cout<<"TIC TAC TOE INSTRUCTIONS:"<<endl;
    cout<<"This is a game for 2 players. It's played on 3x3 grid and fields are numbered like this: "<<endl;
    cout<<endl;
    int numbers[3][3];
    grid_numbers(numbers, 3);
    cout<<endl;
    cout<<"Player one is X and player two is O."<<endl;
    cout<<"Winner is the person who first gets 3 in a row (up, down, across, or diagonally).";
    cout<<endl;
}
void show_grid(char grid[][3], int n){
    cout<<" "<<grid[0][0]<<" "<<char(179)<<" "<<grid[1][0]<<" "<<char(179)<<" "<<grid[2][0]<<endl;
    cout<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<endl;
    cout<<" "<<grid[0][1]<<" "<<char(179)<<" "<<grid[1][1]<<" "<<char(179)<<" "<<grid[2][1]<<endl;
    cout<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<char(196)<<endl;
    cout<<" "<<grid[0][2]<<" "<<char(179)<<" "<<grid[1][2]<<" "<<char(179)<<" "<<grid[2][2]<<endl;
}

void grid_numbers(int grid[][3], int n){
    int x=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            grid[i][j]=(int)x;
            x++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<" "<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}
