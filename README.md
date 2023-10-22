Team Project
0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life
1. Education is when you read the fine print. Experience is what you get if you don't
2. With a face like mine, I do better in print
3. What one has not experienced, one will never understand in print
4. Nothing in fine print is ever good news
5. My weakness is wearing too much leopard print
6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
7. The big print gives and the small print takes away
8. Sarcasm is lost in print
9. Print some money and give it to us for the rain forests
10. The negative is the equivalent of the composer's score, and the print the performance
11. It's depressing when you're still around and your albums are out of print
12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
13. Print is the sharpest and the strongest weapon of our party
14. The flood of print has turned reading into a process of gulping rather than savoring

*README BEGINS*

* ALX PRINTF PROJECT

* Printf - A function used to print formatted text to the standard output stream,(f stands Formatted).

* Custom Printf Prototype: int _printf(const char *format, ...);

								/***DESCRIPTION***/

* Printf is a standard C library function. It stands for "print formatted", widely used in programming for displaying formatted output on the console or other output devices.

String Format

* The first argument is a format string ending with a null byte

Format Specifiers:

    %d or %i: Integer.
	Represents a signed decimal integer.
    %c: Character.
	Represents a character.
    %s: String.
	Represents a null-terminated string.
    %p: Pointer address.
	Represents a pointer address (memory address).
    %%: Prints a percent sign.
	Represents a literal percent sign.

								/***FUNCTION PROTOTYPES***/

int format_str(const char *format, arguments func_list[], va_list list);
	The core function for formatting strings.

int decimal_print(va_list final_args);
	Handle's printing decimal integers

int binary_print(va_list final_args);
	Responsible for printing binary integers

int char_print(va_list args);
	 Handles printing characters

int rev_print(va_list final_args);
	Handle's printing a reversed version of a string or number.

int rot13_print(va_list final_args);
	Implements the ROT13 algorithm for string encryption/decryption.

int address_print(va_list final_args);
	Handles printing memory addresses.

int unsigned_print(va_list final_args);
	Handles printing unsigned integers.

int percent_print(void);
	Handles printing a percentage sign (%)

int _strlen(char *str);
	Calculates the length of a string

int _strlenop(const char *str);
	Similar to _strlen, but it takes a const char *str as input.

int string_print(va_list args);
	Handles printing strings.

int _printf(const char *format, ...);
	 The main interface for the custom formatted printing.

int op_putchar(char c);
	Handles printing
