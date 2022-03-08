#include <iostream>
#include <cstring>
using namespace std;

/* one way of comparing
 */
/* int compare(char input1[]  , char input2[]){
    for (int i = 0; i < strlen(input1); i++)
    {
        if(input1[i]==input2[i]){
            return 0;
        }
        else return -1;
    }
} */

bool compare(char str1[], char str2[])
{
    if (strlen(str1) != strlen(str2))
        return false;

    for (int i = 0; i < strlen(str1); i++)
    {
        if (str1[i] != str2[i])
            return false;
    }
    return true;
}

int main()
{
    char string[100];
    cin.getline(string, 100);
    char string2[100];
    cin.getline(string2, 100);
    cout << "length of string 1 : " << strlen(string) << endl;

    if(compare(string , string2)){
        cout<<"equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }
}