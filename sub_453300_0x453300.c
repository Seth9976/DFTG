// 函数名称: sub_453300
// 虚拟地址: 0x453300
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_453300(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t ecx = *(arg3 + 0x2a8)
    int32_t ecx = *(arg3 + 0x2a8)
    void* edi = data_632804
    void* var_c = edi
    int32_t* ecx_1
    
    if (ecx == 0)
        ecx_1 = nullptr
    else
        ecx_1 = sub_452cc0(ecx)
    
    int32_t* var_14 = ecx_1
    int32_t var_8
    Unlock(&var_8)
    int32_t esi = var_8
    int32_t* eax_1
    
    if (ecx_1 != esi)
        eax_1 = edi + 0x8c4
        int32_t* var_14_1 = eax_1
        
        do
            if (ecx_1 == 0)
                sub_489550(eax_1, &data_5b2591, "gfx", 
                    "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x2ac, 
                    "Tiles::TileIt::operator *")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            if (ecx_1[0xe] != 1)
                int32_t edx = 0
                eax_1 = *(edi + ecx_1[0x11] * 0xc + 0x8c4)
                int32_t edi_1 = eax_1[0xd]
                
                if (edi_1 s> 0)
                    eax_1 = var_14_1[ecx_1[0x11] * 3] + 0x38
                    
                    do
                        esi = var_8
                        
                        if (*eax_1 == arg2 && (eax_1[1] & arg4) != 0)
                            if (arg5 != 0)
                                *arg5 = ecx_1[0x11]
                            
                            int32_t* eax_7
                            eax_7.b = 1
                            return eax_7
                        
                        edx += 1
                        eax_1 = &eax_1[3]
                    while (edx s< edi_1)
                
                edi = var_c
            
            ecx_1 = ecx_1[0x10]
            
            if (ecx_1 != 0)
                eax_1 = sub_452cc0(ecx_1)
                ecx_1 = eax_1
        while (ecx_1 != esi)
    
    eax_1.b = 0
    return eax_1
}
