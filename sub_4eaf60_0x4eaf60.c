// 函数名称: sub_4eaf60
// 虚拟地址: 0x4eaf60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_4eaf60()
{
    // 第一条实际指令: int32_t eax_1 = data_1150ecc:8
    int32_t eax_1 = data_1150ecc:8
    
    if (eax_1 s<= 0)
        sub_489550(eax_1, &data_5b2591, "mGrowCount > 0", "d:\ax\trunk\ax2017\engine\xalloc.h", 0x122, 
            "XTypedAllocator<struct SphereTreeNode>::Grow")
        
        if (IsDebuggerPresent() != 1)
            noreturn sub_489700() __tailcall
        
        breakpoint
    
    void* result = sub_4c2e40(eax_1 * 0x1c + 4)
    *result = data_1150ecc:4
    int32_t i = 0
    void* result_1 = data_1150ecc.d
    data_1150ecc:4 = result
    
    if (data_1150ecc:8 s> 0)
        result += 4
        
        do
            *result = result_1
            i += 1
            result_1 = result
            result += 0x1c
        while (i s< data_1150ecc:8)
    
    data_1150ecc.d = result_1
    return result
}
