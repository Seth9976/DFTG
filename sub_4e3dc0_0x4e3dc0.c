// 函数名称: sub_4e3dc0
// 虚拟地址: 0x4e3dc0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_4e3dc0(uint32_t arg1, int32_t arg2)
{
    // 第一条实际指令: uint32_t eax = arg1
    uint32_t eax = arg1
    void* esi = data_1150b94
    int32_t ebx_1 = arg2 * 7
    int32_t edi_1 = eax * 7
    int32_t ecx_1 = *(esi + 0xbbaa98)
    void* ecx_3
    void* edx_1
    
    if (ecx_1 != 0x28)
        void* ecx_6 = mods.dp.d(sx.q(*(esi + 0xb9b680) + ecx_1 + 1), 0x28) * 0x4a490 + esi
        edx_1 = (arg1 << 4) + 0x3aa8c + ecx_6
        ecx_3 = ecx_6 + (arg2 << 4) + 0x3aa8c
        eax = arg1
    else
        edx_1 = esi + 0xb9b68c + (edi_1 << 2)
        ecx_3 = esi + 0xb9b68c + (ebx_1 << 2)
    
    if (*(esi + 0xbbaab0) == 0)
    label_4e3e5a:
        eax = *(esi + 0xbbaa90)
        int32_t eax_7
        int32_t xmm0_1
        int32_t xmm1_1
        
        if (eax != 1)
            if (eax == 4)
                xmm0_1 = *(edx_1 + 0xc)
                xmm1_1 = *(ecx_3 + 0xc)
                goto label_4e3e8e
            
            if (eax == 0)
                xmm0_1 = *(edx_1 + 4)
                xmm1_1 = *(ecx_3 + 4)
                goto label_4e3e8e
            
            if (eax != 2)
                if (eax != 3)
                    sub_489550(eax, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\engine\perfevent.cpp", 
                        0x257, "ProfilerSortFunc")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_489700()
                    noreturn
                
                eax = __stricmp(*(esi + (edi_1 << 2) + 0xb9b684), *(esi + (ebx_1 << 2) + 0xb9b684))
                
                if (eax s>= 0)
                    if (eax s> 0)
                        eax.b = 0
                        return eax
                    
                    eax = __stricmp(*(esi + (edi_1 << 2) + 0xb9b688), *(esi + (ebx_1 << 2) + 0xb9b688))
                    
                    if (eax s>= 0)
                        if (eax s> 0)
                            eax.b = 0
                            return eax
                        
                        eax_7.b = arg1 s> arg2
                        return eax_7
            else
                eax = *(edx_1 + 8)
                int32_t ecx_7 = *(ecx_3 + 8)
                
                if (eax s<= ecx_7)
                    if (eax s< ecx_7)
                        eax.b = 0
                        return eax
                    
                    eax_7.b = arg1 s> arg2
                    return eax_7
        else
            xmm0_1 = *edx_1
            xmm1_1 = *ecx_3
        label_4e3e8e:
            
            if (not(xmm0_1 f> xmm1_1))
                if (xmm1_1 f<= xmm0_1)
                    eax_7.b = arg1 s> arg2
                    return eax_7
                
                eax.b = 0
                return eax
    else if (*(esi + 0xbbaab4) != eax)
        if (*(esi + 0xbbaab4) != arg2)
            goto label_4e3e5a
        
        eax.b = 0
        return eax
    
    eax.b = 1
    return eax
}
