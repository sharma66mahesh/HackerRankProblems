/*
An English text needs to be encrypted using the following encryption scheme.
First, the spaces are removed from the text. Let be the length of this text.
Then, characters are written into a grid, whose rows and columns have the following constraints:

floor(sqrt(l)) <= rows <= columns <= ceil(sqrt(l))

For example, the sentence 'if man was meant to stay on the ground god would have given us roots' after removing spaces is characters long, so it is written in the form of a grid with 7 rows and 8 columns.

ifmanwas
meanttos
tayonthe
groundgo
dwouldha
vegivenu
sroots

    Ensure that
    If multiple grids satisfy the above conditions, choose the one with the minimum area, i.e. .rows*columns

The encoded message is obtained by displaying the characters in a column, inserting a space, and then displaying the next column and inserting a space, and so on. For example, the encoded message for the above rectangle is:

imtgdvs fearwer mayoogo anouuio ntnnlvt wttddes aohghn sseoau

You will be given a message in English with no spaces between the words. The maximum message length can be characters. Print the encoded message.
*/
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int strlen = input.length();
    int j;

    int cols = ceil(sqrt(strlen));


    for(int i = 0; i < cols; i++)
    {
        j = i;
        while(j < strlen)
        {
            cout << input[j];
            j+= cols;
        }
        cout << " ";
    }
}
