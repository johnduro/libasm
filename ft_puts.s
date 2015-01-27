; arg0 = di, arg1 = si, arg3 = dx

global _ft_puts

_ft_puts:
	push rbx
	push rdi
	mov rax, 0x2000004			; syscall de write
	mov rsi, rdi				; arg 1 write
	mov rdi, 1 					; arg 0 write
	mov edx, 0					; arg 3 write
	mov rbx, rsi				; pointeur sur la string pour remplacer le \0

len:
	cmp byte [rbx], 0
	je puting
	inc edx
	inc rbx
	jmp len

puting:
	inc edx
	mov byte [rbx], 10
	syscall
	cmp eax, -1
	je error
	mov byte [rbx], 0
	;; mov eax, 1
	mov eax, edx
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
