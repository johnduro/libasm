; arg0 = di, arg1 = si, arg3 = dx

global ft_puts

ft_puts:
	push rbx
	push rdi
	mov rax, 4
	mov rbx, 1
	mov rcx, rdi
	mov rdx, 0

len:
	cmp byte [rdi], 0
	je puting
	inc rdx
	inc rdi
	jmp len

puting:
	inc rdx
	mov byte [rdi], 10
	int 0x80
	cmp eax, -1
	je error
	mov byte [rdi], 0
	;; mov eax, 1
	mov rax, rdx
	pop rdi
	pop rbx
	ret

error:
	pop rdi
	pop rbx
	ret
;; 	push rbx
;; 	mov rbx, rdi
;; 	;; mov rdx, 4
;; 	mov rdx, 0
;; 	mov rsi, rbx
;; 	;; jmp get_end

;; get_end:
;; 	cmp byte [rbx], 0 ; compare byte a byte VALEUR pointee par rbx, avec \0 donc 0
;; get_end1:
;; 	je replace15 ; JUMP to func en tant que condition
;; get_end2:
;; 	inc rbx ;  incremente le pointeur
;; get_end3:
;; 	inc rdx ; incremente la taille
;; get_end4:
;; 	jmp get_end ; JUMP sans condition

;; replace:
;; 	mov byte [rbx], 10
;; replace15:
;; 	mov rax, 4
;; replace1:
;; 	mov rdi, 1
;; replace2:
;; 	syscall
;; replace3:
;; 	mov byte [rbx], 0
;; replace4:
;; 	pop rbx
;; 	mov rax, rdx
;; replace5:
;; 	ret

