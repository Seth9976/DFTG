// 函数名称: sub_4f9100
// 虚拟地址: 0x4f9100
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4f9100(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a17f6
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_c8 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*arg1 == 0)
        int32_t eax_3 = arg1[0x1e]
        arg1[0x90] = 0
        int128_t var_9c = zx.o(0)
        var_9c.d = arg1
        var_9c:4.d = eax_3
        var_9c:8.d = eax_3
        int128_t var_bc = var_9c
        sub_4f8ad0(&var_9c:4, &var_bc)
        int32_t var_8_1 = 0
        
        if (var_9c:4.d != 3)
            arg1[0x1f] = 0
            *arg1 = 1
        else
            int32_t* esi_1 = var_9c:8.d
            arg1[0x1f] = esi_1
            int32_t eax_7 = (esi_1 - arg1 - 0x80) s/ 0x1c
            
            if (eax_7 s>= arg1[0x90])
                sub_489550(eax_7, &data_5b2591, "tree.root - tree.expressions < tree.numExpressions", 
                    "d:\ax\trunk\ax2017\engine\ui2expr.cpp", 0x2ee, "UI2ExpressionParse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (eax_7 s< 0)
                sub_489550(eax_7, &data_5b2591, "tree.root - tree.expressions >= 0", 
                    "d:\ax\trunk\ax2017\engine\ui2expr.cpp", 0x2ef, "UI2ExpressionParse")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            *arg1 = 2
            int32_t eax_9 = *esi_1 - 1
            
            if (eax_9 u<= 2)
                void var_88
                int32_t* eax_10 = sub_49a250(eax_9, arg1, &var_88, nullptr, 0x5d35d0)
                var_8_1.b = 1
                void* edi_1 = &eax_10[9]
                arg1[1] = *eax_10
                void* esi_2 = &arg1[5]
                arg1[2] = eax_10[1]
                int32_t* eax_14 = eax_10 - &arg1[1]
                int32_t i_1 = 2
                int32_t i
                
                do
                    *(esi_2 - 8) = *(edi_1 - 0x1c)
                    sub_48a560(esi_2 - 4, edi_1 - 0x18)
                    *esi_2 = *(eax_14 + esi_2)
                    *esi_2 = *(eax_14 + esi_2)
                    *esi_2 = *(eax_14 + esi_2)
                    *esi_2 = *(eax_14 + esi_2)
                    *(esi_2 + 8) = *(eax_14 + esi_2 + 8)
                    *esi_2 = *(eax_14 + esi_2)
                    *(esi_2 + 4) = *(eax_14 + esi_2 + 4)
                    *esi_2 = *(eax_14 + esi_2)
                    *esi_2 = *(eax_14 + esi_2)
                    sub_48a560(esi_2 + 0x10, edi_1 - 4)
                    i = i_1
                    i_1 -= 1
                    edi_1 += 0x34
                    esi_2 += 0x34
                    *(esi_2 - 0x20) = *(edi_1 - 0x34)
                    *(esi_2 - 0x20) = *(edi_1 - 0x34)
                    *(esi_2 - 0x20) = *(edi_1 - 0x34)
                    *(esi_2 - 0x20) = *(edi_1 - 0x34)
                    *(esi_2 - 0x18) = *(edi_1 - 0x2c)
                    *(esi_2 - 0x20) = *(edi_1 - 0x34)
                    *(esi_2 - 0x1c) = *(edi_1 - 0x30)
                    *(esi_2 - 0x20) = *(edi_1 - 0x34)
                    *(esi_2 - 0x20) = *(edi_1 - 0x34)
                    *(esi_2 - 0x10) = *(edi_1 - 0x24)
                    *(esi_2 - 0xc) = *(edi_1 - 0x20)
                while (i != 1)
                arg1[0x1d] = eax_10[0x1c]
                var_8_1.b = 2
                void var_80
                `eh vector vbase constructor iterator'(&var_80, 0x34, 2, sub_498c00)
                *arg1 = 3
        
        int32_t var_8_2 = 3
        
        if (data_aca1f4 != 0)
            char* eax_36 = var_9c:0xc.d
            
            if (eax_36 != 0 && *eax_36 != 0)
                char* eax_37 = sub_48a080(&var_9c:0xc)
                int32_t temp0_1 = *(eax_37 + 4)
                *(eax_37 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_4984f0(eax_37, *(eax_37 + 0xc) + 0x10)
    
    int32_t result = *arg1
    fsbase->NtTib.ExceptionList = ExceptionList
    @__security_check_cookie@4(eax_2 ^ &__saved_ebp)
    return result
}
