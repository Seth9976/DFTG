// 函数名称: sub_523220
// 虚拟地址: 0x523220
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_523220(int32_t* arg1))[0x4]
{
    // 第一条实际指令: int32_t eax = arg1[4]
    int32_t eax = arg1[4]
    int32_t var_10
    char const* const ecx
    
    if (eax u< arg1[2])
        eax = arg1[3]
        int32_t edi_1 = arg1[1]
        
        if (eax u<= edi_1)
            int32_t ecx_1 = *arg1
            int32_t eax_1
            
            if (eax != edi_1)
                edi_1 = eax
                eax_1 = *(eax * 0x14c + ecx_1 + 0x148)
            else
                eax_1 = edi_1 + 1
                arg1[1] = eax_1
            
            arg1[3] = eax_1
            uint32_t (* result)[0x4] = edi_1 * 0x14c + ecx_1
            _memset(result, 0, 0x148)
            (*result)[0x52] = arg1[5] << 0x10 | edi_1
            arg1[5] += 1
            
            if (arg1[5] == 0x10000)
                arg1[5] = 1
            
            arg1[4] += 1
            return result
        
        char const* const __saved_ebx_1 = "DataArray<struct OpenGLBufferData>::DataArrayAlloc"
        var_10 = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        char const* const __saved_ebx = "DataArray<struct OpenGLBufferData>::DataArrayAlloc"
        var_10 = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\engine\dataarray.h", var_10, 
        "DataArray<struct OpenGLBufferData>::DataArrayAlloc")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
