Q6
==========================================

[ ] Common Mistakes (this week)

- string literal for `li`
```asm
	li	$t0, "hello" 
```

- using `li` or `la` instead of `move`
```asm
	li	$t0, $t1
```
```asm
	la	$t0, $t1
```

- forgetting `jr $ra` at the end of main
```asm
main:
	...
	jr	$ra <-- forget
```

- forgetting to store the return value of syscalls
```asm
	li	$v0, 1
	syscall
	move $t1, $v0 <-- forget
	addi $t2, $t1, 2
```

- accidently overriding registers
```asm
	li	$t0, 1			# x = 1
	...
	syscall
	move $t0, $v0 <-- already using $t0
```

- forgetting to add unconditional jump within if block
```asm
f_n_eq_0:
	bne $t0, 0, cond_false		# if (n == 0)
	...
	j		f__epi <-- forget
f_n_eq_0_f:									# else
	...
f__epi:
	jr	$ra										# return
```

- forgetting to add corresponding C code as comments
```asm
	li	$t0, 1	<-- what variable is t0 holding?
	li	$t1, 2
	...
```

- forgetting to add segment directives
```asm
.text <-- forget
main:
	li	$t0, 1
	li	$t1, 2
	...

.data <-- foget
string:
	.asciiz "Hello World\n"

[ ] Demo debugging for loops with `mipsy` using `./loop.s`
