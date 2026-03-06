// 函数名称: sub_531e10
// 虚拟地址: 0x531e10
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_531e10(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    int32_t esi = 0
    int32_t ecx = *(arg1 + 0x2c)
    
    if (ecx s> 0)
        int32_t* eax_1 = *(arg1 + 0x28)
        
        do
            if (*eax_1 == arg2)
                return 0
            
            esi += 1
            eax_1 = &eax_1[1]
        while (esi s< ecx)
    
    if (*(arg1 + 0x30) s>= ecx + 1)
        *(*(arg1 + 0x28) + (ecx << 2)) = arg2
        *(arg1 + 0x2c) += 1
        return 1
    
    int32_t ecx_1 = data_1151ae0
    int32_t eax_3 = (ecx + 1) << 3
    uint32_t (* eax_4)[0x4]
    
    if (ecx_1 == 0)
        int32_t var_18_1 = eax_3
        eax_4 = _malloc()
    else
        eax_4 = ecx_1(eax_3, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0x387)
    
    if (eax_4 != 0)
        _memset(eax_4, 0, (ecx + 1) << 3)
    
    sub_579300(eax_4, *(arg1 + 0x28), *(arg1 + 0x2c) << 2)
    _free(*(arg1 + 0x28))
    int32_t ecx_3 = *(arg1 + 0x2c)
    *(arg1 + 0x28) = eax_4
    *(arg1 + 0x30) = (ecx + 1) * 2
    (*eax_4)[ecx_3] = arg2
    *(arg1 + 0x2c) += 1
    return 1
}
