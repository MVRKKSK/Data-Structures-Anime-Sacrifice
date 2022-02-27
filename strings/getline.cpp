#include<iostream>
using namespace std;

int length(char input[])
{
    int count = 0;
    for (int i = 0; input[i]!='\0'; i++)
    {
        count++;
    }

    return count;
}


int main(){
    char name[2];
    cin.getline(name , 100);
    cout<<name<<endl;
    cout<<length(name)<<endl;
}