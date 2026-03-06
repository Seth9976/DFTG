// 函数名称: sub_44ac90
// 虚拟地址: 0x44ac90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_44ac90(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, char arg5, char arg6)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    void* var_338 = arg3
    int32_t* esi = arg3 + ((arg4 * 3 + 0x231) << 2)
    int32_t var_330[0xc9]
    int32_t eax_6 = sub_4453c0(&var_330, arg2, arg3, &var_330, 2)
    arg3.b = *(esi + 7)
    uint32_t esi_1 = 0
    
    if (arg3.b != 0xff)
        esi_1 = zx.d(arg3.b)
    
    int32_t* edx_1 = esi
    uint32_t ecx = 0
    
    if (arg6 == 0)
        ecx = esi_1
    
    int32_t edi = 0
    int32_t result = *(*edx_1 + (ecx << 2) + 0x10)
    
    if (eax_6 s> 0)
        do
            var_32c
            void* ebx_1 = *(&var_32c + (edi << 3))
            int32_t eax_7 = *(ebx_1 + 4)
            
            if ((eax_7.b & 4) != 0)
                int32_t eax_8
                
                if ((eax_7 & 0x400) != 0)
                    eax_8 = sub_445390(edx_1)
                
                if ((eax_7 & 0x400) == 0 || eax_8 != 0)
                    int32_t result_1 = result
                    result -= *(ebx_1 + 8)
                    
                    if (result s< 1)
                        result = 1
                    
                    int32_t eax_9 = result_1 - result
                    
                    if (*(var_338 + 0x10) == 0 && eax_9 != 0 && arg5 != 0)
                        sub_444430(eax_9, 0x12, var_338, arg2, var_330[edi * 2], 4, eax_9, arg4)
            
            edx_1 = esi
            edi += 1
        while (edi s< eax_6)
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return result
}
