/* This program was made for the purpose of asking the user for the amount of numbers he wants in an array and then the numbers they want.
 * It will also check the numbers in the array and check for unique numbers, in other words, it will filter out the duplicates.
 *
 * Author: Angel Olvera
 * October 13, 2018
 * Mail: angelolvera00@gmail.com
 */
#include <stdio.h>

int main() {
//Variables are declared
    int n;
    int i;
    int j;
    int k;
    int count =0;
//The size of the array is asked
    printf("Enter size of array: ");// I ask the user for the amount of numbers he wants to input, if he enters
    // anything other than numbers, the program will run, but nothing will be shown.
    scanf("%d", &n);
    double array[n];
//The numbers in the array are asked
    printf("Enter %d elements in the array : ", n);//The user is asked to enter the numbers that they want.
    for(int i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
//The Array is printed
    printf("\nElements in array are: ");//The array is printed
    for(i=0; i<n; i++)
    {
        printf("%lf ", array[i]);
    }

    //Loop to check and filter out duplicates, only non-duplicates will be displayed.
    printf("\nUnique elements in the array: ");
    for(i=0; i<n; i++)
    {
        count=0;
        if(array[i]==array[i-1]){
            count++;
        }
        for(j=0;j<i;j++)
        {
            if(array[i]==array[j])
            {
                count++;
            }
        }
        for(k=i+1;k<n;k++)
        {
            if(array[i]==array[k])
            {
                count++;
            }
        }
        if(count==0)
        {
            printf("%lf ", array[i]);
        }
    }
    return 0;
}