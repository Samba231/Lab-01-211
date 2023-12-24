// PID: 730718704
// I pledge the COMP 211 honor code.


#include <stdio.h>
#include <stdbool.h>

#define MAXLINE 50  
int main() {
    char line[MAXLINE + 1];
    int line_length = 0;
     
    int total_offending_lines = 0;
    int offending_line_numbers[100];
    while (1) {
        int c = getchar();

        if (c == EOF) {
            break; // Exit the loop at the end of input
        }

        if (c == '\n') {
            
            line_length = 0;
        } else {
            // Append the character to the line buffer
            if (line_length < MAXLINE) {
                line[line_length++] = c;
            } else if (line_length == MAXLINE) {
              
                line[line_length++] = '?';
                total_offending_lines++;
 
                if (total_offending_lines <= 100) {
                    offending_line_numbers[total_offending_lines - 1] = total_offending_lines - 1;
                }

                for (int i = 0; i < line_length; i++) {
                    putchar(line[i]);
                }
                putchar('\n');
                line_length = 0;
            }
        }

        if (c == '\n') {
            // Print the line and increment the line number
            for (int i = 0; i < line_length; i++) {
                putchar(line[i]);
            }
            putchar('\n');
            
        }
   }
      

    if (total_offending_lines > 0) {
        printf("\nTotal lines over %d chars: %d\n", MAXLINE, total_offending_lines);
        printf("Offending lines: ");
        for (int i = 0; i <= total_offending_lines; i++) {
            printf("%d", offending_line_numbers[i]);
            if (i < total_offending_lines - 1) {

                
                printf(", ");
            }
        }
        printf("\n");
    }

    return 0;
}           
