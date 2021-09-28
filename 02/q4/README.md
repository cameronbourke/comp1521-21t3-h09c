Q4
=======================================

Consider a scenario where we have the following flags
controlling access to a device.

```c
#define READING   0x01 // 0b 0000 0001
#define WRITING   0x02
#define AS_BYTES  0x04 // 0b 0000 0100
#define AS_BLOCKS 0x08
#define LOCKED    0x10
```

The flags are contained in an 8-bit register, defined as:

```c
unsigned char device;
```

[ ] Write `C` expressions to implement each of the following:

a. mark the device as **locked** for reading bytes

```c
unsigned char device;
device = (READING | AS_BYTES | LOCKED);
```

[ ] What is the difference between a `flag` and a `mask`?

> flag -> mask -> bit (un)set

b. mark the device as **locked** for writing blocks.
# TODO

c. set the device as **locked**,
	 leaving other flags unchanged.
# TODO

d. **remove** the lock on a device,
	 leaving other flags unchanged
# TODO

e. **switch** a device from reading to **writing**,
	 leaving other flags unchanged
# TODO

f. **swap** a device between **reading** and **writing**,
	 leaving other flags unchanged
# TODO

> If you like all things bits, you will love [Microprocessors and Interfacing](https://www.handbook.unsw.edu.au/undergraduate/courses/2022/COMP2121?year=2022)
