#include <iostream>
#include<algorithm>
using namespace std;

int length(char input[])
{

    int count = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char input[])
{
    int start = 0;
    int end = length(input) - 1;

    while (start < end)
    {
        swap(input[start], input[end]);
        start++;
        end--;
    }
}

int main()
{
    char string[100];
    cin.getline(string, 100);

    reverse(string);

    cout << string << endl;
}