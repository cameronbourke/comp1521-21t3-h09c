Assignment 1 Tip & Tricks
=========================================

### I'm not very comfortable using `mipsy` yet?

That's okay! It might help grabbing a few small
MIPS program from the lectures, and then practice creating
breakpoints, printing registers, and maybe
even though in a bug to see if you can work it out!

### What if the error is confusing?

Someone else has most likely also found it confusing!
Check out the assignment 1 questions on the
[course forum](https://discourse.cse.unsw.edu.au/21t3/comp1521/c/assignments/assignment-1/20)

### I'm still not sure when to use `$t` vs `$s` regs?

My general rule is that if its a local variable
then, it goes in an `$s` register. Then,
everything else are in `$t` register.

A perfect example of when to use a `$t` register
is to calculate the address of the cell in the grid.

### What if my autotests fail?

1. Find the first failing autotest.
2. Copy the `$ echo ...` command to replicate the test.
3. Run the `$ echo ...` command in order to get a feel
	 for _how_ it's breaking.
4. Try and determine which function(s) of your MIPS
	 code is related to the issue.
5. Create a breakpoint (with `mipsy`) for the start of the
	 function and step through, ensuring that each instruction
	 is doing what you expected.

### Triple check the address calculation

Many times, the "math" for address calculation
of `&grid[row][col]` is perfect, but maybe the
wrong register has been used, or `row` has
been accidently used for `col`. Best way to check
is to:

1. Run `mipsy`: `$ 1521 mipsy`.
2. Then load the files: `[mipsy] load grid.s minesweeper.s`.
3. Next, create a breakpoint where you are
	 calc'ing the addr: `[mipsy] breakpoint i <label>`.
4. Then run the program: `[mipsy] run`.
5. Then step through the addr calculation,
	 and then print the addr, e.g `[mipsy] print $t0 x`.
6. Now compare the printed address with a manual calculation.
			- You can find the address of `grid` by doing: `[mipsy] labels`.
			- Look for `grid`, it should be `0x1001000c`.

### How to test `reveal_cell` by itself?

Unfortunately, there are no autotests for part 1
of subset 3. But! You can manually test that
the `if` conditions work in `reveal_cell` by
running the program and checking that it prints
the correct message when required.

Then! In `clear_surroundings`, you can skip
the recursive calls (which can be a source of trouble)
and only implement setting the value of the cell.
That way, you can test that `reveal_cell` calls
`clear_surroundings`, but `clear_surroundings` does
not make any recursive calls.

Don't implement `clear_surroundings` until you are
confident `reveal_cell` is working correctly!
