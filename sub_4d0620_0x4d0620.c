// 函数名称: sub_4d0620
// 虚拟地址: 0x4d0620
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

voidsub_4d0620()
{
    // 第一条实际指令: if (data_114e844 != 0)
    if (data_114e844 != 0)
        return 
    
    int32_t* eax_1 = sub_498440(0x20)
    eax_1[3] += 1
    int32_t* ecx_1 = *eax_1
    
    if (ecx_1 == 0)
        sub_4982d0(eax_1)
        ecx_1 = *eax_1
    
    *eax_1 = *ecx_1
    ecx_1[4] = 0
    ecx_1[6] = 0
    __builtin_memset(ecx_1, 0, 0x20)
    data_114e844 = ecx_1
    ecx_1[5] = 0x400
    void* eax_3 = sub_4d1ec0(&ecx_1[3])
    int32_t* edi_1 = data_114e844
    
    if (*edi_1 != 0)
        sub_489550(eax_3, &data_5b2591, "mNodeBuckets == NULL", "d:\ax\trunk\ax2017\engine\xmap.h", 
            0x72, "XMap<class XString,struct XAsset *>::SetNumBuckets")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    uint32_t eax_4 = sub_426d50(0x400)
    *edi_1 = sub_498490(eax_4 << 2)
    edi_1[1] = eax_4 - 1
    *(data_114e844 + 0x1c) = 1
}
