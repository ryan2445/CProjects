//Ryan Hoffman - CS135 - Tic Tac Toe Extra Credit
#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
void display_table(char board[SIZE][SIZE]);
void clear_table(char board[SIZE][SIZE]);
_Bool check_end_of_game(char board[SIZE][SIZE]);
void get_player1_move(char board[SIZE][SIZE], int row, int col);
_Bool check_legal_option(char board[SIZE][SIZE], int row, int col);
void update_table(char board[SIZE][SIZE], int row, int col, char token);
void generate_player2_move(char board[SIZE][SIZE], int row, int col);
int check_three_in_a_row(char board[SIZE][SIZE]);
void print_winner(char board[SIZE][SIZE]);
_Bool check_table_full(char board[SIZE][SIZE]);
int main(){
 char choice='Y';
 do{
 int n=1;
 //Declare the tic-tac-toe board
 char board[SIZE][SIZE];
 //The row and column of the move for either player 1 or 2
  int row, col;
 //Clear the table
 clear_table(board);
 //Display the table
 display_table(board);
 do{
 //Have player 1 enter their move
 get_player1_move(board, row, col);
 //Generate player 2 move
 generate_player2_move(board, row, col);
 //Do this while the game hasn't ended
 }while(check_end_of_game(board) == 0);
 //After the game is over, print who won
 print_winner(board);
 printf("Would you like to play again (Y/N): ");
 while(n!=0){
 scanf("%c", &choice);
 if(choice=='N'){
 	n=0;
 }
 if(choice=='Y'){
 	n=0;
 }
}
}while(choice=='Y');
}

void display_table(char board[SIZE][SIZE]){
	printf("The current state of the game is: \n");
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void clear_table(char board[SIZE][SIZE]){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			board[i][j]='_';
		}
	}
}

_Bool check_end_of_game(char board[SIZE][SIZE]){
	if(check_three_in_a_row(board)==1||check_three_in_a_row(board)==2){
		return 1;
	}
	else if(check_table_full(board)==1){
		return 1;
	}
	else{
		return 0;
	}
}

void get_player1_move(char board[SIZE][SIZE], int row, int col){
	do{
	printf("Player 1 enter your selection [row, col]: ");
	scanf("%d,%d", &row, &col);
	} while(check_legal_option(board, row, col)==0);
	update_table(board, row, col, 'O');
	display_table(board);
}

_Bool check_legal_option(char board[SIZE][SIZE], int row, int col){
	if( (row<1||row>3) || (col<1||col>3) || (board[row-1][col-1]=='X') || (board[row-1][col-1]=='O') ){
		return 0;
	}
	return 1;
}

void update_table(char board[SIZE][SIZE], int row, int col, char token){
	board[row-1][col-1]=token;
}

void generate_player2_move(char board[SIZE][SIZE], int row, int col){
	if(check_end_of_game(board)==1){
		return;
	}
	do{
	row = rand() % 4 + 1;
	col = rand() % 4 + 1;
	} while(check_legal_option(board, row, col)==0);
	update_table(board, row, col, 'X');
	printf("Player 2 has entered [row, col]: %d,%d\n", row, col);
	display_table(board);
}

int check_three_in_a_row(char board[SIZE][SIZE]){
	if(board[0][0]==board[0][1]&&board[0][1]==board[0][2]&&board[0][0]==board[0][2]){
		if(board[0][0]=='X'){
			return 2;
		}
		if(board[0][0]=='O'){
			return 1;
		}
	}
	else if(board[1][0]==board[1][1]&&board[1][1]==board[1][2]&&board[1][0]==board[1][2]){
		if(board[1][0]=='X'){
			return 2;
		}
		if(board[1][0]=='O'){
			return 1;
		}
	}
	else if(board[2][0]==board[2][1]&&board[2][1]==board[2][2]&&board[2][0]==board[2][2]){
		if(board[2][0]=='X'){
			return 2;
		}
		if(board[2][0]=='O'){
			return 1;
		}
	}
	else if(board[0][0]==board[1][0]&&board[1][0]==board[2][0]&&board[0][0]==board[2][0]){
		if(board[0][0]=='X'){
			return 2;
		}
		if(board[0][0]=='O'){
			return 1;
		}
	}
	else if(board[0][1]==board[1][1]&&board[1][1]==board[2][1]&&board[0][1]==board[2][1]){
		if(board[0][1]=='X'){
			return 2;
		}
		if(board[0][1]=='O'){
			return 1;
		}
	}
	else if(board[0][2]==board[1][2]&&board[1][2]==board[2][2]&&board[0][2]==board[2][2]){
		if(board[0][2]=='X'){
			return 2;
		}
		if(board[0][2]=='O'){
			return 1;
		}
	}
	else if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[0][0]==board[2][2]){
		if(board[0][0]=='X'){
			return 2;
		}
		if(board[0][0]=='O'){
			return 1;
		}
	}
	else if(board[0][2]==board[1][1]&&board[1][1]==board[2][0]&&board[0][2]==board[2][0]){
		if(board[0][2]=='X'){
			return 2;
		}
		if(board[0][2]=='O'){
			return 1;
		}
	}
	return 0;
}
void print_winner(char board[SIZE][SIZE]){
	if(check_three_in_a_row(board)==1){
		printf("Congratulations, Player 1 wins!\n");
	}
	else if(check_three_in_a_row(board)==2){
		printf("Congratulations, Player 2 wins!\n");
	}
	else if(check_three_in_a_row(board)==0){
		printf("Game over, no player wins.\n");
	}
}

_Bool check_table_full(char board[SIZE][SIZE]){
	for(int i=0;i<SIZE;i++){
		for(int j=0;j<SIZE;j++){
			if(board[i][j]=='_'){
				return 0;
			}
		}
	}
	return 1;
}