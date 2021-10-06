main:
	la	$t0, string
	li	$t1, 10
	div	$t2, $t1, $t0
	.data
string:
	.asciiz "I love MIPS\n"
