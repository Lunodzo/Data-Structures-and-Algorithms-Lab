#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to process an input file
void processFile(const char* filename);

// Function to handle an include statement
void handleInclude(const char* includeFilename);

int main() {
    const char* inputFilename = "main.c";  // Specify the input file here

    processFile(inputFilename);

    return 0;
}

void processFile(const char* filename) {
    FILE* file = fopen(filename, "r");  // Open the file for reading
    if (file == NULL) {
        printf("Failed to open file: %s\n", filename);
        return;
    }

    char line[256];  // Buffer to hold each line of the file

    // Read each line of the file
    while (fgets(line, sizeof(line), file) != NULL) {
        // Check if the line starts with '#include'
        if (strncmp(line, "#include", 8) == 0) {
            // Extract the included filename from the line
            const char* includeFilename = strtok(line + 8, " \"<>");
            handleInclude(includeFilename);  // Process the include statement
        } else {
            printf("%s", line);  // Output the line as it is
        }
    }

    fclose(file);  // Close the input file
}

void handleInclude(const char* includeFilename) {
    FILE* includedFile = fopen(includeFilename, "r");  // Open the included file
    if (includedFile == NULL) {
        printf("Failed to open included file: %s\n", includeFilename);
        return;
    }

    char line[256];  // Buffer to hold each line of the included file

    // Read each line of the included file
    while (fgets(line, sizeof(line), includedFile) != NULL) {
        // Check for nested include statements in the included file
        if (strncmp(line, "#include", 8) == 0) {
            const char* nestedIncludeFilename = strtok(line + 8, " \"<>");
            handleInclude(nestedIncludeFilename);  // Process the nested include statement
        } else {
            printf("%s", line);  // Output the line as it is
        }
    }

    fclose(includedFile);  // Close the included file
}
