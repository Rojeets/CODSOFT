#include<iostream>
using namespace std;

void displayBoard(char[3][3]);
void playerInput(char[3][3], int);
bool checkWin(int, char[3][3]);
bool checkTie(char[3][3]);

int main(){
    char playagain;
    do{
        system("clear");
    int player = 1;
    char board[3][3] = {
        {'_','_','_'},
        {'_','_','_'},
        {'_','_','_'}
    };
    playerInput(board, player);
    cout << "Wanna Play Again?(y/n)";
    cin >> playagain;
    }while(playagain == 'Y' || playagain == 'y');
     return 0;
}

void playerInput(char board[3][3], int player){
    int i, j;
    int pos;
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    while(1){
        
        for(i = 0; i < 3; i++){
            for(j = 0; j < 3; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        cout<<"Player"<<player;
        cout << "Enter the position  to place the symbol" << endl;
        cin >> pos;
        int row = (pos - 1) / 3;
        int col = (pos - 1) % 3;
        if(board[row][col] == '_'){
            if(player == 1){
                board[row][col] = 'X';
             } else {
                board[row][col] = 'O';
            }
        }else{

            cout << "Position already occupied. Please enter a new position." << endl;
            continue;
        }
        displayBoard(board);
        if(checkWin(player, board)){
            break;
        }
        if(checkTie(board)){
            break;
        }
        if(player ==1){
            player =2;
        }else{
            player =1;
        }
        
    }
}

void displayBoard(char board[3][3]){
    system("clear");
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWin(int player,char board[3][3]){
    //check first row
    if(board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0]!= '_'){
        cout << "Player " << player << " wins" << endl;
        return true;
    }else if(board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0]!= '_'){
        cout << "Player " << player << " wins" << endl;
        return true;
    }else if(board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0]!= '_'){
        cout << "Player " << player << " wins" << endl;
        return true;
    }else if(board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[0][0]!= '_'){
        cout << "Player " << player << " wins" << endl;
        return true;
    }else if(board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1]!= '_'){
        cout << "Player " << player << " wins" << endl;
        return true;
    }else if(board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2]!= '_'){
        cout << "Player " << player << " wins" << endl;
        return true;
    }else if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0]!= '_'){
        cout << "Player " << player << " wins" << endl;
        return true;
    }else if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2]!= '_'){
        cout << "Player " << player << " wins" << endl;
        return true;
    }else{
        return false;
    }
}

bool checkTie(char board[3][3]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(board[i][j] == '_'){
                return false;
            }
        }
    }
    cout << "It's a tie" << endl;
    return true;
}

