/*
Lisa just got a new math workbook. A workbook contains exercise problems grouped into chapters.
-there are n chapters in Lisa's workbook, numbered from 1 to n.
-the i-th chapter has t(i) problems, numbered from 1 to t(i)
-each page can hold up to k problems. there are no empty pages or unnecessary spaces, so only the last page of a chapter
may contain fewer that k problems.
-Each new chapter starts on a new page, so a page will never contain problems from more than one chapter.
-The page number indexing starts at 1.
-Lisa believes a problem to be special if its index(within a chapter( is the same as the page number where it's located.
Given the details for Lisa's workbook, can you count its number of special problems?
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
using namespace std;

int main()
{
    int diff, page = 1, startProb, endProb, matches = 0;
    int chapters, probPerPage;
    cin >> chapters >> probPerPage;
    int x;
    for(int i = 0; i < chapters; i++)
    {
        cin >> x;
        endProb = 0;
        while(x > 0)
        {
            startProb = endProb + 1;
            diff = x - probPerPage >= 0 ? probPerPage - 1 : x-1;
            endProb = startProb + diff;
            for(int i = startProb; i <= endProb; i++)
            {
                if(page == i)
                    matches++;
            }
            x -= probPerPage;
            page++;
        }
    }
    cout << matches;
}
