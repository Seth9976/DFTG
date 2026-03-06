// 函数名称: sub_5304d0
// 虚拟地址: 0x5304d0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_5304d0(void* arg1)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0xc)
    int32_t ecx = *(arg1 + 0xc)
    int32_t result = *(arg1 + 8) + 1
    
    if (result s> ecx)
        int32_t eax_1 = ecx * 2
        *(arg1 + 0xc) = eax_1
        int32_t ebx_1 = eax_1 << 2
        int32_t eax_2 = data_1151ae0
        uint32_t (* eax_3)[0x4]
        
        if (eax_2 == 0)
            int32_t var_10_1 = ebx_1
            eax_3 = _malloc()
        else
            eax_3 = eax_2(ebx_1, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0x57)
        
        if (eax_3 != 0)
            _memset(eax_3, 0, ebx_1)
        
        sub_579300(eax_3, *(arg1 + 4), *(arg1 + 8) << 2)
        result = _free(*(arg1 + 4))
        *(arg1 + 4) = eax_3
    
    return result
}
