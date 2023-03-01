<h1 align="center">0x06. C - More pointers, arrays and strings</h1>

<h2>Projects</h2>
<h3>This project covers:</h3>
<ul>
  <li>Pointers to pointers and how to use them</li>
  <li>Multidimensional arrays and how to use them</li>
  <li>The most common C standard library functions to manipulate strings</li>
</ul>

<h2>Author</h2>
<p>This repository is managed by me <a href="https://github.com/Mugambi12/alx-low_level_programming">Silas Mugambi</a>, during my time at <a href="https://www.alxafrica.com/">ALX Africa</a>. All projects were done with the guidance of my peers and mentors.</p>



<h2>Requirements - General</h2>
<ul>
  <li>Allowed editors: vi, vim, emacs</li>
  <li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
  <li>All your files should end with a new line</li>
  <li>A README.md file, at the root of the folder of the project is mandatory</li>
  <li>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
  <li>You are not allowed to use global variables</li>
  <li>No more than 5 functions per file</li>
  <li>You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden</li>
  <li>You are allowed to use _putchar</li>
  <li>You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account</li>
  <li>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples</li>
  <li>The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h</li>
  <li>Don’t forget to push your header file</li>
</ul>


<h2>Tasks</h2>
<ol>
  <li>
    <h3>_strcat</h3>
    <p>Write a function that concatenates two strings.</p>
    <ul>
      <li>Prototype: <code>char *_strcat(char *dest, char *src);</code></li>
      <li>This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte</li>
      <li>Returns a pointer to the resulting string dest</li>
      <li>FYI: The standard library provides a similar function: strcat. Run <code>man strcat</code> to learn more.</li>
    </ul>
  </li>
  <li>
    <h3>_strncat</h3>
    <p>Write a function that concatenates two strings.</p>
    <ul>
      <li>Prototype: <code>char *_strncat(char *dest, char *src, int n);</code></li>
      <li>The _strncat function is similar to the _strcat function, except that</li>
      <ul>
        <li>it will use at most n bytes from src; and</li>
        <li>src does not need to be null-terminated if it contains n or more bytes</li>
      </ul>
      <li>Returns a pointer to the resulting string dest</li>
      <li>FYI: The standard library provides a similar function: strncat. Run <code>man strncat</code> to learn more.</li>
    </ul>
  </li>
  <li>
    <h3>_strncpy</h3>
    <p>Write a function that copies a string. Your function should work exactly like strncpy.</p>
    <ul>
      <li>Prototype: <code>char *_strncpy(char *dest, char *src, int n);</code></li>
      <li>Returns a pointer to the resulting string dest</li>
      <li>FYI: The standard library provides a similar function: strncpy. Run <code>man strncpy</code> to learn more.</li>
    </ul>
  </li>
  <li>
    <h3>_strcmp</h3>
    <p>Write a function that compares two strings. Your function should work exactly like strcmp.</p>
    <ul>
      <li>Prototype: <code>int _strcmp(char *s1, char *s2);</code></li>
      <li>Returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2</li>
      <li>FYI: The standard library provides a similar function: strcmp. Run <code>man strcmp</code> to learn more.</li>
    </ul>
  </li>
  <li>
    <h3>_reverse_array</h3>
    <p>Write a function that reverses the content of an array of integers.</p>
    <ul>
      <li>Prototype: <code>void reverse_array(int *a, int n);</code></li>
    </ul>
  </li>
  <li>
    <h3>_string_toupper</h3>
    <p>Write a function that changes all lowercase letters of a string to uppercase.</p>
    <ul>
      <li>Prototype: <code>char *string_toupper(char *s);</code></li>
    </ul>
  </li>
  <li>
    <h3>_cap_string</h3>
    <p>Write a function that capitalizes all words of a string.</p>
    <ul>
      <li>Prototype: <code>char *cap_string(char *)</code>;</li>
      <li>Separators of words: space, tabulation, new line, <code>*,*, *;*, *.*, *!*, *?*, *"*, *(*, *)*, *{*, and *}*</code></li>
    </ul>
  </li>
  <li>
    <h3>_leet</h3>
    <p>Write a function that encodes a string into 1337.</p>
    <ul>
      <li>Letters a and A should be replaced by 4</li>
      <li>Letters e and E should be replaced by 3</li>
      <li>Letters o and O should be replaced by 0</li>
      <li>Letters t and T should be replaced by 7</li>
      <li>Letters l and L should be replaced by 1</li>
      <li>Prototype: <code>char *leet(char *)</code>;</li>
      <li>You can only use one if in your code</li>
      <li>You can only use two loops in your code</li>
      <li>You are not allowed to use switch</li>
      <li>You are not allowed to use any ternary operation</li>
    </ul>
  </li>
  <li>
    <h3>_rot13</h3>
    <p>Write a function that encodes a string using rot13.</p>
    <ul>
      <li>Prototype: <code>char *rot13(char *)</code>;</li>
      <li>You can only use if statement once in your code</li>
      <li>You can only use two loops in your code</li>
      <li>You are not allowed to use *switch*</li>
      <li>You are not allowed to use any ternary operation</li>
    </ul>
  </li>
  <li>
    <h3>_print_number</h3>
    <p>Write a function that prints an integer.</p>
    <ul>
      <li>Prototype: <code>void print_number(int n)</code>;</li>
      <li>You can only use *_putchar* function to print</li>
      <li>You are not allowed to use *long*</li>
      <li>You are not allowed to use arrays or pointers</li>
      <li>You are not allowed to hard-code special values</li>
    </ul>
  </li>
  <li>
    <h3>_magic</h3>
    <p>Add one line to this code, so that the program prints a[2] = 98, followed by a new line.</p>
    <ul>
      <li>You are not allowed to use the variable a in your new line of code</li>
      <li>You are not allowed to modify the variable p</li>
      <li>You can only write one statement</li>
      <li>You are not allowed to use ,</li>
      <li>You are not allowed to code anything else than the line of expected line of code at the expected line</li>
      <li>Your code should be written at line 19, before the ;</li>
      <li>Do not remove anything from the initial code (not even the comments)</li>
      <li>and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)</li>
      <li>You are allowed to use the standard library</li>
    </ul>
  </li>
  <li>
    <h3>_infinite_add</h3>
    <p>Write a function that adds two numbers.</p>
    <ul>
      <li>Prototype: <code>char *infinite_add(char *n1, char *n2, char *r, int size_r)</code>;</li>
      <li>Where *n1* and *n2* are the two numbers</li>
      <li>*r* is the buffer that the function will use to store the result</li>
      <li>*size_r* is the buffer size</li>
      <li>The function returns a pointer to the result</li>
      <li>You can assume that you will always get positive numbers, or 0</li>
      <li>You can assume that there will be only digits in the strings n1 and n2</li>
      <li>n1 and n2 will never be empty</li>
      <li>If the result can not be stored in r the function must return 0</li>
    </ul>
  </li>
  <li>
    <h3>_print_buffer</h3>
    <p>Write a function that prints a buffer.</p>
    <ul>
      <li>Prototype: <code>void print_buffer(char *b, int size)</code>;</li>
      <li>The function must print the content of size bytes of the buffer pointed by b</li>
      <li>The output should print 10 bytes per line</li>
      <li>Each line starts with the position of the first byte of the line in hexadecimal (8 chars), starting with 0</li>
      <li>Each line shows the hexadecimal content (2 chars) of the buffer, 2 bytes at a time, separated by a space</li>
      <li>Each line shows the content of the buffer. If the byte is a printable character, print the letter, if not, print .</li>
      <li>Each line ends with a new line \n</li>
      <li>If size is 0 or less, the output should be a new line only \n</li>
      <li>You are allowed to use the standard library</li>
      <li>The output should look like the following example, and formatted exactly the same way:</li>
    </ul>
  </li>
</ol>

<p> <strong><i>NB</i></strong> All functions should be implemented in separate files and be called from the main.c file.</p>


<h2 align="center">Run Locally</h2>

To run **these materials** locally, run this command on your git bash:

Linux and macOS:

```bash
sudo git clone https://github.com/Mugambi12/alx-low_level_programming/tree/master/0x06-pointers_arrays_strings.git
```

Windows:

```bash
git clone https://github.com/Mugambi12/alx-low_level_programming/tree/master/0x06-pointers_arrays_strings.git
```

