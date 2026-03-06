// 函数名称: sub_4e52f0
// 虚拟地址: 0x4e52f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_4e52f0()
{
    // 第一条实际指令: int32_t eax_2 = data_1150da4:8
    int32_t eax_2 = data_1150da4:8
    
    if (eax_2 s<= 0)
        sub_489550(eax_2, &data_5b2591, "mGrowCount > 0", "d:\ax\trunk\ax2017\engine\xalloc.h", 0x122, 
            "XTypedAllocator<struct RTreeNode>::Grow")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    void* result = sub_4c2e40(eax_2 * 0x24 + 4)
    *result = data_1150da4:4
    int32_t i = 0
    void* result_1 = data_1150da4.d
    data_1150da4:4 = result
    
    if (data_1150da4:8 s> 0)
        result += 4
        
        do
            *result = result_1
            i += 1
            result_1 = result
            result += 0x24
        while (i s< data_1150da4:8)
    
    data_1150da4.d = result_1
    return result
}
