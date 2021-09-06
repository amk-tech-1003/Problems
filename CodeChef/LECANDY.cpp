/*
Little Elephant and Candies
Problem Code:LECANDY
A Little Elephant and his friends from the Zoo of Lviv like candies very much.

There are N elephants in the Zoo. The elephant with number K (1 ≤ K ≤ N) will be happy if he receives at least AK candies. There are C candies in all in the Zoo.

The Zoo staff is interested in knowing whether it is possible to make all the N elephants happy by giving each elephant at least as many candies as he wants, that is, the Kth elephant should receive at least AK candies. Each candy can be given to only one elephant. Print Yes if it is possible and No otherwise.

Input
The first line of the input file contains an integer T, the number of test cases. T test cases follow. Each test case consists of exactly 2 lines. The first line of each test case contains two space separated integers N and C, the total number of elephants and the total number of candies in the Zoo respectively. The second line contains N space separated integers A1, A2, ..., AN.

Output
For each test case output exactly one line containing the string Yes if it possible to make all elephants happy and the string No otherwise. Output is case sensitive. So do not print YES or yes.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T; //test case
	int N; //number of elephants
	int C; //number of candice

	cin>>T;
	//cout<<T<<endl;
	while(T>0){
	    cin>>N >>C;
	    //cout<<N <<C<<endl;
	    int count=0;
	    for(int i=0; i<N; i++){
	        int temp;
	        cin>>temp;
	        count+=temp;
	    }
	    //cout<<count << C<<endl;
	    if(count<=C){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	    T--;
	}
	return 0;
}
