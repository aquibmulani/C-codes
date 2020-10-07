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
		Tic_tac_toe(int size_of_matrix);
		int move(int row, int col, int player,char ip);		
		void print_current_matrix();
		void start_game();

};

