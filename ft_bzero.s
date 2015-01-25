       ;; void bzero(void *s, size_t n);

global ft_bzero

ft_bzero:
	push rbx
	mov rbx, rdi

while:
	cmp rsi, 0
	je return
	mov byte [rbx], 0
	add rbx, 1
	add rsi, -1
	jmp while

return:
	pop rbx
	ret
