#include <iostream>

using namespace std;

char board[1000][1000];
int rows, columns, moves;
char direction;
int SnakeX,SnakeY;
string situation;
int currentMove = 1;
int length = 1;
int x = -1;


//Checks one move
int makeMove(char dir)
{
    if(dir == 'N')
    {
        SnakeY--;
    }
    if(dir == 'E')
    {
        SnakeX++;
    }
    if(dir == 'S')
    {
        SnakeY++;
    }
    if(dir == 'W')
    {
        SnakeX--;
    }
    if((SnakeX == columns+2) || (SnakeX < 1))
    {
        return currentMove;
    }
    if((SnakeY == rows+2) || (SnakeY < 1))
    {
        return currentMove;
    }
    if(board[SnakeY-1][SnakeX-1] != 'J')
        if(((board[SnakeY-1][SnakeX-1]-'0') != 0)&&((board[SnakeY-1][SnakeX-1]-'0') - length  < 0))
        {
            return currentMove;
        }
    else
    {
        currentMove++;
        board[SnakeY-1][SnakeX-1] = currentMove+'0';
    }
    if(board[SnakeY-1][SnakeX-1] == 'J')
    {
        currentMove++;
        board[SnakeY-1][SnakeX-1] = currentMove+'0';
        length++;
    }
    return 0;

}

//changing the orientation
char setDirection(char dir, char mov)
{
    if(mov == 'N')
        return dir;
    if(mov == 'P')
    {
        if(dir == 'E')
        {
            direction = 'S';
            return 'S';
        }
        if(dir == 'S')
        {
            direction = 'W';
            return 'W';
        }
        if(dir == 'W')
        {
            direction = 'N';
            return 'N';
        }
        direction = 'E';
        return 'E';
    }
    else if(mov == 'L')
    {
        if(dir == 'E')
        {
            direction = 'N';
            return 'N';
        }
        if(dir == 'S')
        {
            direction = 'E';
            return 'E';
        }
        if(dir == 'W')
        {
            direction = 'S';
            return 'S';
        }
        direction = 'W';
        return 'W';
    }
}

int main()
{
    cin >> rows >> columns >> moves >> direction;

    char Moves[moves];
    //Getting the board
    for (int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < columns; ++j)
        {
            cin >> board[i][j];
            if(board[i][j] =='.')
                board[i][j]= '0';
            if(board[i][j] == 'W')
            {
                SnakeX = j+1;
                SnakeY = i+1;
                board[i][j] = '1';
            }
        }
    }
    //Getting the subsequent moves
    for (int i = 0; i < moves; ++i)
    {
        cin >> Moves[i];
    }

    //Goes through the movements
    for(int i = 0; i < sizeof(Moves); ++i)
    {
        if(makeMove(setDirection(direction,Moves[i]))!= 0)
        {
            int x = makeMove(setDirection(direction,Moves[i]));
            cout << currentMove;
            return 0;
        }

    }
    if(x == -1)
    {
        cout << "OK";
    }
    return 0;
}
