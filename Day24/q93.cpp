#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2)
    {
        cout << "Not Rotation";
        return 0;
    }
    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);
    if (strstr(temp, str2) != NULL)
    {
        cout << "Rotation";
    }
    else
    {
        cout << "Not Rotation";
    }

    return 0;
}