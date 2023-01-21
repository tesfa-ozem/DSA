#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int result;
char operatator;
int position;
char input[30];
char *str;

int main(int argc, char const *argv[])
{
    /**
     * Get input from user
     */
    scanf("%s", input);
    int length = strlen(input);
    str = &input[0];

    // loop through the string and isolate the operations
    result = atoi(str);

    for (int i = 1; i < length; i++)
    {
        printf("%d \n", result);
        if (input[i] >= '!' && input[i] <= '/')
        {
            // printf("%c value \n \n",input[i]);
            operatator = input[i];
        }
        else
        {
            str = &input[i];
            position = atoi(str);
            switch (operatator)
            {
            case '+':
                result += position;
                break;
            case '-':
                result -= position;
                break;
            case '*':
                result *=position;
                break;
            case '/':
                result /=position;
                break;
            default:
                break;
            }
        }
    }

    printf("Ans = %d", result);
    return 0;
}
