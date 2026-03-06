// 函数名称: sub_477410
// 虚拟地址: 0x477410
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_tsub_477410()
{
    // 第一条实际指令: uint32_t result = data_632560
    uint32_t result = data_632560
    
    if (result != 0)
        uint32_t ecx_1 = zx.d(result.w)
        
        if (ecx_1 u< data_62d6c8)
            void* esi_2 = ecx_1 * 0x8ac + data_62d6c4
            
            if (*(esi_2 + 0x8a8) == result)
                if (*(esi_2 + 4) != 0)
                    sub_49a5a0(esi_2 + 4)
                
                result = zx.d(*(esi_2 + 0x8a8))
                int32_t ecx_3 = data_62d6d0
                data_62d6d0 = result
                *(esi_2 + 0x8a8) = ecx_3
                data_62d6d4 -= 1
                data_632560 = 0
    
    return result
}
