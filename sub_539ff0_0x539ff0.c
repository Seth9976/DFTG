// 函数名称: sub_539ff0
// 虚拟地址: 0x539ff0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __thiscallsub_539ff0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: if (arg2 != 0)
    if (arg2 != 0)
        uint32_t eax_1 = zx.d(arg2.w)
        
        if (eax_1 u< *(arg1 + 0x3c))
            void* eax_3 = eax_1 * 0x24c + *(arg1 + 0x38)
            
            if (*(eax_3 + 0x248) == arg2)
                return *(eax_3 + 0x18)
    
    return 0
}
