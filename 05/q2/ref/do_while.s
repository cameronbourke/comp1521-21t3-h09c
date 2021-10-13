main:
	li	$t0, 0			# int i = 0;

main__do:				# do {
	addiu	$t0, $t0, 1		#	i++;

	li	$v0, 1			#	syscall 1: print_int
	move	$a0, $t0
	syscall				#	printf("%d", i);

	li	$v0, 11			#	syscall 11: print_character
	li	$a0, '\n'
	syscall				#	printf("\n");

	blt	$t0, 10, main__do	# } while (i < 10);

	li	$v0, 0
	jr	$ra			# return 0;
