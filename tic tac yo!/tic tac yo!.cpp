/*
    create functions that
        utilize if\else loops to determine winner
            use operators (AND && , OR ||, NOT !=)
                assure win\loss, draw parameters

        displays a 'gui'
            X for player 1
            0 for player 2

        use inputs from player(s) to determine which block to occupy
            prevent players from being able to overlap on another players selection
                stacks(?) to loop back to 'winner' function
*/

#include <iostream>
#include <iomanip>

using namespace std;

//  arrays act as a visual space/value for the player(s) to occupy with their selection
char
    block[10] = {'0','1','2','3','4','5','6','7','8','9',};

//  function using operators to set conditions for win/loss or draw
int winning_logic()
{
    if (block[1] == block[2] && block[2] == block[3])
    {
        return 1;
    }
    else if (block[4] == block[5] && block[5] == block[6])

    {
        return 1;
    }
    else if (block[7] == block[8] && block[8] == block[9])

    {
        return 1;
    }
    else if (block[1] == block[4] && block[4] == block[7])
    {
        return 1;
    }
    else if (block[2] == block[5] && block[5] == block[8])

    {
        return 1;
    }
    else if (block[3] == block[6] && block[6] == block[9])

    {
        return 1;
    }
    else if (block[1] == block[5] && block[5] == block[9])

    {
        return 1;
    }
    else if (block[3] == block[5] && block[5] == block[7])

    {
        return 1;
    }

    else if (block[1] != '1' && block[2] != '2' && block[3] != '3'
        && block[4] != '4' && block[5] != '5' && block[6] != '6'
        && block[7] != '7' && block[8] != '8' && block[9] != '9')

    {
        return 0;
    }
    else
        return -1;
}

//  function for display of table and display for input from user(s)
void XO_Table()
{
    system("cls");
    cout << "\n\n" << setw(75) << "Welcome players to TIC TAC TOE!!\n\n";
    cout << setw(77) << "Player 1 is (X) and Player 2 will be (O)" << endl;
    cout << endl;

    //  it's a mess, i know...
    cout << setw(50) << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(205) << char(187) << endl;
    cout << setw(50) << char(186) << "     " << char(186) << "     " << char(186) <<  "     " << char(186) << endl;
    cout << setw(50) << char(186) << "  " << block[1] << "  " << char(186) << "  " << block[2] << "  " << char(186) << "  " << block[3] << "  " << char(186) << endl;
    cout << setw(50) << char(186) << "     " << char(186) << "     " << char(186) << "     " << char(186) << endl;
    cout << setw(50) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185) << endl;
    cout << setw(50) << char(186) << "     " << char(186) << "     " << char(186) << "     " << char(186) << endl;
    cout << setw(50) << char(186) << "  " << block[4] << "  " << char(186) << "  " << block[5] << "  " << char(186) << "  " << block[6] << "  " << char(186) << endl;
    cout << setw(50) << char(186) << "     " << char(186) << "     " << char(186) << "     " << char(186) << endl;
    cout << setw(50) << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(206) << char(205) << char(205) << char(205) << char(205) << char(205) << char(185) << endl;
    cout << setw(50) << char(186) << "     " << char(186) << "     " << char(186) << "     " << char(186) << endl;
    cout << setw(50) << char(186) << "  " << block[7] << "  " << char(186) << "  " << block[8] << "  " << char(186) << "  " << block[9] << "  " << char(186) << endl;
    cout << setw(50) << char(186) << "     " << char(186) << "     " << char(186) << "     " << char(186) << endl;
    cout << setw(50) << char(200) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(205) << char(188) << endl;
}

int main()
{
    int
        player = 1, i, selection;

    char 
        claim;

    //  loops the table to continually display to the player(s) the conditions of the 'battlefield'
    do
    {

        XO_Table();

        // modulus allows player(s) to alternate turns
        player = (player % 2) ? 1 : 2;

        // how the player(s) make their selection
        cout << "\n" << setw(52) << "Player " << player << ", enter a number:\t";
        cin >> selection;

        claim = (player == 1) ? 'X' : 'O';

        if (selection == 1 && block[1] == '1')

        {
            block[1] = claim;
        }

        else if (selection == 2 && block[2] == '2')

        {
            block[2] = claim;
        }

        else if (selection == 3 && block[3] == '3')

        {
            block[3] = claim;
        }

        else if (selection == 4 && block[4] == '4')

        {
            block[4] = claim;
        }

        else if (selection == 5 && block[5] == '5')

        {
            block[5] = claim;
        }

        else if (selection == 6 && block[6] == '6')

        {
            block[6] = claim;
        }

        else if (selection == 7 && block[7] == '7')

        {
            block[7] = claim;
        }

        else if (selection == 8 && block[8] == '8')

        {
            block[8] = claim;
        }

        else if (selection == 9 && block[9] == '9')

        {
            block[9] = claim;
        }

        //  [^^] Operators above allow for player(s) to choose a block but [vv] prevents either player from taking each others spaces
        else
        {
            cout << "You can't take a space that has already been claimed, choose another space!";

            player--;
            cin.ignore();
            cin.get();
        }

        //  call function to end game if/when a player makes a winning move
        i = winning_logic();
        player++;
    } 
    
    while (i == -1);
    XO_Table();

    if (i == 1)

    {
        cout << setw(84) << "==>\aHAHA! Is THAT what victory smells like, Player " << --player << "?!\n\n";
    }
    else
        cout << setw(84) << "==>\aYou two are too evenly matched...AGAIN! I am not satisfied with a tie!!! I want...No...I NEED to see someone come out as the victor!!\n\n";

    cin.ignore();
    cin.get();
    return 0;
}