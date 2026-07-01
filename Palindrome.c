#include <stdio.h>


int isPalindrome(int arr, int size)
{  
    int *left = arr
    int *right=arr+size-1;
    for(*left; *left<=size; *left++)
    {
        for(*right; *right>=1; *right--)
        {
            if(*left != *right)
            {
                // printf("Not Palindrome");
                return 0;
            }
        }
    } 

    return 1;
}


int main()
{
    int size = 5;
    int val = 0;
    int palarr1[5]={1,0,0,0,1};
    // int palarr2[5]={1,2,3,2,1};
    // int palarr3[5]={1,0,0,0,1};
    // int palarr4[5]={4,5,6,5,4};
    // int palarr5[5]={9,9,9,9,9};

    val = Palcon(palarr1, size);

    if(val == 1)
    {
        
    }




}