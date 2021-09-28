Q3
=======================================

[ ] How do we feel about bit operators?

Assume that we have the following `16-bit`
variables defined and initialised.

```c
uint16_t a = 0x5555, b = 0xAAAA, c = 0x0001;
```

To make our lives a tad easier, let's just
consider the least significant nibble (4 bits).

[ ] First, let's convert `a`, `b` and `c` to binary!

a = 0b0101
b = 0b1010
c = 0b0001

---

a. a | b

0b0101
0b1010 |
0b1111

b. a & b

0b0101
0b1010 &
0b0000

c. a ^ b

0b0101
0b1010 ^
0b1111

d. a & ~b

# TODO

e. c << 6

> We'll need `8 bits` for `e`, `f` and `g`

c = 0b 0000 0001 = 1

(0b 0010 0000 << 6) = 16

x * 16 // replace that with x << 4

[ ] 👀 What arithmetic operation does that look like?

f. a >> 4

0b 0000 1101 >> 4

# TODO

[ ] 👀 What arithmetic operation does that look like?

g. a & (b << 1)

# TODO

h. b | c

# TODO

i. a & ~c

# TODO
