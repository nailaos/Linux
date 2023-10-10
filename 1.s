_Z3seei:
.LFB0:
	movslq	%edi, %rax
	imulq	$1717986919, %rax, %rax
	sarq	$34, %rax
	sarl	$31, %edi
	subl	%edi, %eax # score/10的结果放入寄存器eax中
	cmpl	$12, %eax
	ja	.L2 # 如果大于12就跳转到.L2
	movl	%eax, %edx
	jmp	*.L4(,%rdx,8) # 跳转到8*rdx中存放的值这个结果所指向的内存地址
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
.L6:
	movl	$0, %eax
	ret
.L2:
	movl	$-1, %eax
.L1:
	ret
	.cfi_endproc
.LFE0:
