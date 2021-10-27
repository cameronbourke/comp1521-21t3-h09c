# Poll: How do you allocate your regs?
	.text
max:
	# Args:
	#	TODO
	# Returns: TODO
	#
        # Frame:    TODO
	# Uses:     TODO
	# Clobbers: TODO
	#
	# Locals:
	#	TODO
	#
	# Structure:
	#   TODO

		# prologue
	addi	$sp, -4
	sw	$ra, 0($sp)

		# epilogue
	lw	$ra, 0($sp)
	addi	$sp, 4

		# return max_so_far;
	li	$v0, #TODO
	jr	$ra
