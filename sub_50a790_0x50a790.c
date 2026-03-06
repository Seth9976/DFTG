// 函数名称: sub_50a790
// 虚拟地址: 0x50a790
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __fastcallsub_50a790(char** arg1, void* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1ae9
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_28 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** var_18 = arg1
    int32_t var_8_1 = 0
    int32_t var_14 = 0
    sub_48a2c0(arg1, &data_5b2591)
    int32_t var_8_2 = 0
    int32_t i = 0
    int32_t var_14_1 = 1
    
    if (*(arg2 + 0x28) s> 0)
        do
            int32_t eax_3 = *(arg2 + 0x20)
            
            if (*(eax_3 + (i << 2)) != 0)
                sub_489550(eax_3, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\materialfndef.cpp", 
                    0x2d5, "EmitUVModifiers")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            sub_48a670(arg1, "\tuv = Spherize(uv);\n")
            i += 1
        while (i s< *(arg2 + 0x28))
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg1
}
