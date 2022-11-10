/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char new1[1000000];
   
    char encript[26];
    int pos1;


    char c;
    char text1[1000000];
  
    int i = 0;
    while(1)
    {
        c = getchar();
        if(i == 26) break;
        encript[i] = c;
        i++;
    }
    i = 0;
       while(1)
    {
        c = getchar();
        if(c == EOF) break;
        text1[i] = c;
        i++;
    }
    
    pos1 = i;

   
    for(i=0; i<pos1; i++)
        {
            switch (text1[i])
                {
                    case 'A':
                    case 'a':
                    new1[i] = encript[0];
                    break;
                    
                    case 'B':
                    case 'b':
                    new1[i] = encript[1];
                    break;
                    
                    case 'C':
                    case 'c':
                    new1[i] = encript[2];
                    break;
                    
                    case 'D':
                    case 'd':
                    new1[i] = encript[3];
                    break;
                    
                    case 'E':
                    case 'e':
                    new1[i] = encript[4];
                    break;
                    
                    case 'F':
                    case 'f':
                    new1[i] = encript[5];
                    break;
                    
                    case 'G':
                    case 'g':
                    new1[i] = encript[6];
                    break;
                    
                    case 'H':
                    case 'h':
                    new1[i] = encript[7];
                    break;
                    
                    case 'I':
                    case 'i':
                    new1[i] = encript[8];
                    break;
                    
                    case 'J':
                    case 'j':
                    new1[i] = encript[9];
                    break;
                    
                    case 'K':
                    case 'k':
                    new1[i] = encript[10];
                    break;
                    
                    case 'L':
                    case 'l':
                    new1[i] = encript[11];
                    break;
                    
                    case 'M':
                    case 'm':
                    new1[i] = encript[12];
                    break;
                    
                    case 'N':
                    case 'n':
                    new1[i] = encript[13];
                    break;
                    
                    case 'O':
                    case 'o':
                    new1[i] = encript[14];
                    break;
                    
                    case 'P':
                    case 'p':
                    new1[i] = encript[15];
                    break;
                    
                    case 'Q':
                    case 'q':
                    new1[i] = encript[16];
                    break;
                    
                    case 'R':
                    case 'r':
                    new1[i] = encript[17];
                    break;
                    
                    case 'S':
                    case 's':
                    new1[i] = encript[18];
                    break;
                    
                    case 'T':
                    case 't':
                    new1[i] = encript[19];
                    break;
                    
                    case 'U':
                    case 'u':
                    new1[i] = encript[20];
                    break;
                    
                    case 'V':
                    case 'v':
                    new1[i] = encript[21];
                    break;
                    
                    case 'W':
                    case 'w':
                    new1[i] = encript[22];
                    break;
                    
                    case 'X':
                    case 'x':
                    new1[i] = encript[23];
                    break;
                    
                    case 'Y':
                    case 'y':
                    new1[i] = encript[24];
                    break;
                    
                    case 'Z':
                    case 'z':
                    new1[i] = encript[25];
                    break;
                    
                    
                    
                    default:
                    new1[i] = text1[i];
                }
        }
    

        
        
     for(i = 0; i<pos1; i++)
        {
            printf("%c", new1[i]);
        }    
   
    return 0;
}
