// 函数名称: sub_4fcd90
// 虚拟地址: 0x4fcd90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4fcd90()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_59d120
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_20 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    void* edi = data_114e818
    
    if (edi == 0)
        sub_489550(&ExceptionList, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 
            0x45, "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* edi_1 = *(edi + 0x10)
    void* esi = nullptr
    int32_t result
    
    while (true)
        void* ecx_1
        
        if (esi != 0)
            ecx_1 = *edi_1
            esi += 0x7c
        else
            esi = *edi_1
            ecx_1 = esi
        
        result = edi_1[1] * 0x7c + ecx_1
        
        if (esi u>= result)
            break
        
        while ((*(esi + 0x78) & 0xffff0000) == 0)
            esi += 0x7c
            
            if (esi u>= result)
                goto label_4fcdf1
        
        sub_4fd2f0(esi)
    
    label_4fcdf1:
    void* ebx = data_114e818
    
    if (ebx == 0)
        sub_489550(result, &data_5b2591, "gpGameData", "d:\ax\trunk\ax2017\engine\game.h", 0x45, 
            "GetGameData")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t* edi_2 = *(ebx + 0x10)
    
    if (*edi_2 != 0)
        int32_t esi_1 = 0
    label_4fce14:
        int32_t ecx_3 = *edi_2
        int32_t edx_1 = ecx_3
        
        if (esi_1 != 0)
            esi_1 += 0x7c
        else
            esi_1 = ecx_3
        
        result = edi_2[1] * 0x7c + edx_1
        
        if (esi_1 u< result)
            do
                if ((*(esi_1 + 0x78) & 0xffff0000) != 0)
                    int32_t var_8_1 = 0
                    sub_507730(esi_1 + 8)
                    int32_t var_8_2 = 0xffffffff
                    int32_t ecx_8 = edi_2[3]
                    edi_2[3] = zx.d(*(esi_1 + 0x78))
                    *(esi_1 + 0x78) = ecx_8
                    edi_2[4] -= 1
                    goto label_4fce14
                
                esi_1 += 0x7c
            while (esi_1 u< result)
            
            edx_1 = ecx_3
        
        edi_2[1] = 0
        edi_2[3] = 0
        
        if (edx_1 != 0)
            result = _aligned_free_base(edx_1)
        
        __builtin_memset(edi_2, 0, 0x14)
        edi_2[6] = 0
        edi_2 = *(ebx + 0x10)
    
    if (edi_2 != 0)
        result = sub_4984f0(edi_2, 0x30)
        *(ebx + 0x10) = 0
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
