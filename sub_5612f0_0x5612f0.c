// 函数名称: sub_5612f0
// 虚拟地址: 0x5612f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_5612f0(int32_t arg1, char* arg2, void* arg3, void* arg4)
{
    // 第一条实际指令: void* var_8 = arg3
    void* var_8 = arg3
    
    if (*(arg3 + 0x10) != 0)
        char* eax = *(arg3 + 0xa8)
        void* ebx_2 = *(arg3 + 0xac) - eax
        
        if (ebx_2 s< arg4)
            sub_579300(arg2, eax, ebx_2)
            int32_t edi_1 = arg4 - ebx_2
            int32_t eax_4 = (*(arg3 + 0x10))(*(arg3 + 0x1c), arg2 + ebx_2, edi_1)
            *(arg3 + 0xa8) = *(arg3 + 0xac)
            int32_t result
            result.b = eax_4 == edi_1
            return result
    
    char* ecx_1 = *(arg3 + 0xa8)
    
    if (ecx_1 + arg4 u> *(arg3 + 0xac))
        return 0
    
    sub_579300(arg2, ecx_1, arg4)
    *(arg3 + 0xa8) += arg4
    return 1
}
