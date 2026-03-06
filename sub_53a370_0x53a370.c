// 函数名称: sub_53a370
// 虚拟地址: 0x53a370
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* const __thiscallsub_53a370(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_2 = zx.d(arg2.w)
        
        if (eax_2 u< *(arg1 + 0x3c))
            void* const result = eax_2 * 0x24c + *(arg1 + 0x38)
            
            if (*(result + 0x248) != arg2)
                result = nullptr
            
            result.b = result != 0
            return result
    
    int32_t eax_1
    eax_1.b = false
    return 0
}
