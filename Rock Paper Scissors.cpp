// Rock Paper Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Rock Beats Scissors
//Scissors Best Paper
//Paper beats Rock

//rest all is draw-continue to roll
#include <iostream>
#include <cstdlib>  //cstdlib for funcs rand-random integer  srand-seed rand num gen
#include <ctime>  //ctime for func time gives current time

#define ROCK 1  //number defined preprocessor constants
#define PAPER 2  //when we gen random number b/w 1 & 3 it will   
#define SCISSORS 3  //represent rock or paper or scissors  

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));  //to make the game less predictable we use time as our seed value

    int player = 0;   //player throw
    int computer = 0;  //computer throw
    bool draw = false; //draw bool condition


    do {
        cout << "SELECT YOUR THROW." << endl;
        cout << "1) ROCK" << endl;
        cout << "2) PAPER" << endl;    //prompt for player choice
        cout << "3) SCISSORS" << endl;
        cout << "SELECTION:" << endl;
        cin >> player;
        cout << endl;

        //rand()-- 0..........999999  % 3 = (0-2)+1  --rand()%3+1 = 1-3
        computer = (rand() % 3) + 1;

        if (computer == ROCK) {
            cout << "Computer chose ROCK" << endl;
        }
		else if (computer == PAPER) {
			cout << "Computer chose PAPER" << endl;
		}
		else if (computer == SCISSORS) {
			cout << "Computer chose SCISSORS" << endl;
		}

        draw = false;

        if (player == computer) {
            draw = true;
            cout << "IT'S A DRAW." << endl;
        }
        else if (player == ROCK && computer == SCISSORS) {
            cout << "ROCK BEATS SCISSORS.YOU WIN" << endl;
        }
		else if (player == ROCK && computer == PAPER) {
			cout << "PAPER BEATS ROCK.YOU LOSE" << endl;
		}
		else if (player == PAPER && computer == ROCK) {
			cout << "PAPER BEATS ROCK.YOU WIN" << endl;
		}
		else if (player == PAPER && computer == SCISSORS) {
			cout << "SCISSORS BEATS PAPER.YOU LOSE" << endl;
		}
		else if (player == SCISSORS && computer == PAPER) {
			cout << "SCISSORS BEATS SCISSORS.YOU WIN" << endl;
		}
		else if (player == SCISSORS && computer == ROCK) {
			cout << "ROCK BEATS SCISSORS.YOU LOSE" << endl;
		}
        cout << endl;

    } while (draw);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
