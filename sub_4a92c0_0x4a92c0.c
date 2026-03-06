// 函数名称: sub_4a92c0
// 虚拟地址: 0x4a92c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4a92c0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t var_80c[0x40][0x4]
    _memset(&var_80c, 0, 0x400)
    uint32_t var_40c[0x40][0x4]
    _memset(&var_40c, 0, 0x400)
    int32_t ebx = arg1[2]
    int32_t i = 0
    int32_t esi = 0
    
    if (ebx != 0)
        void* edi_1 = *arg1
        uint32_t (* edx)[0x40][0x4] = &var_40c
        
        do
            *edx -= 1
            
            if (esi == arg2)
                int32_t result = var_80c[0][i]
                @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
                return result
            
            int32_t ecx = *(edi_1 + 0x10)
            i += 1
            var_40c[0][i] = ecx
            edx = &var_40c[0][i]
            var_80c[0][i] = edi_1
            
            if (ecx == 0)
                while (i != 0)
                    i -= 1
                    edx = &var_40c[0][i]
                    
                    if (var_40c[0][i] != 0)
                        break
            
            esi += 1
            edi_1 += 0x18
        while (esi u< ebx)
        
        if (i != 0)
            sub_489550(i, &data_5b2591, "indent == 0", "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x22ed, 
                "AttribTreeFindParent")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
    return 0
}
