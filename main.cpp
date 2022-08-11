#include <iostream>

using namespace std;

void grid_numbers(int grid[][3], int n);
void show_grid(char grid[][3], int n);
void instructions();
void turn(char grid[][3], int n);

int main()
{
    char grid[3][3] = {{'.','.','.'},{'.','.','.'},{'.','.','.'}};
    cout<<"TIC TAC TOE\n"<<endl;

    turn(grid, 3);







    instructions();
    cout<<endl;

    return 0;
}

void instructions(){
    cout<<endl<<"How to play:"<<endl;
    cout<<"--------------"<<endl;
    cout<<"This is a game for 2 players. It's played on 3x3 grid and fields are numbered like this: "<<endl;
    cout<<endl;
    int numbers[3][3];
    grid_numbers(numbers, 3);
    cout<<endl;
    cout<<"Player one is X and player two is O."<<endl;
    cout<<"Winner is the person who first gets 3 in a row (up, down, across, or diagonally).";
    cout<<endl;
}







void turn(char grid[][3], int n){
    int player = 0;
    int x;
    bool exit = false;
    do{

        int row;
        int column;
        cin>>x;
        switch(x){
            case 0:
                instructions();
                break;
            case 1:
                row=0;
                column=0;
                break;
            case 2:
                row=1;
                column=0;
                break;
            case 3:
                row=2;
                column=0;
                break;
            case 4:
                row=0;
                column=1;
                break;
            case 5:
                row=1;
                column=1;
                break;
            case 6:
                row=2;
                column=1;
                break;
            case 7:
                row=0;
                column=2;
                break;
            case 8:
                row=1;
                column=2;
                break;
            case 9:
                row=2;
                column=2;
                break;
            case 10:
                cout<<"exit";
                exit = true;
                break;
            default:
                cout<<"Invalid number"<<endl;
        }
        char character;
        if(grid[row][column]=='.'){
            if(player%2==0){
                character = 'X';
                player++;
            }
            else{
                character = 'O';
                player++;
            }

        }
        else
            cout<<"This field is already taken";
        grid[row][column]=character;
        show_grid(grid, 3);
    }while(exit==0);
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
