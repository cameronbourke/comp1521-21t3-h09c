Q1
==========================================

- How is the assignment going?

> Poll

### FAQ

- Q. How to compile and run `./chicken` with one command?
	- A. `$ make && ./chicken -l examples/text_file.egg`

- Q. How to diff the output of the reference implementation and your implementation?
	- A. `$ diff <(./chicken -l examples/text_file.egg) <(1521 chicken -l examples/text_file.egg)`

- Q. How do I make the conversion from bit string (`-rwxrwxrwx`) to `mode_t` shorter?
	- A. Cough, cough `strtol`, cough, cough.

- Q. How do I skip over the content bytes of the `egg`?
	- A. Try your good friend: `fseek`.

- Q. How to stop repeating the code to iterate over an `egg`?
	- See `WhirlwindDifficultConfig` replit.com
	- https://replit.com/@CameronBourke1/WhirlwindDifficultConfig#main.c

- Q. While we are here, have you got any you'd like to add?

### Tips & Tricks

- Need more examples? Make sure to checkout the `examples/` directory? 
	- There are `48` examples in total!
	- Always start with the simplest `.egg` file when debugging.
		- `1_file.egg`, `2_file.egg`, ...

- Remember to hash all the bytes of the `egg` (besides the `hash` itself`),
	not just the content bytes of the `egg`.

- If you weren't here last week, make sure to checkout last week's
	recording where we went over `hexedit` and `xxd`.
