N_ELEMENTS = 5


main:
	# Locals:
	#	- $t0: int i
	#	- $t1: temporary result

loop__init:

	li	$t0, 0				# int i = 0;

loop__cond:
	bge	$t0, N_ELEMENTS, loop__end

loop__body:
	lb	$a0, array($t0)
	li	$v0, 11				# syscall 11: print_char
	syscall

	li	$v0, 11				# syscall 11: print_char
	li	$a0, '\n'			#
	syscall					# putchar('\n')

loop__step:
	addi	$t0, $t0, 1			# i++;
	b	loop__cond

loop__end:


	li	$v0, 0
	jr	$ra				# return 0;

	.data

array:
	.byte	'h', 'e', 'l', 'l', 'o'
