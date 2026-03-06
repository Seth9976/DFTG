// 函数名称: sub_576c70
// 虚拟地址: 0x576c70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_576c70(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t eax = *(arg1 + 0x14)
    int32_t eax = *(arg1 + 0x14)
    
    if (eax == 0)
        int32_t eax_6 = *(arg2 + 0x18)
        *(arg2 + 0x14) = 0
        
        if (eax_6 != 0)
            _free(eax_6)
            *(arg2 + 0x18) = 0
    else
        int32_t ecx = data_1151ae0
        *(arg2 + 0x14) = eax
        int32_t eax_2 = *(arg1 + 0x14) << 2
        char* eax_3
        
        if (ecx == 0)
            int32_t var_c_1 = eax_2
            eax_3 = _malloc()
        else
            eax_3 = ecx(eax_2, 
                "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\vertexattachment.c", 0x77)
        
        *(arg2 + 0x18) = eax_3
        sub_579300(eax_3, *(arg1 + 0x18), *(arg1 + 0x14) << 2)
    
    int32_t eax_7 = *(arg1 + 0x1c)
    
    if (eax_7 == 0)
        int32_t eax_14 = *(arg2 + 0x20)
        *(arg2 + 0x1c) = 0
        
        if (eax_14 != 0)
            _free(eax_14)
            *(arg2 + 0x20) = 0
        
        int32_t eax_15 = *(arg1 + 0x24)
        *(arg2 + 0x24) = eax_15
        return eax_15
    
    int32_t ecx_2 = data_1151ae0
    *(arg2 + 0x1c) = eax_7
    int32_t eax_9 = *(arg1 + 0x1c) << 2
    char* eax_10
    
    if (ecx_2 == 0)
        int32_t var_c_4 = eax_9
        eax_10 = _malloc()
    else
        eax_10 = ecx_2(eax_9, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\vertexattachment.c", 0x83)
    
    *(arg2 + 0x20) = eax_10
    sub_579300(eax_10, *(arg1 + 0x20), *(arg1 + 0x1c) << 2)
    int32_t eax_13 = *(arg1 + 0x24)
    *(arg2 + 0x24) = eax_13
    return eax_13
}
