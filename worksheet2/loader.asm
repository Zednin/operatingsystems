global loader                           ;entry symbol for ELF
    MAGIC_NUMBER    equ 0x1BADB002      ;define magic number constant
    FLAGS           equ 0x0             ;
    CHECKSUM        equ -MAGIC_NUMBER   ;(magic number + checksum +flags should equal 0)

    section .text:                      ;start of the text section
        align 4                         ;the code must be 4 byte aligned
            dd MAGIC_NUMBER             ;write the magic number to the machine code
            dd FLAGS                    ;the flags
            dd CHECKSUM                 ;and the CHECKSUM

    loader:
        mov eax, 0xCAFEBABE

    .loop:
        jmp .loop