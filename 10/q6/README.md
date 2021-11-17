Q6
==========================================

> See site

Consider the following piece of MIPS code, where
- `loop1` is located at `0x1000`
- `end_loop1` is located at `0x1028`, and
- `array` is located at `0x2000`.

If the program containing this code is loaded starting at
address `A = 0x8000`, which instructions need to be rewritten,
and what addresses are in the relocated code?

```asm
	 l   li  $t0, 0
   li  $t1, 0
   li  $t2, 20  # elements in array
loop1:
   bge $t1, $t2, end_loop1
   mul $t3, $t1, 4
   la  $t4, array
   add $t3, $t3, $t4
   lw  $t3, ($t3)
   add $t1, $t1, $t3
   add $t1, $t1, 1
   j   loop1
end_loop1:i  	$t0, 0
   li  	$t1, 0
   li  	$t2, 20  # elements in array
loop1:
   bge	$t1, $t2, end_loop1
   mul 	$t3, $t1, 4
   la  	$t4, array
   add 	$t3, $t3, $t4
   lw  	$t3, ($t3)
   add 	$t1, $t1, $t3
   add 	$t1, $t1, 1
   j   	loop1
end_loop1:
```

What do they mean by rewrite?

```bash
$ 1521 mipsy --hex ./prog.s
$ ./print_instr
```
