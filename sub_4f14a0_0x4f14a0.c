// 函数名称: sub_4f14a0
// 虚拟地址: 0x4f14a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4f14a0(int32_t* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_5a1280
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_2c = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = sub_4f13e0(arg1, 1)
    void* ebx = data_114e818
    
    if (ebx == 0)
        sub_489550(eax_3, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
            "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* ebx_1 = *(ebx + 4)
    int32_t* i_2 = *(ebx_1 + 0x18) * 0x314
    int32_t* i_1 = *(ebx_1 + 0x14)
    int32_t* i_3 = i_2
    
    if (i_1 != 0)
        int32_t* i
        
        do
            i = *i_1
            void* edx_1 = &i_1[1]
            i_2 = i_1
            i_1 = i
            
            if (arg1 u>= edx_1)
                i_2 += &i_3[1]
                
                if (arg1 u< i_2)
                    int32_t eax_6
                    int32_t edx_2
                    edx_2:eax_6 = sx.q(arg1 - edx_1)
                    i_2 = divs.dp.d(edx_2:eax_6, 0x314)
                    
                    if (mods.dp.d(edx_2:eax_6, 0x314) == 0)
                        *(ebx_1 + 0x1c) -= 1
                        int32_t var_8_1 = 0
                        var_8_1.b = 1
                        
                        if (data_aca1f4 != 0)
                            int32_t* ecx = arg1[0x1f]
                            
                            if (ecx != 0)
                                int32_t edx_5 = arg1[0x21] << 6
                                arg1[0x20] = 0
                                sub_4984f0(ecx, edx_5)
                        
                        var_8_1.b = 0
                        `eh vector vbase constructor iterator'(&arg1[7], 0xc, 8, sub_4f4940)
                        var_8_1.b = 2
                        
                        if (data_aca1f4 != 0)
                            int32_t* ecx_1 = arg1[4]
                            
                            if (ecx_1 != 0)
                                int32_t edx_7 = arg1[6] << 6
                                arg1[5] = 0
                                sub_4984f0(ecx_1, edx_7)
                        
                        var_8_1.b = 3
                        int32_t* j = arg1[1]
                        
                        while (j != 0)
                            int32_t* j_1 = j
                            j = j[1]
                            sub_4984f0(j_1, 0xc)
                        
                        arg1[3] = 0
                        arg1[1] = 0
                        arg1[2] = 0
                        int32_t result = *(ebx_1 + 0x10)
                        *arg1 = result
                        *(ebx_1 + 0x10) = arg1
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return result
        while (i != 0)
    
    sub_489550(i_2, &data_5b2591, "IsPointerFromAllocator(pItem)", 
        "d:\ax\trunk\ax2017\engine\xalloc.h", 0x10c, "XTypedAllocator<struct StructureAnim>::Free")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
