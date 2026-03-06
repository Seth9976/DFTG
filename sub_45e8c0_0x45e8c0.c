// 函数名称: sub_45e8c0
// 虚拟地址: 0x45e8c0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* const __fastcallsub_45e8c0(void* arg1)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x2d4)
    int32_t ecx = *(arg1 + 0x2d4)
    
    if (ecx != 0)
        uint32_t eax_2 = zx.d(ecx.w)
        
        if (eax_2 u< data_62d6c8)
            void* const result = eax_2 * 0x8ac + data_62d6c4
            
            if (*(result + 0x8a8) != ecx)
                return nullptr
            
            return result
    
    return 0
}
