# Iteratively calculate a factorial.

main:
	# Locals:
	# - $t0: int n
	# - $t1: int fac
	# - $t2: int i

	li	$v0, 4			# syscall 4: print_string
	la	$a0, prompt_msg		#
	syscall				# printf("n = ");

	li	$v0, 5			# syscall 5: read_int
	syscall				# 
	move	$t0, $v0		# scanf("%d", &n);

	li	$t1, 1			# int fac = 1;

fac_loop__init:
	li	$t2, 1			# int i = 1;

fac_loop__cond:
	bgt	$t2, $t0, fac_loop__f	# if (i > n) goto fac_loop__f;

fac_loop__body:
	mul	$t1, $t1, $t2		# fac = fac * i;

fac_loop__step:
	addi	$t2, $t2, 1		# i++;
	b	fac_loop__cond


fac_loop__f:

	li	$v0, 4			# syscall 4: print_string
	la	$a0, result_msg		#
	syscall				# printf("n! = ");

	li	$v0, 1			# syscall 1: print_int
	move	$a0, $t1		#
	syscall				# printf("%d", fac);

	li	$v0, 11			# syscall 11: print_char
	li	$a0, '\n'		#
	syscall				# putchar('\n');

	li	$v0, 0
	jr	$ra			# return 0;

	.data
prompt_msg:
	.asciiz	"n = "
result_msg:
	.asciiz	"n! = "
