Q2
=======================================

[ ] How does `C` interpret numbers?

```c
int main () {
	int x = (int)2;
	...
}
```

[ ] How can you tell if an integer constant in a C program is:
	- `decimal` (base 10)
	- `hexadecimal` (base 16)
		0x2
	- `octal` (base 8)
		02
	- `binary` (base 2)
		0b10

[ ] What would be a better choice for octal?

0o2

> Crack open `python`

[ ] 🧮 Base Conversions

The following number has volunteered to get us started.
	----
	|87|
	----

> Decimal => Binary

64 = 2^6  // floor(log2(87))
// floor(log2(87)) = 6

1 _ _ _ _ _ _
6 5 4 3 2 1 0

23 // 16 = 2^4

1 0 1 _ _ _ _
6 5 4 3 2 1 0

23 - 16 = 7

0 1 0 1 0 1 1 1
  6 5 4 3 2 1 0

> Decimal => Hex

A = 10
B = 11
C = 12
D = 13
E = 14
F = 15

87 // 16^1 * 5 = 80

0x 5  _
   ^1 ^0

87 - 80 = 7

0x 5  7
   ^1 ^0

0x57

[ ] Is there a quicker way?

...








> Binary => Hex

A = 10 = 0b1010
B = 11 = 0b1011
C = 12 = 0b1100
D = 13 = 0b1101
E = 14 = 0b1110
F = 15 = 0b1111

0b 0101 0111

0x 5    7












|---------------------------|
| Roses are #FF0000,			  |
| Violets are #0000FF,		  |
| Hexadecimal is awesome,	  |
| And so are you!					  |
|---------------------------|

> Decimal => Octal

# TODO

[ ] Show what the following decimal values look like in:
	- 8-bit `binary`
	- 3-digit `octal`
	- 2-digit `hexadecimal`

a. 1

0b00000001
0o001
0x01

That was easy!

b. 8

0b 0000 1000
0o 010

c. 10

1m. Have a go!

0b 0000 1010
0o 012
0x 0A

d. 15

e. 16

f. 100

g. 127

h. 200

[ ] How could I write a `C` program to answer this question?

> Complete `q2/print_bases.c`

But converting bases is a _slow_ and _tiring_ procedure! I know!

> Have a geez at [Anki](https://apps.ankiweb.net/)
