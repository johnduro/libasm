;; ld -macosx_version_min 10.7.0 -lSystem -lcrt1.o main.o ft_cat.o
;; void ft_cat(int fd);
; arg0 = di, arg1 = si, arg3 = dx

section .text

global _ft_cat

_ft_cat:
	cmp edi, -1
	jle ft_return
	mov rsi, buf

cat_loop:
	mov rax, 0x2000003 ;read
	mov rdx, 8192
	syscall
	cmp eax, 0
	jle ft_return
	mov edx, eax
	mov rax, 0x2000004 ;write
	push rdi
	mov rdi, 1
	syscall
	pop rdi
	cmp eax, -1
	je ft_return
	cmp rdi, 0
	je cat_loop
	cmp rax, 8192
	jge cat_loop

ft_return:
	ret

section .data

buf:
	times 8192 db 0
