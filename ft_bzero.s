       ;; void bzero(void *s, size_t n);

global _ft_bzero

_ft_bzero:
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

;; _ft_bzero:
;; 	;; push rcx
;; 	mov eax, 0
;; 	mov rcx, rsi
;; 	rep stosd
;; 	;; pop rcx
;; 	ret
