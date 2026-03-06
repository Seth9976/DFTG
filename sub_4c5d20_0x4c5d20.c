// 函数名称: sub_4c5d20
// 虚拟地址: 0x4c5d20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_4c5d20(int32_t arg1)
{
    // 第一条实际指令: void* result = data_114e838
    void* result = data_114e838
    
    if (arg1 != 0)
        uint32_t edx_1 = zx.d(arg1.w)
        
        if (edx_1 u< *(result + 4))
            void* esi_2 = edx_1 * 0x64 + *result
            
            if (*(esi_2 + 0x60) == arg1)
                result = (*(*data_114e834 + 0x24))(esi_2)
                *(esi_2 + 0x5a) = 0
    
    return result
}
