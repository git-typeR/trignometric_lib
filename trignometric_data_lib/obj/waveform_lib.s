	.file	"waveform_lib.c"
	.text
	.globl	mixed_sin_curve_create
	.type	mixed_sin_curve_create, @function
mixed_sin_curve_create:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movss	%xmm0, -28(%rbp)
	movss	%xmm1, -32(%rbp)
	movss	%xmm2, -36(%rbp)
	movss	-28(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
	jmp	.L2
.L3:
	movq	-24(%rbp), %rax
	movss	16(%rax), %xmm0
	mulss	-4(%rbp), %xmm0
	movq	-24(%rbp), %rax
	movss	%xmm0, 16(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	sin_curve_create
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	8(%rax), %esi
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	add_data
	movss	-4(%rbp), %xmm0
	addss	-36(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
.L2:
	movss	-32(%rbp), %xmm0
	ucomiss	-4(%rbp), %xmm0
	jnb	.L3
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	mixed_sin_curve_create, .-mixed_sin_curve_create
	.globl	mixed_cos_curve_create
	.type	mixed_cos_curve_create, @function
mixed_cos_curve_create:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movss	%xmm0, -28(%rbp)
	movss	%xmm1, -32(%rbp)
	movss	%xmm2, -36(%rbp)
	movss	-28(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
	jmp	.L5
.L6:
	movq	-24(%rbp), %rax
	movss	16(%rax), %xmm0
	mulss	-4(%rbp), %xmm0
	movq	-24(%rbp), %rax
	movss	%xmm0, 16(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	cos_curve_create
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	8(%rax), %esi
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	add_data
	movss	-4(%rbp), %xmm0
	addss	-36(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
.L5:
	movss	-32(%rbp), %xmm0
	ucomiss	-4(%rbp), %xmm0
	jnb	.L6
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	mixed_cos_curve_create, .-mixed_cos_curve_create
	.globl	mixed_tan_curve_create
	.type	mixed_tan_curve_create, @function
mixed_tan_curve_create:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -24(%rbp)
	movss	%xmm0, -28(%rbp)
	movss	%xmm1, -32(%rbp)
	movss	%xmm2, -36(%rbp)
	movss	-28(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
	jmp	.L8
.L9:
	movq	-24(%rbp), %rax
	movss	16(%rax), %xmm0
	mulss	-4(%rbp), %xmm0
	movq	-24(%rbp), %rax
	movss	%xmm0, 16(%rax)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	tan_curve_create
	movq	-24(%rbp), %rax
	movl	8(%rax), %ecx
	movq	-24(%rbp), %rax
	movq	(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	8(%rax), %esi
	movq	-24(%rbp), %rax
	movq	(%rax), %rax
	movq	%rax, %rdi
	call	add_data
	movss	-4(%rbp), %xmm0
	addss	-36(%rbp), %xmm0
	movss	%xmm0, -4(%rbp)
.L8:
	movss	-32(%rbp), %xmm0
	ucomiss	-4(%rbp), %xmm0
	jnb	.L9
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	mixed_tan_curve_create, .-mixed_tan_curve_create
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
