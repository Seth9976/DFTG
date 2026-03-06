// 函数名称: sub_4817a0
// 虚拟地址: 0x4817a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __thiscallsub_4817a0(int32_t* arg1, uint32_t (* arg2)[0x4]))[0x4]
{
    // 第一条实际指令: uint32_t (* result)[0x4] = arg2
    uint32_t (* result)[0x4] = arg2
    
    if (result s< 0 || result s> arg1[2])
        sub_489550(result, &data_5b2591, "size_arg >= 0 && size_arg <= mSizeReserved", 
            "d:\ax\trunk\ax2017\engine\xarray.h", 0x62, "XArray<int>::SetSize")
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    int32_t ecx = arg1[1]
    void* edi_1 = result - ecx
    
    if (edi_1 s> 0)
        result = _memset(*arg1 + (ecx << 2), 0, edi_1 << 2)
        arg1[1] += edi_1
    else if (edi_1 s< 0)
        arg1[1] = result
    
    return result
}
