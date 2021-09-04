#include<iostream>
#include<cstring>
using namespace std;
int search(char arr[], char x, int n){
    for (int i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
void printPostOrder(char in[], char pre[], int n)
{
    char root = search(in, pre[0], n);
    if (root != 0)
        printPostOrder(in, pre + 1, root);
    if (root != n - 1)
        printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
    cout << pre[0];
}
int main()
{
    char pre[100],in[100];
    cin>>in>>pre;
    int n=strlen(in);
    printPostOrder(in, pre, n);
    return 0;
}