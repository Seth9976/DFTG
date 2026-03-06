// 函数名称: sub_572160
// 虚拟地址: 0x572160
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_572160(int32_t* arg1)
{
    // 第一条实际指令: _free(arg1[0x19])
    _free(arg1[0x19])
    _free(arg1[0x1b])
    void* ecx = arg1[4]
    int32_t eax_3
    void* edi
    
    if (arg1[0x23] != 0)
        if (ecx != 0)
            int32_t eax_5 = *(*(ecx + 8) + 8)
            
            if (eax_5 != 0)
                eax_5(ecx, arg1)
        
        eax_3 = arg1[2]
        edi = arg1
    else
        if (ecx != 0)
            int32_t eax_2 = *(*(ecx + 8) + 8)
            
            if (eax_2 != 0)
                eax_2(ecx, arg1)
        
        _free(arg1[2])
        _free(*arg1)
        _free(arg1[6])
        _free(arg1[8])
        _free(arg1[0x1a])
        eax_3 = arg1[0x1d]
        edi = &arg1[0x25]
    
    _free(eax_3)
    _free(*edi)
    return _free(arg1)
}
