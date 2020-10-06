#include<iostream>
#include<vector>



using namespace std;


class Tic_tac_toe
{
	private:
			int matrix_size;		
			vector<vector <char>> current_matrix; 		
			vector<int> row;	
			vector<int> col;	
			vector<char> get_col;
		
	public:
		Tic_tac_toe(int size_of_matrix)
		{
			matrix_size = size_of_matrix;
			row = vector<int> (matrix_size,0);
			col = vector<int> (matrix_size,0);		
			get_col  = vector<char> (matrix_size,' '); 
			for(int i =0; i < matrix_size;i++)
			{
				current_matrix.push_back(get_col); 
			}
			int left_diagonal =0;
			int right_diagonal =0;
		}
		
		
		int move(int ip_row, int ip_col, int player,char ip)
		{
			if(current_matrix[ip_row][ip_col] == ' ')
			{
				current_matrix[ip_row][ip_col] = ip;
			}
			else if(current_matrix[ip_row][ip_col] == 'X' || current_matrix[row][col] == '0')
			{
				cerr<<"Place Already filled \n";
			}
			
		
		return 0;
		}	
		
		void print_current_matrix()
		{
			cout<<"|"<<current_matrix[0][0]<<"|" << current_matrix[0][1]	<<"|" << current_matrix[0][2]<<"|"<<"\n";
			cout<<"|"<<current_matrix[1][0]<<"|" << current_matrix[1][1]	<<"|" << current_matrix[1][2]<<"|"<<"\n";
			cout<<"|"<<current_matrix[2][0]<<"|" << current_matrix[2][1]	<<"|" << current_matrix[2][2]<<"|"<<"\n";
		
		}			


		void start_game()
		{
		
		
		
		}	

};

int main()
{
	Tic_tac_toe object1(3);
	object1.move(0, 0, 1,'X');
	object1.move(0, 1, 1,'0');
	
	object1.print_current_matrix();



return 0;
}





































/*
Given n = 3, assume that player 1 is "X" and player 2 is "O" in the board.

TicTacToe toe = new TicTacToe(3);

toe.move(0, 0, 1); -> Returns 0 (no one wins)
|X| | |
| | | |    // Player 1 makes a move at (0, 0).
| | | |

toe.move(0, 2, 2); -> Returns 0 (no one wins)
|X| |O|
| | | |    // Player 2 makes a move at (0, 2).
| | | |

toe.move(2, 2, 1); -> Returns 0 (no one wins)
|X| |O|
| | | |    // Player 1 makes a move at (2, 2).
| | |X|

toe.move(1, 1, 2); -> Returns 0 (no one wins)
|X| |O|
| |O| |    // Player 2 makes a move at (1, 1).
| | |X|

toe.move(2, 0, 1); -> Returns 0 (no one wins)
|X| |O|
| |O| |    // Player 1 makes a move at (2, 0).
|X| |X|

toe.move(1, 0, 2); -> Returns 0 (no one wins)
|X| |O|
|O|O| |    // Player 2 makes a move at (1, 0).
|X| |X|

toe.move(2, 1, 1); -> Returns 1 (player 1 wins)
|X| |O|
|O|O| |    // Player 1 makes a move at (2, 1).
|X|X|X|
Follow up:
Could you do better than O(n2) per move() operation?
/*
class TicTacToe {
public:
    TicTacToe(int n) {
       
    }
   
    int move(int row, int col, int player) {
       
    }
};
*/


/**
 * Your TicTacToe object will be instantiated and called as such:
 * TicTacToe* obj = new TicTacToe(n);
 * int param_1 = obj->move(row,col,player);
 */



/*
Solution
class TicTacToe {
public:
    TicTacToe(int n) {
        row = vector<int>(n,0);
        col = vector<int>(n,0);
        leftdiagonal = 0;
        rightdiagonal = 0;
        this->n = n;
    }
    
    int move(int row, int col, int player) {
        int move = ((player == 1)? 1 : -1);
        this->row[row] += move;
        this->col[col] += move;
        if(row == col){
            leftdiagonal += move;
        }
        if(row == n-1-col){
            rightdiagonal += move;
        }
        if(this->row[row]==n || this->col[col] == n || leftdiagonal == n || rightdiagonal == n){
            return 1;
        }
        if(this->row[row]==-n || this->col[col] == -n || leftdiagonal == -n || rightdiagonal == -n){
            return 2;
        }
        return 0;
    }
private:
    vector<int> row;
    vector<int> col;
    int leftdiagonal;
    int rightdiagonal;
    int n;
};

*/
