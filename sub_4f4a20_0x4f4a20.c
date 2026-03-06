// 函数名称: sub_4f4a20
// 虚拟地址: 0x4f4a20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4f4a20(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = arg1[2]
    int32_t eax = arg1[2]
    
    if (eax s<= 0)
        sub_489550(eax, &data_5b2591, "mGrowCount > 0", "d:\ax\trunk\ax2017\engine\xalloc.h", 0x122, 
            "XTypedAllocator<struct StructureAnim>::Grow")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    void* result = sub_4c2e40(eax * 0x314 + 4)
    *result = arg1[1]
    int32_t i = 0
    void* result_1 = *arg1
    arg1[1] = result
    
    if (arg1[2] s> 0)
        result += 4
        
        do
            *result = result_1
            i += 1
            result_1 = result
            result += 0x314
        while (i s< arg1[2])
    
    *arg1 = result_1
    return result
}
