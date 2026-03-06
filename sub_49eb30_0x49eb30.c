// 函数名称: sub_49eb30
// 虚拟地址: 0x49eb30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_49eb30(void* arg1, char arg2)
{
    // 第一条实际指令: void* var_c = arg1
    void* var_c = arg1
    int32_t ebx
    ebx.b = arg2
    *(arg1 + 0x110c) = 0
    int32_t* ecx = *(arg1 + 0xfdc)
    
    if (ecx != 0)
        sub_4984f0(ecx, *(arg1 + 0xfe0) - ecx)
    
    *(arg1 + 0xfdc) = 0
    int32_t i = 0
    *(arg1 + 0xfe0) = 0
    *(arg1 + 0xfe4) = 0
    *(arg1 + 0x10d8) = 0
    
    if (*(arg1 + 0x1190) s> 0)
        do
            void* eax_1
            int32_t edx_3
            eax_1, edx_3 = sub_49e970(arg1, i)
            edx_3.b = ebx.b
            sub_49eb30()
            i += 1
        while (i s< *(arg1 + 0x1190))
    
    int32_t edi = 0
    void* esi_1 = arg1 + 0x13ec
    int32_t eax
    
    while (true)
        int32_t edx_4 = *esi_1
        
        if (edx_4 != 0)
            eax = zx.d(edx_4.w)
            
            if (eax u>= data_63e5ac)
                break
            
            void* ecx_4 = eax * 0x1418 + data_63e5a8
            
            if (*(ecx_4 + 0x1410) != edx_4)
                break
            
            if (ecx_4 != 0)
                edx_4.b = ebx.b
                sub_49eb30()
                edi += 1
                esi_1 += 4
                
                if (edi s< 5)
                    continue
        
        return 
    
    sub_489550(eax, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
        "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, "DataArray<struct UI2>::DataArrayGet")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
