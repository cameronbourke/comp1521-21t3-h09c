	.text
main:
	addi	$sp, -16
	sw	$ra, 12($sp)
	sw	$s0, 8($sp)

		# int a = 10
	li	$s0, 10
		# $s0 = a

		# int b = 30
	li	$s1, 30
		# $s1 = b

		# push a onto the stack
	sw	$s0, 4($sp)
		# int c = 40
	li	$s0, 40
		# $s0 = c

		# push c onto the stack
	sw	$s0, 0($sp)
	lw	$s0, 4($sp)
		# $s0 = a
	add	$s0, $s0, $s1
		# $s0 = a + b
		# $s0 = d

	lw	$s1, 0($sp)
		# $s1 = c
	add	$v0, $s0, $s1
		# $v0 = d + c

	lw	$ra, 12($sp)
	lw	$s0, 8($sp)
	addi	$sp, 16

	li	$v0, 0
	jr	$ra
	
