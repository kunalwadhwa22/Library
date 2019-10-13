
// Function to find a substring in a string
// RETURNS : index of the substring in the main string if it exists
//          -1 if does not exist
int str_index(char str[], char sub_str[]);

// Function to convert a string to float
// RETURNS : double 
double string_to_float(char str[]);

// Function to calculate the length of the string
int str_len(char * str);

// Function to copy a string into another one
// Copies from source to destination
void str_copy(char * source, char * destination);

// Function to lexographically compare 2 strings
// negative, zero or positive if str1 is less that, equal to, or greater than
// str2
int str_cmp(char * str1, char * str2);

// Function to reverse a string
// Takes a pointer to the string as arguement and reverses the string till the end
void str_rev(char * str);

// Function to reverse a string between two points
void str_rev2(char * begin, char *end);

// Function to reverse words in a string
// Words are separated by spaces
// Limitation : 
//      Does not for sentences starting with spaces
void str_revword(char * s);
