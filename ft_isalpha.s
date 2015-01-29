; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx, arg4  = cx

global _ft_isalpha

_ft_isalpha:
push rbx ; save les valeurs par defauts sur la stack
mov	rbx, rdi ; passe l argument sur rbx
cmp rbx, 65
jl returnfalse; jl = i < 65
cmp rbx, 90
jg _ismin ; jg = i >  90
jmp returntrue

_ismin:
cmp rbx, 97
jl returnfalse ; jl = i < 97
cmp rbx, 122
jg returnfalse ; jg = i > 122
jmp returntrue

returnfalse:
mov eax, 0 ; on veut return 0
pop rbx
ret

returntrue:
mov eax, 1 ; on veut return 1
pop rbx
ret
