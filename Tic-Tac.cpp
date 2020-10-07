#include<iostream>
#include<vector>




using namespace std;


class Tic_tac_toe
{
	private:
			int size_of_matrix;		
			vector<vector <char>> current_matrix; 		
			vector<int> row;	
			vector<int> col;	
			vector<char> get_col;
			int left_diagonal;
			int right_diagonal;
			
	public:
		Tic_tac_toe(int size_of_matrix)
		{
			this -> size_of_matrix = size_of_matrix;
			row = vector<int> (this->size_of_matrix,0);
			col = vector<int> (this->size_of_matrix,0);		
			get_col  = vector<char> (this->size_of_matrix,' '); 
			for(int i =0; i < this->size_of_matrix;i++)
			{
				current_matrix.push_back(get_col); 
			}
			left_diagonal =0;
			right_diagonal =0;
		
		}
		
		
		int move(int row, int col, int player,char ip)
		{
			if(current_matrix[row][col] == ' ')
			{
				current_matrix[row][col] = ip;
			}
			else if(current_matrix[row][col] == 'X' || current_matrix[row][col] == '0')
			{
				cerr<<"Place Already filled \n";
//				return 0;
			}
			int move = (player==1) ? 1 : -1;
			this -> row[row]+= move;
			this -> col[col]+= move;
			if(row == col)
			{
				left_diagonal+= move;
			}
			else if (row == (this -> size_of_matrix-1-col))
			{
				right_diagonal+= move;
			}
			cout<<"RD:" <<right_diagonal<<"\n";
			cout<<"LD:" <<left_diagonal<<"\n";

			if(this -> row[row] == this-> size_of_matrix || this->col[col] == this-> size_of_matrix || left_diagonal == this-> size_of_matrix || right_diagonal == this-> size_of_matrix)
			{
				return 1;
			}
			else if(this -> row[row] == -this-> size_of_matrix || this->col[col] == -this-> size_of_matrix || left_diagonal == -this-> size_of_matrix || right_diagonal == -this-> size_of_matrix)
			{
				return 2;
			}
		return 0;
		}	
		
		
		void print_current_matrix()
		{
			cout<<"|"<<current_matrix[0][0]<<"|" << current_matrix[0][1]	<<"|" << current_matrix[0][2]<<"|"<<"\n";
			cout<<"|"<<current_matrix[1][0]<<"|" << current_matrix[1][1]	<<"|" << current_matrix[1][2]<<"|"<<"\n";
			cout<<"|"<<current_matrix[2][0]<<"|" << current_matrix[2][1]	<<"|" << current_matrix[2][2]<<"|"<<"\n\n";
		
		}			


		void start_game()
		{
		   int result =0;
		   int count =0;
		   int row =0, column =0;
		   while(count != ((this->size_of_matrix * this->size_of_matrix)+1))
		   {
		   		cout<<"Player 1 : Choose a square";
		   		cin>> row >> column;
		   		result = move(row,column,1,'X');
		   		print_current_matrix();
					if(result == 1)
					{
						cout<<"Player 1 wins";
						break;
					}

						   		
				cout<<"Player 2 : Choose a square";
		   		cin>> row >> column;
		   		result = move(row,column,2,'0');
		   		print_current_matrix();
				if(result == 2)
				{
					cout<<"Player 2 wins";
					break;
				}
		   		count+=1;
		   }
		if(result == 0)
		{   
			cout<<"It's a Tie";			
		}
		}	

};

int main()
{
	Tic_tac_toe object1(3);
/*	object1.move(0, 1, 1,'X');
	object1.print_current_matrix();
	object1.move(0, 0, 2,'0');
	object1.print_current_matrix();
	object1.move(0, 2, 1,'X');
	object1.print_current_matrix();
	object1.move(1, 1, 2,'0');
	object1.print_current_matrix();
	object1.move(0, 2, 1,'X');
	object1.print_current_matrix();
	result = object1.move(2, 2, 2,'0');
	object1.print_current_matrix();
*/
	object1.start_game();
	

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