	.text
main:
	# Locals:
	# - $t0: int x
	# - $t1: int y

	li	$v0, 4			# syscall 4: print_string
	la	$a0, enter_number_msg	#
	syscall				# printf("Enter a number: ");

	li	$v0, 5			# syscall 5: read_int
	syscall				#
	move	$t0, $v0		# scanf("%d", &x);

	ble	$t0, 46340, x_le_46340	# if (x <= 46340) goto x_le_46340;

	li	$v0, 4			# syscall 4: print_string
	la	$a0, too_big_msg	#
	syscall				# printf("square too big...");

	b	epilogue

x_le_46340:
	mul	$t1, $t0, $t0		# y = x * x;

	li	$v0, 1			# syscall 1: print_int]
	move	$a0, $t1		# 
	syscall				# printf("%d", y);

	li	$v0, 11			# syscall 11: print_char
	li	$a0, '\n'		#
	syscall				# putchar('\n');

epilogue:
	li	$v0, 0			#
	jr	$ra			# return 0;

	.data

enter_number_msg:
	.asciiz	"Enter a number: "

too_big_msg:
	.asciiz	"square too big for 32 bits\n"
