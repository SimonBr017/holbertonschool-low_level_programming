0-strcat.c : function that concatenates two strings.

1-strncat.c : function that concatenates two strings. The _strncat function is similar to the _strcat function, except that

    it will use at most n bytes from src; and
    src does not need to be null-terminated if it contains n or more bytes

2. strncpy:  function that copies a string.

    Prototype: char *_strncpy(char *dest, char *src, int n);
    Your function should work exactly like strncpy


3. strcmp :  function that compares two strings.

    Prototype: int _strcmp(char *s1, char *s2);
    Your function should work exactly like strcmp

4-rev_array.c: function that reverses the content of an array of integers.

    Prototype: void reverse_array(int *a, int n);
    Where n is the number of elements of the array

5-string_toupper.c: unction that changes all lowercase letters of a string to uppercase.

6-cap_string.c: function that capitalizes all words of a string.

    Prototype: char *cap_string(char *);
    Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

7-leet.c: function that encodes a string into 1337.

    Letters a and A should be replaced by 4
    Letters e and E should be replaced by 3
    Letters o and O should be replaced by 0
    Letters t and T should be replaced by 7
    Letters l and L should be replaced by 1
    Prototype: char *leet(char *);

8. rot13: function that encodes a string using rot13.