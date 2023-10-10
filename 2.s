_Z3seei:
.LFB0:
	movslq	%edi, %rax
	imulq	$1717986919, %rax, %rax
	sarq	$34, %rax
	sarl	$31, %edi
	subl	%edi, %eax
	cmpl	$12, %eax
	ja	.L2
	movl	%eax, %edx
	jmp	*.L4(,%rdx,8)
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L6
	.quad	.L6
	.quad	.L6
	.quad	.L6
	.quad	.L6
	.quad	.L6
	.quad	.L1
	.quad	.L2
	.quad	.L1
	.quad	.L5
	.quad	.L5
	.quad	.L2
	.quad	.L1
	.text
.L5:
	movl	$9, %eax
	ret
.L2:
	movl	$-1, %eax
	ret
.L6:
	movl	$0, %eax
.L1:
	ret
	.cfi_endproc
.LFE0:
