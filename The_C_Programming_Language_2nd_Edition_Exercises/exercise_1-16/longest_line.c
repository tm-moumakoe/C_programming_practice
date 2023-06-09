#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int lim);
void copy(char to[], char from[]);

int main(void)
{
        int len, max = 0;
        char line [MAXLINE*MAXLINE], longest[MAXLINE*MAXLINE];

        while ((len = _getline(line, MAXLINE*MAXLINE)) > 0)
        {
                if (len > max)
                {
                        max = len;
                        copy(longest, line);
                }
        }
        if (max > 0)
                printf("%s", longest);
        return (0);
}

int _getline(char str[], int lim)
{
        int c, i = 0;

        for (; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
               str[i] = c;
        if (c == '\n')
        {
                str[i] = c;

                ++i;
        }
        str[i] = '\0';
        return (i);
}

void copy(char to[], char from[])
{
        int i = 0;

        while ((to[i] = from[i]) != '\0')
                i++;
}
