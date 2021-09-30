Q2
==========================================

❓ Why is it called _twos complement_?

The idea of twos complement predates computers! 💻

Consider this. What is 15 - 11?

15 - 11 = 4. Easy!

But what if you had to use **addition**? 🤔

Subtraction with complements to the rescue!

Umm. What is a complement though?

If we are in base 10, the 10s complement of x is defined as:

10^n - x, where n is the number of digits

In our example, we had n = 2. So the 10s complement of 11 is:

10^2 - 11 = 89

Now if we add that to 15, we have:

15 + 89 = 104

Drop the most significant digit, and wuolah!

04

But! It gets better. Doing 10^2 - 11 is tiresome,
so instead we can use 9s complement to find the 10s complement.

The idea is that you first subtract 9 from each digit, 
and [then add 1](https://www.youtube.com/watch?v=iS8i6RyZ2TE&lc=UgjK7nFyK-nv43gCoAEC).

11 -> 88

Now add the 1, giving us 89. The same as before!

🥳 Fun Fact

10s complement was used by a mechanical calculator
that was built in the 1950s called a [Curta Calculator](https://www.youtube.com/watch?v=ZDn_DDsBWws).

---

Assume that the following hexadecimal values are 16-bit twos-complement.
Convert each to the corresponding decimal value.

Let's just give one a go!

0xF234

0b 1111 0010 0011 0100 = -3532

negate step

0b 0000 1101 1100 1011

add one

                   11
0b 0000 1101 1100 1011
   0000 0000 0000 0001
   0000 1101 1100 1100

0b0000110111001100



```c
printf("%d\n", (int16_t)0xF234);
```
