// 函数名称: sub_444640
// 虚拟地址: 0x444640
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_444640(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4, int32_t arg5, int32_t* arg6, int32_t arg7, int32_t* arg8, int32_t arg9, int32_t arg10, int32_t arg11)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    void* ebx_1 = arg2 * 0x1bc + arg3
    int32_t eax = *(ebx_1 + 0x1c4)
    
    if (eax s>= *(ebx_1 + 0x1c0))
        (*(*(ebx_1 + 0x1c) + 4))(arg3, arg2, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)
        
        if (*(arg3 + 0xc3c) != 0)
            return 0xffffffff
        
        eax = *(*(ebx_1 + 0x1c) + 0xc)
        
        if (eax != 0)
            eax = eax(arg3, arg2)
    
    return sub_444560(eax, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
}
