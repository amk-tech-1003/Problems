/*
The Lead Game
Problem Code: TLG
The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.
The game consists of several rounds and in each round both players obtain a score, based on how well they played. Once all the rounds have been played, the total 
score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	int R;
	cin>>R;
	int W, L=0;
    int play1 =0, play2=0;
	int player1, player2, diff = 0;
	for(int i=0; i<R; i++)
	{
	    cin >>player1 >>player2;
	    play1 += player1;
	    play2 += player2;
	    if(play1 > play2)
	    {
	        diff = play1-play2;
	        if(diff>L)
	        {
	            L = diff;
	            W = 1;
	        }
	    }
	    else
	    {
	        diff = play2-play1;
	        if(diff>L)
	        {
	            L = diff;
	            W = 2;
	        }
	    }
	}
	 cout<<W<<"  "<<L<<endl;
	return 0;
}
