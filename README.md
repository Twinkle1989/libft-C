# libft-C
Libft, first project to get your feet wet, by writing your own very first C standard library, with some extra functions!

**Description:**
Libft is a comprehensive C library project aimed at replicating various standard C library functions, along with additional utility functions to assist in C programming tasks. This project serves both as an academic exercise to deepen understanding of C and its standard libraries, and as a handy suite of tested, reusable code for future C projects.

## Key Features:
### **Part 1 - Libc standard C functions**
These functions are re-implementations of standard Libc functions, prefixed with 'ft_'. Making these will provide a solid foundation for handling strings and memory. These function includes custom implementations of standard C library functions like:
• isalpha
<br/>
• isdigit
<br/>
• isalnum
<br/>
• isascii
<br/>
• isprint
<br/>
• strlen
<br/>
• memset
<br/>
• bzero
<br/>
• memcpy
<br/>
• memmove
<br/>
• strlcpy
<br/>
• strlcat
<br/>
• toupper
<br/>
• tolower
<br/>
• strchr
<br/>
• strrchr
<br/>
• strncmp
<br/>
• memchr
<br/>
• memcmp
<br/>
• strnstr
<br/>
• atoi
<br/>
• calloc (use malloc)
<br/>
• strdup (use malloc)
<br/>

### **Part 2 - Additional functions**
These functions are not found in the standard Libc or are modified versions of standard functions:

• ft_substr - Creates a substring from a string.
<br/>
• ft_strjoin - Concatenates two strings into one.
<br/>
• ft_strtrim - Trims the beginning and end of a string based on a set of characters.
<br/>
• ft_split - Splits a string into an array of strings based on a delimiter character.
<br/>
• ft_itoa - Converts an integer to a string.
<br/>
• ft_strmapi - Applies a function to each character of a string.
<br/>
• ft_striteri - Applies a function to each character of a string, which can modify the character.
<br/>
• ft_putchar_fd - Outputs a character to a given file descriptor.
<br/>
• ft_putstr_fd - Outputs a string to a given file descriptor.
<br/>
• ft_putendl_fd - Outputs a string followed by a newline to a file descriptor.
<br/>
• ft_putnbr_fd - Outputs an integer to a file descriptor.

These functions serve various purposes, from memory and string manipulation to more complex operations like converting data types and dynamically managing memory.

### **Part 3 - Bonus Functions**
These functions involve list manipulation, which is highly useful in various programming scenarios. It is crucial to implement these bonus functions as they deal with linked lists, a fundamental data structure you will frequently encounter in future projects. Learning and mastering these operations now will provide a strong foundation for more complex tasks later.

• ft_lstnew - Creates a new list node.
<br/>
• ft_lstadd_front - Adds a new node at the beginning of the list.
<br/>
• ft_lstsize - Returns the number of nodes in the list.
<br/>
• ft_lstlast - Returns the last node of the list.
<br/>
• ft_lstadd_back - Adds a new node at the end of the list.
<br/>
• ft_lstdelone - Frees a node and its content using a delete function.
<br/>
• ft_lstclear - Deletes and frees a node and all its successors.
<br/>
• ft_lstiter - Applies a function to the content of each node in the list.
<br/>
• ft_lstmap - Creates a new list by applying a function to each node's content, allowing for transformation and filtering of list data.

By mastering these list manipulation functions, you'll enhance your ability to handle data structures efficiently and effectively, preparing you for more advanced programming challenges.

## **Additional Tip: Testing Your Functions**
Before submitting your Libft project, it is highly recommended to thoroughly test all your functions to ensure they meet the expected standards and behave as intended. Testing not only helps catch bugs early but also improves the quality and reliability of your code. Here are a few tools and methods you can use to test your Libft functions:

Francinette: This is a popular testing tool specifically designed for 42 school projects like Libft. It tests your functions against a wide range of cases to ensure they behave exactly like their standard C library counterparts. Using Francinette can help you identify subtle bugs and edge cases in your implementations.
<br/>
Libft Unit Tests: Another great option is to use one of the many available online unit testers such as libft-unit-test, Libftester, or 42TESTERS-LIBFT. These tools provide comprehensive testing frameworks that automatically compare the outputs of your functions against the libc functions for a variety of inputs.
<br/>
Write Your Own Tests: Creating your own test cases allows you to understand your functions' behavior under different conditions. This practice not only helps in debugging but also deepens your understanding of how functions work under the hood.
<br/>
Peer Review: Discuss and test your functions with your peers. Peer reviews can provide new insights and help discover issues that automated tests might miss. It also simulates a real-world scenario where your code could be reviewed by other developers.
<br/>
Continuous Testing: Integrate testing into your development process. Run your tests after implementing each function or making significant changes. This helps ensure that new changes do not break existing functionalities.

<br/>
<p align="center">
"C: Where you can write powerful code that even you can't understand a week later.:shipit:"
<p align="center">
--------------------------ALL THE BEST----------------------------
