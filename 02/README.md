👋 Week 2
=======================================

[x] 🎉 My Party Game 

[x] 🎤 PSAs

- [New Home](https://github.com/cameronbourke/comp1521-21t3-h09c)
- Watch other people's tuts!
- Base conversions are finicky.
- Feel free to ask tut questions in the lab!
- We are in a pandemic. You are doing your best.

[x] 📹 Hit Record

[x] 🙂 Acknowledgement of Country

[ ] 🧠 Change Of Perspective

When we use bitwise operations,
we treat everything as an array of bits.

An `int` is an array of bits of length 32.

A `short` looks like: 0b 0010 0001 0000 0001

A `double` is an array of bits of length 64.

```c
char bits_str[9] = { '0', '0', '1', '0', '1', '1', '1', '0', '\0' }
uint8_t bits = 0x2E; // 0b00101110
```

Note, `bits_str` and `bits` store the same information.
However, `bits` is able to represent it with only
a fraction of the number of bytes (9 vs 1).

> $ echo '00101110' > bits.txt
> $ xxd -b bits.txt
> $ man ascii

[x] 🥼 [Lab Preview](https://cgi.cse.unsw.edu.au/~cs1521/21T3/lab/02/questions)

[x] ❓ Q&A

[ ] 🏫 [Tut Questions](q1/README.md)

[ ] 🤷 BCD

[ ] 👌 Top Picks

- [Binary: Why We Use Two's Complement](https://www.youtube.com/watch?v=lKTsv6iVxV4)
- [Computerphile](https://www.youtube.com/channel/UC9-y-6csu5WGm29I7JiwpnA)
