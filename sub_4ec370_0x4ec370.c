// 函数名称: sub_4ec370
// 虚拟地址: 0x4ec370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void __fastcallsub_4ec370(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx = *arg1
    int32_t ecx = *arg1
    
    if (ecx != 0)
        uint32_t edx = zx.d(ecx.w)
        uint32_t eax
        int32_t ebx_1
        
        if (edx u< data_6c9d94)
            ebx_1 = data_6c9d90
            eax = edx * 0x438
        
        if (edx u>= data_6c9d94 || *(eax + ebx_1 + 0x434) != ecx)
            sub_489550(eax, &data_5b2591, "DataArrayTryToGet(id) != NULL", 
                "d:\ax\trunk\ax2017\engine\dataarray.h", 0x6d, 
                "DataArray<struct UIState>::DataArrayGet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        if (*(edx * 0x438 + ebx_1 + 4) != arg2)
            sub_4ca490(ecx)
            *arg1 = sub_4ca240(arg2)
    else if (arg2 != 0)
        *arg1 = sub_4ca240(arg2)
}
